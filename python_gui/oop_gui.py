from datetime import datetime
import tkinter as tk
from tkinter import ttk, messagebox, scrolledtext
import json

class Student:
    """Tələbə sinifi"""

    student_count = 0

    def __init__(self, id, name, age, grade):
        self.id = id
        self.name = name
        self.age = age
        self.grade = grade
        self.courses = []
        self.gpa = 0.0
        Student.student_count += 1

    def add_course(self, course):
        """Kursə tələbə əlavə et"""
        if course not in self.courses:
            self.courses.append(course)
            return True
        return False

    def calculate_gpa(self):
        """GPA-nı hesabla"""
        if not self.courses:
            self.gpa = 0.0
            return 0.0

        total_grade = sum(course.grade for course in self.courses)
        self.gpa = total_grade / len(self.courses)
        return round(self.gpa, 2)

    def get_info(self):
        """Tələbə məlumatı"""
        return f"""ID: {self.id}
Ad: {self.name}
Yaş: {self.age}
Sinif: {self.grade}
GPA: {self.calculate_gpa()}
Kurs sayı: {len(self.courses)}"""

    def __str__(self):
        return f"{self.name} (ID: {self.id}, Sinif: {self.grade})"

    def to_dict(self):
        return {
            'id': self.id,
            'name': self.name,
            'age': self.age,
            'grade': self.grade,
            'courses': [course.course_id for course in self.courses],
            'gpa': self.gpa
        }


class Course:
    """Kurs sinifi"""

    course_count = 0

    def __init__(self, course_id, name, instructor, credits, grade=0):
        self.course_id = course_id
        self.name = name
        self.instructor = instructor
        self.credits = credits
        self.grade = grade
        self.students = []
        Course.course_count += 1

    def add_student(self, student):
        """Kursə tələbə əlavə et"""
        if student not in self.students:
            self.students.append(student)
            return True
        return False

    def get_course_info(self):
        """Kurs məlumatı"""
        return f"""Kurs ID: {self.course_id}
Kurs Adı: {self.name}
Müəllim: {self.instructor}
Kreditlər: {self.credits}
Qiymət: {self.grade}
Tələbə sayı: {len(self.students)}"""

    def __str__(self):
        return f"{self.name} (Müəllim: {self.instructor})"

    def to_dict(self):
        return {
            'course_id': self.course_id,
            'name': self.name,
            'instructor': self.instructor,
            'credits': self.credits,
            'grade': self.grade,
            'students': [student.id for student in self.students]
        }


class School:
    """Məktəb sinifi"""

    def __init__(self, school_name):
        self.school_name = school_name
        self.students = []
        self.courses = []
        self.creation_date = datetime.now()

    def add_student(self, student):
        """Məktəbə tələbə əlavə et"""
        if student not in self.students:
            self.students.append(student)
            return True
        return False

    def add_course(self, course):
        """Məktəbə kurs əlavə et"""
        if course not in self.courses:
            self.courses.append(course)
            return True
        return False

    def enroll_student_in_course(self, student, course):
        """Tələbəni kursə qeydiyyat et"""
        if student in self.students and course in self.courses:
            if student.add_course(course):
                course.add_student(student)
                return True
        return False

    def get_student_by_id(self, student_id):
        """ID-yə görə tələbə tap"""
        for student in self.students:
            if student.id == student_id:
                return student
        return None

    def get_course_by_id(self, course_id):
        """ID-yə görə kurs tap"""
        for course in self.courses:
            if course.course_id == course_id:
                return course
        return None

    def to_dict(self):
        return {
            'school_name': self.school_name,
            'creation_date': self.creation_date.isoformat(),
            'students': [student.to_dict() for student in self.students],
            'courses': [course.to_dict() for course in self.courses]
        }


class StudentManagementGUI:
    def __init__(self, root):
        self.root = root
        self.root.title("🏫 Tələbə İdarəçiliyi Sistemi - OOP GUI")
        self.root.geometry("1200x800")
        self.root.configure(bg="#f0f0f0")

        # Məktəb yaradılması
        self.school = School("AzER Məktəbi")

        # GUI komponentləri
        self.setup_ui()

        # Demo məlumatları
        self.load_demo_data()

    def setup_ui(self):
        """UI komponentlərini qur"""
        # Ana frame
        main_frame = tk.Frame(self.root, bg="#f0f0f0")
        main_frame.pack(fill=tk.BOTH, expand=True, padx=10, pady=10)

        # Başlıq
        title_label = tk.Label(
            main_frame,
            text="🏫 Tələbə İdarəçiliyi Sistemi",
            font=("Arial", 20, "bold"),
            bg="#f0f0f0",
            fg="#333333"
        )
        title_label.pack(pady=10)

        # Notebook (tab sistemi)
        self.notebook = ttk.Notebook(main_frame)
        self.notebook.pack(fill=tk.BOTH, expand=True, pady=10)

        # Tab-lar
        self.create_students_tab()
        self.create_courses_tab()
        self.create_enrollment_tab()
        self.create_reports_tab()

        # Status bar
        self.status_label = tk.Label(
            main_frame,
            text="Hazır",
            font=("Arial", 10),
            bg="#f0f0f0",
            fg="#666666",
            anchor="w"
        )
        self.status_label.pack(fill=tk.X, pady=(0, 5))

    def create_students_tab(self):
        """Tələbələr tab-ı"""
        tab = tk.Frame(self.notebook, bg="#f5f5f5")
        self.notebook.add(tab, text="👨‍🎓 Tələbələr")

        # Sol panel - əlavə etmə formu
        left_panel = tk.Frame(tab, bg="#f5f5f5", width=400)
        left_panel.pack(side=tk.LEFT, fill=tk.Y, padx=10, pady=10)

        # Form başlığı
        form_title = tk.Label(left_panel, text="Yeni Tələbə Əlavə Et", font=("Arial", 14, "bold"), bg="#f5f5f5")
        form_title.pack(pady=10)

        # Form frame
        form_frame = tk.Frame(left_panel, bg="#f5f5f5")
        form_frame.pack(pady=10)

        # ID
        tk.Label(form_frame, text="ID:", font=("Arial", 11), bg="#f5f5f5").grid(row=0, column=0, sticky="w", pady=5)
        self.student_id_entry = tk.Entry(form_frame, font=("Arial", 11), width=25)
        self.student_id_entry.grid(row=0, column=1, pady=5, padx=(10, 0))

        # Ad
        tk.Label(form_frame, text="Ad:", font=("Arial", 11), bg="#f5f5f5").grid(row=1, column=0, sticky="w", pady=5)
        self.student_name_entry = tk.Entry(form_frame, font=("Arial", 11), width=25)
        self.student_name_entry.grid(row=1, column=1, pady=5, padx=(10, 0))

        # Yaş
        tk.Label(form_frame, text="Yaş:", font=("Arial", 11), bg="#f5f5f5").grid(row=2, column=0, sticky="w", pady=5)
        self.student_age_entry = tk.Entry(form_frame, font=("Arial", 11), width=25)
        self.student_age_entry.grid(row=2, column=1, pady=5, padx=(10, 0))

        # Sinif
        tk.Label(form_frame, text="Sinif:", font=("Arial", 11), bg="#f5f5f5").grid(row=3, column=0, sticky="w", pady=5)
        self.student_grade_entry = tk.Entry(form_frame, font=("Arial", 11), width=25)
        self.student_grade_entry.grid(row=3, column=1, pady=5, padx=(10, 0))

        # Düymələr
        button_frame = tk.Frame(left_panel, bg="#f5f5f5")
        button_frame.pack(pady=20)

        tk.Button(button_frame, text="➕ Əlavə Et", font=("Arial", 11, "bold"),
                 bg="#28A745", fg="white", padx=20, pady=8,
                 command=self.add_student).pack(side=tk.LEFT, padx=5)

        tk.Button(button_frame, text="🗑️ Təmizlə", font=("Arial", 11, "bold"),
                 bg="#6C757D", fg="white", padx=20, pady=8,
                 command=self.clear_student_form).pack(side=tk.LEFT, padx=5)

        # Sağ panel - tələbələr siyahısı
        right_panel = tk.Frame(tab, bg="#f5f5f5")
        right_panel.pack(side=tk.RIGHT, fill=tk.BOTH, expand=True, padx=10, pady=10)

        # Siyahı başlığı
        list_title = tk.Label(right_panel, text="Tələbələr Siyahısı", font=("Arial", 14, "bold"), bg="#f5f5f5")
        list_title.pack(pady=10)

        # Axtarış
        search_frame = tk.Frame(right_panel, bg="#f5f5f5")
        search_frame.pack(pady=5)

        tk.Label(search_frame, text="Axtar:", font=("Arial", 10), bg="#f5f5f5").pack(side=tk.LEFT)
        self.student_search_entry = tk.Entry(search_frame, font=("Arial", 10), width=30)
        self.student_search_entry.pack(side=tk.LEFT, padx=(5, 0))
        self.student_search_entry.bind('<KeyRelease>', self.search_students)

        # Treeview
        tree_frame = tk.Frame(right_panel, bg="#f5f5f5")
        tree_frame.pack(fill=tk.BOTH, expand=True, pady=10)

        columns = ("ID", "Ad", "Yaş", "Sinif", "GPA", "Kurslar")
        self.students_tree = ttk.Treeview(tree_frame, columns=columns, show="headings", height=15)

        for col in columns:
            self.students_tree.heading(col, text=col)
            self.students_tree.column(col, width=100)

        scrollbar = ttk.Scrollbar(tree_frame, orient=tk.VERTICAL, command=self.students_tree.yview)
        self.students_tree.configure(yscrollcommand=scrollbar.set)

        self.students_tree.pack(side=tk.LEFT, fill=tk.BOTH, expand=True)
        scrollbar.pack(side=tk.RIGHT, fill=tk.Y)

        # Treeview klik eventi
        self.students_tree.bind('<Double-1>', self.show_student_details)

    def create_courses_tab(self):
        """Kurslar tab-ı"""
        tab = tk.Frame(self.notebook, bg="#f5f5f5")
        self.notebook.add(tab, text="📚 Kurslar")

        # Sol panel - əlavə etmə formu
        left_panel = tk.Frame(tab, bg="#f5f5f5", width=400)
        left_panel.pack(side=tk.LEFT, fill=tk.Y, padx=10, pady=10)

        # Form başlığı
        form_title = tk.Label(left_panel, text="Yeni Kurs Əlavə Et", font=("Arial", 14, "bold"), bg="#f5f5f5")
        form_title.pack(pady=10)

        # Form frame
        form_frame = tk.Frame(left_panel, bg="#f5f5f5")
        form_frame.pack(pady=10)

        # Kurs ID
        tk.Label(form_frame, text="Kurs ID:", font=("Arial", 11), bg="#f5f5f5").grid(row=0, column=0, sticky="w", pady=5)
        self.course_id_entry = tk.Entry(form_frame, font=("Arial", 11), width=25)
        self.course_id_entry.grid(row=0, column=1, pady=5, padx=(10, 0))

        # Kurs adı
        tk.Label(form_frame, text="Kurs Adı:", font=("Arial", 11), bg="#f5f5f5").grid(row=1, column=0, sticky="w", pady=5)
        self.course_name_entry = tk.Entry(form_frame, font=("Arial", 11), width=25)
        self.course_name_entry.grid(row=1, column=1, pady=5, padx=(10, 0))

        # Müəllim
        tk.Label(form_frame, text="Müəllim:", font=("Arial", 11), bg="#f5f5f5").grid(row=2, column=0, sticky="w", pady=5)
        self.course_instructor_entry = tk.Entry(form_frame, font=("Arial", 11), width=25)
        self.course_instructor_entry.grid(row=2, column=1, pady=5, padx=(10, 0))

        # Kreditlər
        tk.Label(form_frame, text="Kreditlər:", font=("Arial", 11), bg="#f5f5f5").grid(row=3, column=0, sticky="w", pady=5)
        self.course_credits_entry = tk.Entry(form_frame, font=("Arial", 11), width=25)
        self.course_credits_entry.grid(row=3, column=1, pady=5, padx=(10, 0))

        # Qiymət
        tk.Label(form_frame, text="Qiymət:", font=("Arial", 11), bg="#f5f5f5").grid(row=4, column=0, sticky="w", pady=5)
        self.course_grade_entry = tk.Entry(form_frame, font=("Arial", 11), width=25)
        self.course_grade_entry.grid(row=4, column=1, pady=5, padx=(10, 0))

        # Düymələr
        button_frame = tk.Frame(left_panel, bg="#f5f5f5")
        button_frame.pack(pady=20)

        tk.Button(button_frame, text="➕ Əlavə Et", font=("Arial", 11, "bold"),
                 bg="#28A745", fg="white", padx=20, pady=8,
                 command=self.add_course).pack(side=tk.LEFT, padx=5)

        tk.Button(button_frame, text="🗑️ Təmizlə", font=("Arial", 11, "bold"),
                 bg="#6C757D", fg="white", padx=20, pady=8,
                 command=self.clear_course_form).pack(side=tk.LEFT, padx=5)

        # Sağ panel - kurslar siyahısı
        right_panel = tk.Frame(tab, bg="#f5f5f5")
        right_panel.pack(side=tk.RIGHT, fill=tk.BOTH, expand=True, padx=10, pady=10)

        # Siyahı başlığı
        list_title = tk.Label(right_panel, text="Kurslar Siyahısı", font=("Arial", 14, "bold"), bg="#f5f5f5")
        list_title.pack(pady=10)

        # Axtarış
        search_frame = tk.Frame(right_panel, bg="#f5f5f5")
        search_frame.pack(pady=5)

        tk.Label(search_frame, text="Axtar:", font=("Arial", 10), bg="#f5f5f5").pack(side=tk.LEFT)
        self.course_search_entry = tk.Entry(search_frame, font=("Arial", 10), width=30)
        self.course_search_entry.pack(side=tk.LEFT, padx=(5, 0))
        self.course_search_entry.bind('<KeyRelease>', self.search_courses)

        # Treeview
        tree_frame = tk.Frame(right_panel, bg="#f5f5f5")
        tree_frame.pack(fill=tk.BOTH, expand=True, pady=10)

        columns = ("Kurs ID", "Ad", "Müəllim", "Kreditlər", "Qiymət", "Tələbələr")
        self.courses_tree = ttk.Treeview(tree_frame, columns=columns, show="headings", height=15)

        for col in columns:
            self.courses_tree.heading(col, text=col)
            self.courses_tree.column(col, width=100)

        scrollbar = ttk.Scrollbar(tree_frame, orient=tk.VERTICAL, command=self.courses_tree.yview)
        self.courses_tree.configure(yscrollcommand=scrollbar.set)

        self.courses_tree.pack(side=tk.LEFT, fill=tk.BOTH, expand=True)
        scrollbar.pack(side=tk.RIGHT, fill=tk.Y)

        # Treeview klik eventi
        self.courses_tree.bind('<Double-1>', self.show_course_details)

    def create_enrollment_tab(self):
        """Qeydiyyat tab-ı"""
        tab = tk.Frame(self.notebook, bg="#f5f5f5")
        self.notebook.add(tab, text="📝 Qeydiyyat")

        # Ana frame
        main_frame = tk.Frame(tab, bg="#f5f5f5")
        main_frame.pack(fill=tk.BOTH, expand=True, padx=20, pady=20)

        # Başlıq
        title = tk.Label(main_frame, text="Tələbəni Kursə Qeydiyyat Et", font=("Arial", 16, "bold"), bg="#f5f5f5")
        title.pack(pady=20)

        # Seçim frame
        selection_frame = tk.Frame(main_frame, bg="#f5f5f5")
        selection_frame.pack(pady=20)

        # Tələbə seçimi
        student_frame = tk.Frame(selection_frame, bg="#f5f5f5")
        student_frame.pack(side=tk.LEFT, padx=20)

        tk.Label(student_frame, text="Tələbə seçin:", font=("Arial", 12, "bold"), bg="#f5f5f5").pack(pady=5)
        self.student_combo = ttk.Combobox(student_frame, font=("Arial", 11), width=30, state="readonly")
        self.student_combo.pack(pady=5)

        # Kurs seçimi
        course_frame = tk.Frame(selection_frame, bg="#f5f5f5")
        course_frame.pack(side=tk.LEFT, padx=20)

        tk.Label(course_frame, text="Kurs seçin:", font=("Arial", 12, "bold"), bg="#f5f5f5").pack(pady=5)
        self.course_combo = ttk.Combobox(course_frame, font=("Arial", 11), width=30, state="readonly")
        self.course_combo.pack(pady=5)

        # Düymə
        enroll_button = tk.Button(
            main_frame,
            text="✅ Qeydiyyat Et",
            font=("Arial", 14, "bold"),
            bg="#007ACC",
            fg="white",
            padx=30,
            pady=15,
            command=self.enroll_student
        )
        enroll_button.pack(pady=30)

        # Məlumat sahəsi
        info_frame = tk.Frame(main_frame, bg="#f5f5f5")
        info_frame.pack(fill=tk.BOTH, expand=True, pady=20)

        tk.Label(info_frame, text="Qeydiyyat Məlumatı:", font=("Arial", 12, "bold"), bg="#f5f5f5").pack(anchor="w", pady=(0, 10))

        self.enrollment_text = scrolledtext.ScrolledText(info_frame, height=15, font=("Consolas", 10))
        self.enrollment_text.pack(fill=tk.BOTH, expand=True)

    def create_reports_tab(self):
        """Hesabatlar tab-ı"""
        tab = tk.Frame(self.notebook, bg="#f5f5f5")
        self.notebook.add(tab, text="📊 Hesabatlar")

        # Ana frame
        main_frame = tk.Frame(tab, bg="#f5f5f5")
        main_frame.pack(fill=tk.BOTH, expand=True, padx=20, pady=20)

        # Başlıq
        title = tk.Label(main_frame, text="Sistem Hesabatları", font=("Arial", 16, "bold"), bg="#f5f5f5")
        title.pack(pady=20)

        # Düymələr frame
        buttons_frame = tk.Frame(main_frame, bg="#f5f5f5")
        buttons_frame.pack(pady=20)

        tk.Button(buttons_frame, text="📈 Ümumi Statistika", font=("Arial", 11, "bold"),
                 bg="#28A745", fg="white", padx=20, pady=10,
                 command=self.show_statistics).pack(side=tk.LEFT, padx=10)

        tk.Button(buttons_frame, text="💾 Məlumatları Saxla", font=("Arial", 11, "bold"),
                 bg="#007ACC", fg="white", padx=20, pady=10,
                 command=self.save_data).pack(side=tk.LEFT, padx=10)

        tk.Button(buttons_frame, text="📂 Məlumatları Yüklə", font=("Arial", 11, "bold"),
                 bg="#6C757D", fg="white", padx=20, pady=10,
                 command=self.load_data).pack(side=tk.LEFT, padx=10)

        # Hesabat sahəsi
        report_frame = tk.Frame(main_frame, bg="#f5f5f5")
        report_frame.pack(fill=tk.BOTH, expand=True, pady=20)

        tk.Label(report_frame, text="Hesabat:", font=("Arial", 12, "bold"), bg="#f5f5f5").pack(anchor="w", pady=(0, 10))

        self.report_text = scrolledtext.ScrolledText(report_frame, height=20, font=("Consolas", 10))
        self.report_text.pack(fill=tk.BOTH, expand=True)

    def add_student(self):
        """Tələbə əlavə et"""
        try:
            student_id = int(self.student_id_entry.get().strip())
            name = self.student_name_entry.get().strip()
            age = int(self.student_age_entry.get().strip())
            grade = self.student_grade_entry.get().strip()

            if not name or not grade:
                messagebox.showerror("Xəta", "Bütün sahələri doldurun!")
                return

            if age < 0 or age > 150:
                messagebox.showerror("Xəta", "Yaş 0-150 arasında olmalıdır!")
                return

            # ID yoxlaması
            if self.school.get_student_by_id(student_id):
                messagebox.showerror("Xəta", f"ID {student_id} artıq mövcuddur!")
                return

            student = Student(student_id, name, age, grade)
            if self.school.add_student(student):
                self.update_students_list()
                self.update_student_combo()
                self.clear_student_form()
                self.status_label.config(text=f"✓ {name} tələbə kimi əlavə edildi")
                messagebox.showinfo("Uğur", f"{name} uğurla əlavə edildi!")
            else:
                messagebox.showerror("Xəta", "Tələbə əlavə edilə bilmədi!")

        except ValueError:
            messagebox.showerror("Xəta", "ID və Yaş rəqəm olmalıdır!")

    def add_course(self):
        """Kurs əlavə et"""
        try:
            course_id = self.course_id_entry.get().strip()
            name = self.course_name_entry.get().strip()
            instructor = self.course_instructor_entry.get().strip()
            credits = int(self.course_credits_entry.get().strip())
            grade = int(self.course_grade_entry.get().strip() or "0")

            if not course_id or not name or not instructor:
                messagebox.showerror("Xəta", "Bütün sahələri doldurun!")
                return

            if credits < 1 or credits > 10:
                messagebox.showerror("Xəta", "Kreditlər 1-10 arasında olmalıdır!")
                return

            # Kurs ID yoxlaması
            if self.school.get_course_by_id(course_id):
                messagebox.showerror("Xəta", f"Kurs ID {course_id} artıq mövcuddur!")
                return

            course = Course(course_id, name, instructor, credits, grade)
            if self.school.add_course(course):
                self.update_courses_list()
                self.update_course_combo()
                self.clear_course_form()
                self.status_label.config(text=f"✓ {name} kursu əlavə edildi")
                messagebox.showinfo("Uğur", f"{name} kursu uğurla əlavə edildi!")
            else:
                messagebox.showerror("Xəta", "Kurs əlavə edilə bilmədi!")

        except ValueError:
            messagebox.showerror("Xəta", "Kreditlər və Qiymət rəqəm olmalıdır!")

    def enroll_student(self):
        """Tələbəni kursə qeydiyyat et"""
        student_text = self.student_combo.get()
        course_text = self.course_combo.get()

        if not student_text or not course_text:
            messagebox.showwarning("Xəbərdarlıq", "Tələbə və kurs seçin!")
            return

        # ID-ləri çıxar
        student_id = int(student_text.split(" (ID: ")[1].split(",")[0])
        course_id = course_text.split(" (")[0]  # Kurs adı

        student = self.school.get_student_by_id(student_id)
        course = None
        for c in self.school.courses:
            if c.name == course_id:
                course = c
                break

        if student and course:
            if self.school.enroll_student_in_course(student, course):
                self.update_students_list()
                self.update_courses_list()
                self.status_label.config(text=f"✓ {student.name} {course.name} kursuna qeydiyyat olundu")
                self.show_enrollment_info(student, course)
                messagebox.showinfo("Uğur", f"{student.name} {course.name} kursuna qeydiyyat olundu!")
            else:
                messagebox.showerror("Xəta", "Qeydiyyat uğursuz oldu!")
        else:
            messagebox.showerror("Xəta", "Tələbə və ya kurs tapılmadı!")

    def show_enrollment_info(self, student, course):
        """Qeydiyyat məlumatını göstər"""
        info = f"""
╔══════════════════════════════════════════════════════════════╗
║                        QEYDİYYAT MƏLUMATI
╠══════════════════════════════════════════════════════════════╣
║ Tələbə: {student.name} (ID: {student.id})
║ Kurs: {course.name} (ID: {course.course_id})
║ Müəllim: {course.instructor}
║ Kreditlər: {course.credits}
║ Qiymət: {course.grade}
║ Tələbənin cari kurs sayı: {len(student.courses)}
║ Kursda olan tələbə sayı: {len(course.students)}
╚══════════════════════════════════════════════════════════════╝
"""
        self.enrollment_text.delete(1.0, tk.END)
        self.enrollment_text.insert(tk.END, info)

    def show_student_details(self, event):
        """Tələbə detallarını göstər"""
        selection = self.students_tree.selection()
        if selection:
            item = self.students_tree.item(selection[0])
            student_id = int(item['values'][0])

            student = self.school.get_student_by_id(student_id)
            if student:
                details = f"""
╔══════════════════════════════════════════════════════════════╗
║                        TƏLƏBƏ MƏLUMATI
╠══════════════════════════════════════════════════════════════╣
{student.get_info()}
║ Kurslar:
"""
                for course in student.courses:
                    details += f"║  • {course.name} ({course.instructor})\n"

                details += "╚══════════════════════════════════════════════════════════════╝"

                # Yeni pəncərə aç
                details_window = tk.Toplevel(self.root)
                details_window.title(f"Tələbə Detalları - {student.name}")
                details_window.geometry("600x400")

                text_widget = scrolledtext.ScrolledText(details_window, font=("Consolas", 10))
                text_widget.pack(fill=tk.BOTH, expand=True, padx=10, pady=10)
                text_widget.insert(tk.END, details)
                text_widget.config(state=tk.DISABLED)

    def show_course_details(self, event):
        """Kurs detallarını göstər"""
        selection = self.courses_tree.selection()
        if selection:
            item = self.courses_tree.item(selection[0])
            course_id = item['values'][0]

            course = self.school.get_course_by_id(course_id)
            if course:
                details = f"""
╔══════════════════════════════════════════════════════════════╗
║                        KURS MƏLUMATI
╠══════════════════════════════════════════════════════════════╣
{course.get_course_info()}
║ Tələbələr:
"""
                for student in course.students:
                    details += f"║  • {student.name} (ID: {student.id})\n"

                details += "╚══════════════════════════════════════════════════════════════╝"

                # Yeni pəncərə aç
                details_window = tk.Toplevel(self.root)
                details_window.title(f"Kurs Detalları - {course.name}")
                details_window.geometry("600x400")

                text_widget = scrolledtext.ScrolledText(details_window, font=("Consolas", 10))
                text_widget.pack(fill=tk.BOTH, expand=True, padx=10, pady=10)
                text_widget.insert(tk.END, details)
                text_widget.config(state=tk.DISABLED)

    def update_students_list(self):
        """Tələbələr siyahısını yenilə"""
        # Mövcud elementləri təmizlə
        for item in self.students_tree.get_children():
            self.students_tree.delete(item)

        # Yeni elementləri əlavə et
        for student in self.school.students:
            self.students_tree.insert("", tk.END, values=(
                student.id,
                student.name,
                student.age,
                student.grade,
                student.calculate_gpa(),
                len(student.courses)
            ))

    def update_courses_list(self):
        """Kurslar siyahısını yenilə"""
        # Mövcud elementləri təmizlə
        for item in self.courses_tree.get_children():
            self.courses_tree.delete(item)

        # Yeni elementləri əlavə et
        for course in self.school.courses:
            self.courses_tree.insert("", tk.END, values=(
                course.course_id,
                course.name,
                course.instructor,
                course.credits,
                course.grade,
                len(course.students)
            ))

    def update_student_combo(self):
        """Tələbə combo box-u yenilə"""
        students = [f"{s.name} (ID: {s.id}, {s.grade})" for s in self.school.students]
        self.student_combo['values'] = students

    def update_course_combo(self):
        """Kurs combo box-u yenilə"""
        courses = [f"{c.name} ({c.instructor})" for c in self.school.courses]
        self.course_combo['values'] = courses

    def search_students(self, event):
        """Tələbələri axtar"""
        search_term = self.student_search_entry.get().lower()

        # Mövcud elementləri təmizlə
        for item in self.students_tree.get_children():
            self.students_tree.delete(item)

        # Axtarış nəticələrini əlavə et
        for student in self.school.students:
            if (search_term in student.name.lower() or
                search_term in str(student.id) or
                search_term in student.grade.lower()):
                self.students_tree.insert("", tk.END, values=(
                    student.id,
                    student.name,
                    student.age,
                    student.grade,
                    student.calculate_gpa(),
                    len(student.courses)
                ))

    def search_courses(self, event):
        """Kursları axtar"""
        search_term = self.course_search_entry.get().lower()

        # Mövcud elementləri təmizlə
        for item in self.courses_tree.get_children():
            self.courses_tree.delete(item)

        # Axtarış nəticələrini əlavə et
        for course in self.school.courses:
            if (search_term in course.name.lower() or
                search_term in course.course_id.lower() or
                search_term in course.instructor.lower()):
                self.courses_tree.insert("", tk.END, values=(
                    course.course_id,
                    course.name,
                    course.instructor,
                    course.credits,
                    course.grade,
                    len(course.students)
                ))

    def clear_student_form(self):
        """Tələbə formunu təmizlə"""
        self.student_id_entry.delete(0, tk.END)
        self.student_name_entry.delete(0, tk.END)
        self.student_age_entry.delete(0, tk.END)
        self.student_grade_entry.delete(0, tk.END)

    def clear_course_form(self):
        """Kurs formunu təmizlə"""
        self.course_id_entry.delete(0, tk.END)
        self.course_name_entry.delete(0, tk.END)
        self.course_instructor_entry.delete(0, tk.END)
        self.course_credits_entry.delete(0, tk.END)
        self.course_grade_entry.delete(0, tk.END)

    def show_statistics(self):
        """Statistikaları göstər"""
        stats = f"""
╔══════════════════════════════════════════════════════════════╗
║                        SİSTEM STATİSTİKASI
╠══════════════════════════════════════════════════════════════╣
║ Məktəb: {self.school.school_name}
║ Yaradılıb: {self.school.creation_date.strftime('%d.%m.%Y %H:%M')}
║ Ümumi tələbə sayı: {len(self.school.students)}
║ Ümumi kurs sayı: {len(self.school.courses)}
║ Ümumi qeydiyyat sayı: {sum(len(course.students) for course in self.school.courses)}
║ Orta GPA: {round(sum(s.calculate_gpa() for s in self.school.students) / len(self.school.students) if self.school.students else 0, 2)}
║ Ən yüksək GPA: {max((s.calculate_gpa() for s in self.school.students), default=0)}
║ Ən aşağı GPA: {min((s.calculate_gpa() for s in self.school.students), default=0)}
╚══════════════════════════════════════════════════════════════╝

TƏLƏBƏLƏRİN GPA PAYLANMASI:
"""
        # GPA paylanması
        gpa_ranges = {"0-50": 0, "51-70": 0, "71-85": 0, "86-100": 0}
        for student in self.school.students:
            gpa = student.calculate_gpa()
            if gpa <= 50:
                gpa_ranges["0-50"] += 1
            elif gpa <= 70:
                gpa_ranges["51-70"] += 1
            elif gpa <= 85:
                gpa_ranges["71-85"] += 1
            else:
                gpa_ranges["86-100"] += 1

        for range_name, count in gpa_ranges.items():
            stats += f"• {range_name}: {count} tələbə\n"

        self.report_text.delete(1.0, tk.END)
        self.report_text.insert(tk.END, stats)

    def save_data(self):
        """Məlumatları JSON faylına saxla"""
        try:
            data = self.school.to_dict()
            with open("school_data.json", "w", encoding="utf-8") as f:
                json.dump(data, f, ensure_ascii=False, indent=2)
            messagebox.showinfo("Uğur", "Məlumatlar 'school_data.json' faylına saxlandı!")
            self.status_label.config(text="✓ Məlumatlar saxlandı")
        except Exception as e:
            messagebox.showerror("Xəta", f"Məlumatlar saxlanıla bilmədi: {str(e)}")

    def load_data(self):
        """Məlumatları JSON faylından yüklə"""
        try:
            with open("school_data.json", "r", encoding="utf-8") as f:
                data = json.load(f)

            # Məktəbi yenidən yarat
            self.school = School(data['school_name'])
            self.school.creation_date = datetime.fromisoformat(data['creation_date'])

            # Tələbələri yüklə
            for student_data in data['students']:
                student = Student(
                    student_data['id'],
                    student_data['name'],
                    student_data['age'],
                    student_data['grade']
                )
                self.school.students.append(student)

            # Kursları yüklə
            for course_data in data['courses']:
                course = Course(
                    course_data['course_id'],
                    course_data['name'],
                    course_data['instructor'],
                    course_data['credits'],
                    course_data['grade']
                )
                self.school.courses.append(course)

            # Əlaqələri bərpa et
            for student_data in data['students']:
                student = self.school.get_student_by_id(student_data['id'])
                for course_id in student_data['courses']:
                    course = self.school.get_course_by_id(course_id)
                    if course:
                        student.add_course(course)
                        course.add_student(student)

            # UI-ni yenilə
            self.update_students_list()
            self.update_courses_list()
            self.update_student_combo()
            self.update_course_combo()

            messagebox.showinfo("Uğur", "Məlumatlar uğurla yükləndi!")
            self.status_label.config(text="✓ Məlumatlar yükləndi")

        except FileNotFoundError:
            messagebox.showerror("Xəta", "'school_data.json' faylı tapılmadı!")
        except Exception as e:
            messagebox.showerror("Xəta", f"Məlumatlar yüklənilə bilmədi: {str(e)}")

    def load_demo_data(self):
        """Demo məlumatları yüklə"""
        # Kurslar
        python_course = Course("C001", "Python Proqramlaşdırılması", "Hüseyn Əliyev", 3, 85)
        java_course = Course("C002", "Java Proqramlaşdırılması", "Aynur Osmanova", 3, 88)
        database_course = Course("C003", "Verilənlər Bazası", "Vəli Qasımov", 4, 90)

        self.school.add_course(python_course)
        self.school.add_course(java_course)
        self.school.add_course(database_course)

        # Tələbələr
        student1 = Student(1, "Məryəm Ələkbərov", 20, "2-ci kurs")
        student2 = Student(2, "Rəşid İsmayılov", 19, "1-ci kurs")
        student3 = Student(3, "Aynur Quliyeva", 21, "3-cü kurs")

        self.school.add_student(student1)
        self.school.add_student(student2)
        self.school.add_student(student3)

        # Qeydiyyat
        self.school.enroll_student_in_course(student1, python_course)
        self.school.enroll_student_in_course(student1, database_course)
        self.school.enroll_student_in_course(student2, python_course)
        self.school.enroll_student_in_course(student2, java_course)
        self.school.enroll_student_in_course(student3, java_course)
        self.school.enroll_student_in_course(student3, database_course)

        # UI-ni yenilə
        self.update_students_list()
        self.update_courses_list()
        self.update_student_combo()
        self.update_course_combo()


def main():
    root = tk.Tk()
    app = StudentManagementGUI(root)
    root.mainloop()


if __name__ == "__main__":
    main()
