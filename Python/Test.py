class Student:
    def __init__(self, ad, soyad):
        self.__ad = ad
        self.__soyad = soyad

    def get_ad(self):
        return self.__ad
    
    def set_ad(self, ad):
        self.__ad = ad

    def get_soyad(self):
        return self.__soyad
    
    def set_soyad(self, soyad):
        self.__soyad = soyad

class Main:

    def ad_deyis(self, s, yeni_ad):
        s.set_ad(yeni_ad)

    def main(self):
        Student1 = Student("Ravan", "Ismayilov")
        print("Əvvəl:", Student1.get_ad(), Student1.get_soyad())

        



    