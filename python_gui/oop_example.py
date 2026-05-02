from datetime import datetime

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
            print(f"✓ {self.name} {course.name} kursuna əlavə edildi")
        else:
            print(f"⚠ {self.name} artıq bu kursa qeydiyyatdan keçib")
    
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
        return f"""
    ╔════════════════════════════════╗
    ║ Tələbə Məlumatı
    ╠════════════════════════════════╣
    ║ ID: {self.id}
    ║ Ad: {self.name}
    ║ Yaş: {self.age}
    ║ Sinif: {self.grade}
    ║ GPA: {self.calculate_gpa()}
    ║ Kurs sayı: {len(self.courses)}
    ╚════════════════════════════════╝
        """
    
    def __str__(self):
        return f"{self.name} (ID: {self.id}, Sinif: {self.grade})"
    
    def __repr__(self):
        return f"Student(id={self.id}, name='{self.name}', age={self.age})"


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
            print(f"✓ {student.name} {self.name} kursuna qeydiyyat olundu")
        else:
            print(f"⚠ {student.name} artıq bu kursta qeydiyyatdan keçib")
    
    def get_course_info(self):
        """Kurs məlumatı"""
        return f"""
    ╔════════════════════════════════╗
    ║ Kurs Məlumatı
    ╠════════════════════════════════╣
    ║ Kurs ID: {self.course_id}
    ║ Kurs Adı: {self.name}
    ║ Müəllim: {self.instructor}
    ║ Kreditlər: {self.credits}
    ║ Qiymət: {self.grade}
    ║ Tələbə sayı: {len(self.students)}
    ╚════════════════════════════════╝
        """
    
    def __str__(self):
        return f"{self.name} (Müəllim: {self.instructor})"


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
            print(f"✓ {student.name} məktəbə daxil oldu")
        else:
            print(f"⚠ {student.name} artıq məktəbdədir")
    
    def add_course(self, course):
        """Məktəbə kurs əlavə et"""
        if course not in self.courses:
            self.courses.append(course)
            print(f"✓ {course.name} kursə əlavə edildi")
        else:
            print(f"⚠ {course.name} artıq əlavə edilib")
    
    def enroll_student_in_course(self, student, course):
        """Tələbəni kursə qeydiyyat et"""
        if student in self.students and course in self.courses:
            student.add_course(course)
            course.add_student(student)
        else:
            print("⚠ Tələbə və ya kurs tapılmadı")
    
    def get_all_students(self):
        """Bütün tələbələri göstər"""
        print(f"\n{'='*50}")
        print(f"Məktəb: {self.school_name}")
        print(f"Cəmi tələbə: {len(self.students)}")
        print(f"{'='*50}")
        for student in self.students:
            print(f"  • {student}")
        print()
    
    def get_all_courses(self):
        """Bütün kursları göstər"""
        print(f"\n{'='*50}")
        print(f"Məktəb: {self.school_name}")
        print(f"Cəmi kurs: {len(self.courses)}")
        print(f"{'='*50}")
        for course in self.courses:
            print(f"  • {course}")
        print()
    
    def get_school_info(self):
        """Məktəb məlumatı"""
        return f"""
    ╔════════════════════════════════╗
    ║ Məktəb Məlumatı
    ╠════════════════════════════════╣
    ║ Məktəb: {self.school_name}
    ║ Yaradılıb: {self.creation_date.strftime('%d.%m.%Y')}
    ║ Tələbə sayı: {len(self.students)}
    ║ Kurs sayı: {len(self.courses)}
    ╚════════════════════════════════╝
        """


# === Proqramın icraatı ===
def main():
    print("🏫 Tələbə İdarəçiliyi Sistemi\n")
    
    # Məktəb yaradılması
    school = School("AzER Məktəbi")
    print(school.get_school_info())
    
    # Kurslar yaradılması
    python_course = Course("C001", "Python Proqramlaşdırılması", "Hüseyn Əliyev", 3, 85)
    java_course = Course("C002", "Java Proqramlaşdırılması", "Aynur Osmanova", 3, 88)
    database_course = Course("C003", "Verilənlər Bazası", "Vəli Qasımov", 4, 90)
    
    school.add_course(python_course)
    school.add_course(java_course)
    school.add_course(database_course)
    
    print("\n" + "="*50)
    print("Tələbələr yaradılıyor...\n")
    
    # Tələbələr yaradılması
    student1 = Student(1, "Məryəm Ələkbərov", 20, "2-ci kurs")
    student2 = Student(2, "Rəşid İsmayılov", 19, "1-ci kurs")
    student3 = Student(3, "Aynur Quliyeva", 21, "3-cü kurs")
    
    school.add_student(student1)
    school.add_student(student2)
    school.add_student(student3)
    
    print("\n" + "="*50)
    print("Tələbələr kurslara qeydiyyat olunur...\n")
    
    # Tələbələri kurslara qeydiyyat et
    school.enroll_student_in_course(student1, python_course)
    school.enroll_student_in_course(student1, database_course)
    school.enroll_student_in_course(student2, python_course)
    school.enroll_student_in_course(student2, java_course)
    school.enroll_student_in_course(student3, java_course)
    school.enroll_student_in_course(student3, database_course)
    
    # Məlumatları göstər
    school.get_all_students()
    school.get_all_courses()
    
    # Tələbə məlumatı
    print(student1.get_info())
    print(python_course.get_course_info())
    
    # Tələbə sayı
    print(f"{'='*50}")
    print(f"Cəmi yaradılmış tələbə: {Student.student_count}")
    print(f"Cəmi yaradılmış kurs: {Course.course_count}")
    print(f"{'='*50}\n")


if __name__ == "__main__":
    main()
