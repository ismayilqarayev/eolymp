import tkinter as tk
from tkinter import ttk, messagebox

class PythonGUIApp:
    def __init__(self, root):
        self.root = root
        self.root.title("Python GUI App")
        self.root.geometry("500x400")
        self.root.resizable(False, False)
        
        # Configure style
        self.root.configure(bg="#f0f0f0")
        
        # Title
        title_label = tk.Label(
            self.root,
            text="Salam, Python GUI!",
            font=("Arial", 24, "bold"),
            bg="#f0f0f0",
            fg="#333333"
        )
        title_label.pack(pady=20)
        
        # Subtitle
        subtitle_label = tk.Label(
            self.root,
            text="Bu bir Python Tkinter tətbiqidir",
            font=("Arial", 12),
            bg="#f0f0f0",
            fg="#666666"
        )
        subtitle_label.pack(pady=10)
        
        # Frame for inputs
        input_frame = tk.Frame(self.root, bg="#f0f0f0")
        input_frame.pack(pady=20)
        
        # Name input
        name_label = tk.Label(input_frame, text="Adınız:", font=("Arial", 11), bg="#f0f0f0")
        name_label.grid(row=0, column=0, padx=10, pady=10, sticky="w")
        
        self.name_entry = tk.Entry(input_frame, font=("Arial", 11), width=25)
        self.name_entry.grid(row=0, column=1, padx=10, pady=10)
        
        # Age input
        age_label = tk.Label(input_frame, text="Yaşınız:", font=("Arial", 11), bg="#f0f0f0")
        age_label.grid(row=1, column=0, padx=10, pady=10, sticky="w")
        
        self.age_entry = tk.Entry(input_frame, font=("Arial", 11), width=25)
        self.age_entry.grid(row=1, column=1, padx=10, pady=10)
        
        # Button frame
        button_frame = tk.Frame(self.root, bg="#f0f0f0")
        button_frame.pack(pady=30)
        
        # Submit button
        submit_btn = tk.Button(
            button_frame,
            text="Göndər",
            font=("Arial", 12, "bold"),
            bg="#007ACC",
            fg="white",
            padx=30,
            pady=10,
            command=self.on_submit,
            cursor="hand2"
        )
        submit_btn.pack(side=tk.LEFT, padx=10)
        
        # Clear button
        clear_btn = tk.Button(
            button_frame,
            text="Təmizlə",
            font=("Arial", 12, "bold"),
            bg="#6C757D",
            fg="white",
            padx=30,
            pady=10,
            command=self.on_clear,
            cursor="hand2"
        )
        clear_btn.pack(side=tk.LEFT, padx=10)
        
        # Status label
        self.status_label = tk.Label(
            self.root,
            text="",
            font=("Arial", 10),
            bg="#f0f0f0",
            fg="#28A745"
        )
        self.status_label.pack(pady=10)
    
    def on_submit(self):
        name = self.name_entry.get().strip()
        age = self.age_entry.get().strip()
        
        if not name or not age:
            messagebox.showwarning("Xəbərdarlıq", "Zəhmət olmasa bütün sahələri doldurun!")
            return
        
        try:
            age_int = int(age)
            if age_int < 0 or age_int > 150:
                messagebox.showerror("Xəta", "Yaş 0-150 arasında olmalıdır!")
                return
            
            messagebox.showinfo("Uğur", f"Salam {name}! Siz {age_int} yaşında olduğunuzdan qeyd aldıq.")
            self.status_label.config(text=f"✓ {name} təsdiq edildi!", fg="#28A745")
        except ValueError:
            messagebox.showerror("Xəta", "Yaş bir rəqəm olmalıdır!")
    
    def on_clear(self):
        self.name_entry.delete(0, tk.END)
        self.age_entry.delete(0, tk.END)
        self.status_label.config(text="")
        self.name_entry.focus()

if __name__ == "__main__":
    root = tk.Tk()
    app = PythonGUIApp(root)
    root.mainloop()
