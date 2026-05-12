# Student sinfi: bir tələbə obyekti üçün sahələr və metodlar
class Student:
    
    # Konstruktor: yeni Student obyekti yaratmaq üçün istifadə olunur
    def __init__(self, ad):
        self.__ad = ad  # private sahə (inkapsulyasiya)

    # Getter metodu: ad sahəsini oxumaq üçün
    def get_ad(self):
        return self.__ad

    # Setter metodu: ad sahəsini dəyişmək üçün
    def set_ad(self, ad):
        self.__ad = ad


class Main:

    # Metod obyekt qəbul edir və obyektin ad sahəsini dəyişdirir
    @staticmethod
    def ad_deyis(s, yeni_ad):
        s.set_ad(yeni_ad)  # student obyektinin ad sahəsini dəyişdiririk

    @staticmethod
    def main():
        # Yeni Student obyekti yaradılır
        s1 = Student("Ravan")
        print("Əvvəl:", s1.get_ad())   # Getter vasitəsilə adı ekrana çıxarır

        # Metod vasitəsilə obyektin adını dəyişdiririk
        Main.ad_deyis(s1, "Ismayil")
        print("Sonra:", s1.get_ad())   # Yenilənmiş ad ekrana çıxarılır


if __name__ == "__main__":
    Main.main()