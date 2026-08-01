"""
GUI — Tkinter interfeysi.
Butun sinif strukturu (Student, GraduateStudent, PhDStudent) ve
validasiya funksiyalari (is_valid_phone, is_valid_email) birbaşa
student_program.py-dan import olunur - o fayl HEC DEYISMEYIB.

Bu fayl yalnix pencere/duyme kodunu saxlayir. Backend-deki
show_info() metodlari hele de print() istifade etdiyi ucun,
onlarin ciixisini tutub (redirect) GUI-deki metn qutusunda gosteririk.
"""

import io
import tkinter as tk
from tkinter import ttk, messagebox
from contextlib import redirect_stdout

# Həm `py Gui.py`, həm də `py -m Python.test_prqramlar.Gui` üçün.
try:
    from .Backend import GraduateStudent, PhDStudent, is_valid_phone, is_valid_email
except ImportError:
    from Backend import GraduateStudent, PhDStudent, is_valid_phone, is_valid_email


class StudentApp:
    def __init__(self, root):
        self.root = root
        self.root.title("Tələbə Məlumatları")
        self.root.configure(bg="#0d1016")
        # Hər iki məlumat kartı və aşağıdakı nəticə sahəsi görünməlidir.
        self.root.geometry("620x820")
        self.root.resizable(False, True)

        self._build_style()
        self._build_ui()

    # ---------- gorunus ----------
    def _build_style(self):
        style = ttk.Style()
        style.theme_use("clam")
        style.configure("TFrame", background="#0d1016")
        style.configure("Card.TFrame", background="#161b25", relief="flat", borderwidth=0)
        style.configure(
            "TLabel", background="#161b25", foreground="#e9edf5",
            font=("Segoe UI", 10)
        )
        style.configure(
            "Title.TLabel", background="#0d1016", foreground="#e9edf5",
            font=("Segoe UI", 16, "bold")
        )
        style.configure(
            "Head.TLabel", background="#161b25", foreground="#43d9b0",
            font=("Segoe UI", 11, "bold")
        )

    def _build_ui(self):
        title = ttk.Label(
            self.root, text="GraduateStudent / PhDStudent — GUI",
            style="Title.TLabel"
        )
        title.pack(pady=(16, 10))

        # -------- Graduate Student kartı --------
        self.gs_fields = self._build_card(
            "Graduate Student",
            ["name", "surname", "phone", "email", "university"],
            self._show_graduate
        )

        # -------- PhD Student kartı --------
        self.phd_fields = self._build_card(
            "PhD Student",
            ["name", "surname", "phone", "email", "university", "research_topic"],
            self._show_phd
        )

        # -------- Çıxış paneli --------
        out_label = ttk.Label(self.root, text="Nəticə (show_info() çıxışı)", style="Title.TLabel")
        out_label.pack(anchor="w", padx=16, pady=(4, 4))

        self.output = tk.Text(
            self.root, height=10, bg="#0a0c11", fg="#43d9b0",
            insertbackground="#43d9b0", font=("Consolas", 10),
            relief="flat", padx=10, pady=8
        )
        self.output.pack(fill="both", expand=False, padx=16, pady=(0, 16))
        self.output.insert("1.0", ">>> hazır")
        self.output.configure(state="disabled")

    def _build_card(self, title, field_names, on_submit):
        card = ttk.Frame(self.root, style="Card.TFrame")
        card.pack(fill="x", padx=16, pady=6)

        head = ttk.Label(card, text=title, style="Head.TLabel")
        head.pack(anchor="w", padx=12, pady=(10, 6))

        labels = {
            "name": "Ad", "surname": "Soyad", "phone": "Telefon",
            "email": "Email", "university": "Universitet",
            "research_topic": "Tədqiqat mövzusu",
        }

        entries = {}
        for field in field_names:
            row = ttk.Frame(card, style="Card.TFrame")
            row.pack(fill="x", padx=12, pady=3)

            lbl = ttk.Label(row, text=labels[field] + ":", width=16, style="TLabel")
            lbl.pack(side="left")

            entry = tk.Entry(
                row, bg="#0a0c11", fg="#e9edf5", insertbackground="#e9edf5",
                relief="flat", font=("Consolas", 10)
            )
            entry.pack(side="left", fill="x", expand=True, ipady=4)
            entries[field] = entry

        btn = tk.Button(
            card, text=f"{title} yarat və göstər",
            bg="#5b8def", fg="#08110d", activebackground="#4a78d1",
            relief="flat", font=("Segoe UI", 9, "bold"), padx=10, pady=6,
            cursor="hand2",
            command=lambda: on_submit(entries)
        )
        btn.pack(fill="x", padx=12, pady=(8, 12))

        return entries

    # ---------- validasiya + backend cagirisi ----------
    def _read_common(self, entries):
        """Ad/soyad/telefon/email/universitet sahələrini oxuyub yoxlayır.
        Uğurlu olarsa dict qaytarır, olmasa None qaytarıb xəbərdarlıq göstərir."""
        name = entries["name"].get().strip()
        surname = entries["surname"].get().strip()
        phone = entries["phone"].get().strip()
        email = entries["email"].get().strip()
        university = entries["university"].get().strip()

        if not name or not surname or not university:
            messagebox.showwarning("Xəbərdarlıq", "Ad, soyad və universitet boş ola bilməz.")
            return None
        if not phone or not is_valid_phone(phone):
            messagebox.showerror(
                "Xəta",
                "Telefon nömrəsi düzgün deyil. Rəqəm, boşluq, tire və başda + qəbul olunur."
            )
            return None
        if not email or not is_valid_email(email):
            messagebox.showerror("Xəta", "Email formatı düzgün deyil. Nümunə: user@example.com")
            return None

        return {
            "name": name, "surname": surname, "phone": phone,
            "email": email, "university": university,
        }

    def _run_show_info(self, student):
        """Backend-in show_info() metodunu dəyişmədən çağırır,
        onun print() çıxışını tutub geri qaytarır."""
        buf = io.StringIO()
        with redirect_stdout(buf):
            student.show_info()
        return buf.getvalue()

    def _append_output(self, text):
        self.output.configure(state="normal")
        self.output.insert("end", "\n" + text)
        self.output.see("end")
        self.output.configure(state="disabled")

    def _show_graduate(self, entries):
        data = self._read_common(entries)
        if data is None:
            return
        student = GraduateStudent(
            data["name"], data["surname"], data["phone"], data["email"], data["university"]
        )
        out = self._run_show_info(student)
        self._append_output("--- Graduate Student ---\n" + out)

    def _show_phd(self, entries):
        data = self._read_common(entries)
        if data is None:
            return
        research_topic = entries["research_topic"].get().strip()
        if not research_topic:
            messagebox.showwarning("Xəbərdarlıq", "Tədqiqat mövzusu boş ola bilməz.")
            return
        student = PhDStudent(
            data["name"], data["surname"], data["phone"], data["email"],
            data["university"], research_topic
        )
        out = self._run_show_info(student)
        self._append_output("--- PhD Student ---\n" + out)


def main():
    root = tk.Tk()
    app = StudentApp(root)
    root.mainloop()


if __name__ == "__main__":
    main()
