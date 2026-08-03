from abc import ABC, abstractmethod
import re


# Abstrakt sinif (Abstraction)
# Bu sinif birbaşa obyekt yaratmaq üçün deyil,
# digər siniflər üçün baza rolunu oynayır
class Telebe(ABC):

    # Encapsulation (İnkapsulyasiya) — Python-da "private" sahələr
    # adın önünə iki alt xətt (__) qoyularaq işarələnir
    def __init__(self, ad, soyad, telefon_nomresi, email):
        self.__ad = ad
        self.__soyad = soyad
        self.__telefon_nomresi = telefon_nomresi
        self.__email = email

    # Getter-lər — sahə dəyərlərini oxumaq üçün
    def ad_al(self):
        return self.__ad

    def soyad_al(self):
        return self.__soyad

    def telefon_nomresini_al(self):
        return self.__telefon_nomresi

    def email_al(self):
        return self.__email

    # Setter-lər — sahə dəyərlərini dəyişmək üçün
    def ad_teyin_et(self, ad):
        self.__ad = ad

    def soyad_teyin_et(self, soyad):
        self.__soyad = soyad

    def telefon_nomresini_teyin_et(self, telefon_nomresi):
        self.__telefon_nomresi = telefon_nomresi

    def email_teyin_et(self, email):
        self.__email = email

    # Abstrakt metod — hər alt sinif öz implementasiyasını yazmalıdır
    @abstractmethod
    def melumati_goster(self):
        pass


# Inheritance (İrsiyyət)
# Magistrant sinifi Telebe sinifindən miras alır
class Magistrant(Telebe):

    def __init__(self, ad, soyad, telefon_nomresi, email, universitet):
        # ad, soyad, telefon və email Telebe-yə,
        # universitet isə bu sinifə mənimsədilir
        super().__init__(ad, soyad, telefon_nomresi, email)
        self.universitet = universitet

    # Universitet sahəsi üçün setter (redaktə funksiyasında istifadə olunur)
    def universitet_teyin_et(self, universitet):
        self.universitet = universitet

    # Abstrakt metodun implementasiyası (Polymorphism)
    # Telebe sinifindəki melumati_goster() burada konkret şəkildə yazılır
    def melumati_goster(self):
        print(f"Ad: {self.ad_al()} {self.soyad_al()}")
        print(f"Telefon: {self.telefon_nomresini_al()}")
        print(f"Email: {self.email_al()}")
        print(f"Universitet: {self.universitet}")


# Inheritance (İrsiyyət)
# Doktorant sinifi Magistrant sinifindən miras alır
# Beləliklə Telebe -> Magistrant -> Doktorant zənciri yaranır
class Doktorant(Magistrant):

    def __init__(self, ad, soyad, telefon_nomresi, email, universitet, tedqiqat_movzusu):
        # ad, soyad, telefon və email parent-ə ötürülür,
        # universitet və tedqiqat_movzusu isə bu siniflərə mənimsədilir
        super().__init__(ad, soyad, telefon_nomresi, email, universitet)
        self.tedqiqat_movzusu = tedqiqat_movzusu

    # Tədqiqat mövzusu sahəsi üçün setter (redaktə funksiyasında istifadə olunur)
    def tedqiqat_movzusu_teyin_et(self, tedqiqat_movzusu):
        self.tedqiqat_movzusu = tedqiqat_movzusu

    # Method Overriding (Polymorphism)
    # Magistrant-dəki melumati_goster() genişləndirilir
    def melumati_goster(self):
        super().melumati_goster()
        print(f"Tədqiqat Mövzusu: {self.tedqiqat_movzusu}")


# ---------------------------------------------------------------------------
# Giriş oxuma və doğrulama funksiyaları
# ---------------------------------------------------------------------------

def bos_olmayan_giris_oxu(mesaj):
    while True:
        deyer = input(mesaj).strip()
        if deyer:
            return deyer
        print("Yanlış giriş: bu sahə boş ola bilməz. Zəhmət olmasa düzgün dəyər daxil edin.")


def duzgun_telefon_oxu(mesaj):
    while True:
        telefon = input(mesaj).strip()
        if not telefon:
            print("Yanlış giriş: telefon nömrəsi boş ola bilməz.")
            continue
        if telefon_duzgundurmu(telefon):
            return telefon
        print("Yanlış telefon nömrəsi. Rəqəm, boşluq, tire istifadə edin, əvvəlinə istəyə bağlı + qoya bilərsiniz.")


def duzgun_email_oxu(mesaj):
    while True:
        email = input(mesaj).strip()
        if not email:
            print("Yanlış giriş: email boş ola bilməz.")
            continue
        if email_duzgundurmu(email):
            return email
        print("Yanlış email formatı. Nümunə: istifadeci@example.com")


def telefon_duzgundurmu(telefon):
    return re.match(r"^\+?[0-9\-\s]{7,20}$", telefon) is not None


def email_duzgundurmu(email):
    return re.match(r"^[^\s@]+@[^\s@]+\.[^\s@]+$", email) is not None


# ---------------------------------------------------------------------------
# Redaktə etmə funksiyası — mövcud Telebe (Magistrant/Doktorant) obyektinin
# sahələrini menyu ilə dəyişməyə imkan verir
# ---------------------------------------------------------------------------

def telebeni_redakte_et(telebe):
    while True:
        print("\nRedaktə üçün sahə seçin:")
        print("1 - Ad")
        print("2 - Soyad")
        print("3 - Telefon")
        print("4 - Email")
        if isinstance(telebe, Magistrant):
            print("5 - Universitet")
        if isinstance(telebe, Doktorant):
            print("6 - Tədqiqat Mövzusu")
        print("0 - Redaktəni bitir")

        secim = input("Seçiminiz: ").strip()

        if secim == "0":
            break
        elif secim == "1":
            telebe.ad_teyin_et(bos_olmayan_giris_oxu("Yeni ad: "))
        elif secim == "2":
            telebe.soyad_teyin_et(bos_olmayan_giris_oxu("Yeni soyad: "))
        elif secim == "3":
            telebe.telefon_nomresini_teyin_et(duzgun_telefon_oxu("Yeni telefon nömrəsi: "))
        elif secim == "4":
            telebe.email_teyin_et(duzgun_email_oxu("Yeni email: "))
        elif secim == "5" and isinstance(telebe, Magistrant):
            telebe.universitet_teyin_et(bos_olmayan_giris_oxu("Yeni universitet: "))
        elif secim == "6" and isinstance(telebe, Doktorant):
            telebe.tedqiqat_movzusu_teyin_et(bos_olmayan_giris_oxu("Yeni tədqiqat mövzusu: "))
        else:
            print("Yanlış seçim, zəhmət olmasa siyahıdan bir dəyər seçin.")
            continue

        print("\nYenilənmiş məlumat:")
        telebe.melumati_goster()


def esas():
    # -- Magistrant məlumatlarının daxil edilməsi --
    print("Magistrant məlumatlarının daxil edilməsi:")
    mag_ad = bos_olmayan_giris_oxu("Magistrantın adını daxil edin: ")
    mag_soyad = bos_olmayan_giris_oxu("Magistrantın soyadını daxil edin: ")
    mag_telefon = duzgun_telefon_oxu("Magistrantın telefon nömrəsini daxil edin: ")
    mag_email = duzgun_email_oxu("Magistrantın emailini daxil edin: ")
    mag_universitet = bos_olmayan_giris_oxu("Magistrantın universitetini daxil edin: ")

    magistrant = Magistrant(mag_ad, mag_soyad, mag_telefon, mag_email, mag_universitet)
    print()
    magistrant.melumati_goster()

    mag_redakte = input("\nMagistrantın məlumatlarını redaktə etmək istəyirsiniz? (b/x): ").strip().lower()
    if mag_redakte == "b":
        telebeni_redakte_et(magistrant)

    # -- Doktorant məlumatlarının daxil edilməsi --
    print()
    print("Doktorant məlumatlarının daxil edilməsi:")
    dok_ad = bos_olmayan_giris_oxu("Doktorantın adını daxil edin: ")
    dok_soyad = bos_olmayan_giris_oxu("Doktorantın soyadını daxil edin: ")
    dok_telefon = duzgun_telefon_oxu("Doktorantın telefon nömrəsini daxil edin: ")
    dok_email = duzgun_email_oxu("Doktorantın emailini daxil edin: ")
    dok_universitet = bos_olmayan_giris_oxu("Doktorantın universitetini daxil edin: ")
    dok_tedqiqat_movzusu = bos_olmayan_giris_oxu("Doktorantın tədqiqat mövzusunu daxil edin: ")

    doktorant = Doktorant(
        dok_ad, dok_soyad, dok_telefon, dok_email, dok_universitet, dok_tedqiqat_movzusu
    )
    print()
    doktorant.melumati_goster()

    dok_redakte = input("\nDoktorantın məlumatlarını redaktə etmək istəyirsiniz? (b/x): ").strip().lower()
    if dok_redakte == "b":
        telebeni_redakte_et(doktorant)


if __name__ == "__main__":
    esas()