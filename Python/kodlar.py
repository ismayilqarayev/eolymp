<<<<<<< HEAD
=======
# ============================================================
# Mystruct və Struktorlar siniflərinin Python versiyası
# ============================================================

from dataclasses import dataclass

@dataclass
class Struktorlar:
    ad: str
    soyad: str
    ataadi: str
    telefon: str

    def print_info(self):
        print(f" Ad: {self.ad}, Soyad: {self.soyad}, Ata adi: {self.ataadi}, Telefon: {self.telefon}")


class Mystruct:
    def __init__(self, ad: str, soyad: str, ataadi: str, telefon: str):
        self.ad = ad
        self.soyad = soyad
        self.ataadi = ataadi
        self.telefon = telefon

    def print_info(self):
        print(f" Ad: {self.ad}, Soyad: {self.soyad}, Ata adi: {self.ataadi}, Telefon: {self.telefon}")


# ============================================================
# Əsas proqram
# ============================================================

def neceneferindaxiledilmesi() -> int:
    while True:
        try:
            say = int(input("Nece neferin melumatini daxil edeceksiniz: "))
            if say > 0:
                return say
            else:
                print("yeniden duzgun bir eded daxil et: ")
        except ValueError:
            print("yeniden duzgun bir eded daxil et: ")


def melumatlarindaxiledilmesi() -> Struktorlar:
    ad = input("\nAd: ")
    soyad = input("Soyad: ")
    ataadi = input("Ata adi: ")
    telefon = input("Telefon: ")
    return Struktorlar(ad, soyad, ataadi, telefon)


def main():
    # İlk obyekt
    mystruct = Mystruct("ismayil", "qarayev", "ilqar", "0555555555")
    print("Melumat: ")
    mystruct.print_info()

    # Neçə nəfər daxil ediləcək
    say = neceneferindaxiledilmesi()

    # Siyahıya əlavə
    mystructs = []
    for _ in range(say):
        person = melumatlarindaxiledilmesi()
        mystructs.append(person)

    # Çap
    for item in mystructs:
        item.print_info()


if __name__ == "__main__":
    main()


####################################################################

# ============================================================
# Pers və MyStruct siniflərinin Python versiyası
# ============================================================

class Pers:
    def __init__(self, ad: str, soyad: str, ataadi: str, telefon: int):
        self.ad = ad
        self.soyad = soyad
        self.ataadi = ataadi
        self.telefon = telefon

    def print_info(self):
        print(f"Ad: {self.ad}, Soyad: {self.soyad}, Ata adı: {self.ataadi}, Telefon: {self.telefon}")


# ============================================================
# Əsas funksiyalar
# ============================================================

def neceneferin_daxil_edilmesi() -> int:
    while True:
        try:
            say = int(input("Neçə nəfərin məlumatını daxil edəcəksiniz? "))
            if say > 0:
                return say
            else:
                print("Yenidən düzgün bir ədəd daxil edin:")
        except ValueError:
            print("Yenidən düzgün bir ədəd daxil edin:")


def melumatlarin_daxil_edilmesi() -> MyStruct:
    ad = input("\nAd: ")
    soyad = input("Soyad: ")
    ataadi = input("Ata adı: ")

    while True:
        try:
            telefon = int(input("Telefon nömrəsi: "))
            if telefon > 0:
                break
            else:
                print("Yenidən düzgün telefon nömrəsi daxil edin:")
        except ValueError:
            print("Yenidən düzgün telefon nömrəsi daxil edin:")

    return MyStruct(ad, soyad, ataadi, telefon)


def main():
    # İlk obyekt
    pers = Pers("Nigar", "Huseynova", "Nigar", 55555555)
    print("İlk məlumat:")
    pers.print_info()

    # Neçə nəfər daxil ediləcək
    say = neceneferin_daxil_edilmesi()

    # Siyahıya əlavə
    mystructs = []
    for _ in range(say):
        person = melumatlarin_daxil_edilmesi()
        mystructs.append(person)

    # Çap
    print("\n--- Siyahı ---")
    for item in mystructs:
        item.print_info()


if __name__ == "__main__":
    main()

>>>>>>> d6ecd7261e22a1665853dffe1250bffbb757d7b7
