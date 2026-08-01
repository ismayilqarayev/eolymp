from abc import ABC, abstractmethod
import re


# Abstrakt sinif (Abstraction)
# Bu sinif birbaşa obyekt yaratmaq üçün deyil,
# digər siniflər üçün baza rolunu oynayır
class Student(ABC):

    # Encapsulation (İnkapsulyasiya) — Python-da "private" sahələr
    # adın önünə iki alt xətt (__) qoyularaq işarələnir
    def __init__(self, name, surname, phone_number, email):
        self.__name = name
        self.__surname = surname
        self.__phone_number = phone_number
        self.__email = email

    # Getter-lər — sahə dəyərlərini oxumaq üçün
    def get_name(self):
        return self.__name

    def get_surname(self):
        return self.__surname

    def get_phone_number(self):
        return self.__phone_number

    def get_email(self):
        return self.__email

    # Setter-lər — sahə dəyərlərini dəyişmək üçün
    def set_name(self, name):
        self.__name = name

    def set_surname(self, surname):
        self.__surname = surname

    def set_phone_number(self, phone_number):
        self.__phone_number = phone_number

    def set_email(self, email):
        self.__email = email

    # Abstrakt metod — hər alt sinif öz implementasiyasını yazmalıdır
    @abstractmethod
    def show_info(self):
        pass


# Inheritance (İrsiyyət)
# GraduateStudent sinifi Student sinifindən miras alır
class GraduateStudent(Student):

    def __init__(self, name, surname, phone_number, email, university):
        # name, surname, phone və email Student-ə,
        # university isə bu sinifə mənimsədilir
        super().__init__(name, surname, phone_number, email)
        self.university = university

    # Abstrakt metodun implementasiyası (Polymorphism)
    # Student sinifindəki show_info() burada konkret şəkildə yazılır
    def show_info(self):
        print(f"Name: {self.get_name()} {self.get_surname()}")
        print(f"Phone: {self.get_phone_number()}")
        print(f"Email: {self.get_email()}")
        print(f"University: {self.university}")


# Inheritance (İrsiyyət)
# PhDStudent sinifi GraduateStudent sinifindən miras alır
# Beləliklə Student -> GraduateStudent -> PhDStudent zənciri yaranır
class PhDStudent(GraduateStudent):

    def __init__(self, name, surname, phone_number, email, university, research_topic):
        # name, surname, phone və email parent-ə ötürülür,
        # university və research_topic isə bu siniflərə mənimsədilir
        super().__init__(name, surname, phone_number, email, university)
        self.research_topic = research_topic

    # Method Overriding (Polymorphism)
    # GraduateStudent-dəki show_info() genişləndirilir
    def show_info(self):
        super().show_info()
        print(f"Research Topic: {self.research_topic}")


# ---------------------------------------------------------------------------
# Giriş oxuma və doğrulama funksiyaları
# ---------------------------------------------------------------------------

def read_non_empty_input(prompt):
    while True:
        value = input(prompt).strip()
        if value:
            return value
        print("Invalid entry: this field cannot be empty. Please enter a valid value.")


def read_valid_phone(prompt):
    while True:
        phone = input(prompt).strip()
        if not phone:
            print("Invalid entry: phone number cannot be empty.")
            continue
        if is_valid_phone(phone):
            return phone
        print("Invalid phone number. Use digits, spaces, dashes, and optional leading +.")


def read_valid_email(prompt):
    while True:
        email = input(prompt).strip()
        if not email:
            print("Invalid entry: email cannot be empty.")
            continue
        if is_valid_email(email):
            return email
        print("Invalid email format. Example: user@example.com")


def is_valid_phone(phone):
    return re.match(r"^\+?[0-9\-\s]{7,20}$", phone) is not None


def is_valid_email(email):
    return re.match(r"^[^\s@]+@[^\s@]+\.[^\s@]+$", email) is not None


def main():
    # -- Graduate Student məlumatlarının daxil edilməsi --
    print("Graduate student data entry:")
    gs_name = read_non_empty_input("Enter the name of the graduate student: ")
    gs_surname = read_non_empty_input("Enter the surname of the graduate student: ")
    gs_phone = read_valid_phone("Enter the phone number of the graduate student: ")
    gs_email = read_valid_email("Enter the email of the graduate student: ")
    gs_university = read_non_empty_input("Enter the university of the graduate student: ")

    graduate_student = GraduateStudent(gs_name, gs_surname, gs_phone, gs_email, gs_university)
    print()
    graduate_student.show_info()

    # -- PhD Student məlumatlarının daxil edilməsi --
    print()
    print("PhD student data entry:")
    phd_name = read_non_empty_input("Enter the name of the PhD student: ")
    phd_surname = read_non_empty_input("Enter the surname of the PhD student: ")
    phd_phone = read_valid_phone("Enter the phone number of the PhD student: ")
    phd_email = read_valid_email("Enter the email of the PhD student: ")
    phd_university = read_non_empty_input("Enter the university of the PhD student: ")
    phd_research_topic = read_non_empty_input("Enter the research topic of the PhD student: ")

    phd_student = PhDStudent(
        phd_name, phd_surname, phd_phone, phd_email, phd_university, phd_research_topic
    )
    print()
    phd_student.show_info()


if __name__ == "__main__":
    main()