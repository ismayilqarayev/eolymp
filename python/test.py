class Konstruktor:
    def __init__(self, adlar, ata_adlari, telefonlar, emaillar, yaslar):
        self.adlar = adlar
        self.ata_adlari = ata_adlari
        self.telefonlar = telefonlar
        self.emaillar = emaillar
        self.yaslar = yaslar

    def print_data(self):
        for i in range(len(self.adlar)):
            print(f"Ad: {self.adlar[i]}, Ata adı: {self.ata_adlari[i]}, Telefon: {self.telefonlar[i]}, Email: {self.emaillar[i]}, Yaş: {self.yaslar[i]}")

def nece_nefer_daxil_edilmesi():
    while True:
        try:
            say = int(input("Neçə nəfər üçün məlumat daxil etmək istəyirsiniz? "))
            if say > 0:
                return say
            else:
                print("Ədəd sıfırdan böyük olmalıdır.")
        except ValueError:
            print("Zəhmət olmasa düzgün bir ədəd daxil edin.")

def melumatlari_daxil_et(say):
    adlar = []
    ata_adlari = []
    telefonlar = []
    emaillar = []
    yaslar = []

    for i in range(say):
        while True:
            ad = input("Ad daxil edin: ")
            if ad and ad[0].isalpha():
                adlar.append(ad)
                break
            print("Yenidən düzgün bir ad daxil edin.")

        while True:
            ata_adi = input("Ata adını daxil edin: ")
            if ata_adi and ata_adi[0].isalpha():
                ata_adlari.append(ata_adi)
                break
            print("Yenidən düzgün bir ata adı daxil edin.")

        while True:
            telefon = input("Telefon nömrəsini daxil edin: ")
            if len(telefon) == 10 and telefon.isdigit():
                telefonlar.append(telefon)
                break
            print("Yenidən düzgün bir telefon nömrəsi daxil edin.")

        while True:
            email = input("E-poçt ünvanını daxil edin: ")
            if "@" in email and "." in email:
                emaillar.append(email)
                break
            print("Yenidən düzgün bir e-poçt ünvanı daxil edin.")

        while True:
            try:
                yas = int(input("Yaş daxil edin: "))
                if yas > 0:
                    yaslar.append(yas)
                    break
                else:
                    print("Yaş sıfırdan böyük olmalıdır.")
            except ValueError:
                print("Zəhmət olmasa düzgün bir ədəd daxil edin.")

    return adlar, ata_adlari, telefonlar, emaillar, yaslar

def main():
    say = nece_nefer_daxil_edilmesi()
    adlar, ata_adlari, telefonlar, emaillar, yaslar = melumatlari_daxil_et(say)

    konstruktor = Konstruktor(adlar, ata_adlari, telefonlar, emaillar, yaslar)
    konstruktor.print_data()

if __name__ == "__main__":
    main()
