# User sinfi - İstifadəçi məlumatlarını saxlamaq üçün
class User:
    def __init__(self, ad, ata_adi, email, telefon, yas):
        self.ad = ad
        self.ata_adi = ata_adi
        self.email = email
        self.telefon = telefon
        self.yas = yas

    # Məlumatları ekrana çap edən metod
    def print_info(self):
        print(
            f"Ad: {self.ad}, Ata adı: {self.ata_adi}, "
            f"Telefon: {self.telefon}, Email: {self.email}, Yaş: {self.yas}"
        )


users = []
say = 0


def neceneferin_daxil_edilmesi():
    global say
    while True:
        try:
            say = int(input("Neçə nəfər üçün məlumat daxil etmək istəyirsiniz: "))
            if say > 0:
                break
            else:
                print("Ədəd 0-dan böyük olmalıdır.")
        except ValueError:
            print("Zəhmət olmasa düzgün ədəd daxil edin.")


def daxil_et(mesaj, yoxlama):
    while True:
        daxil_edilen = input(f"{mesaj} daxil edin: ")
        if yoxlama(daxil_edilen):
            return daxil_edilen
        else:
            print("Yanlış daxil etdiniz, yenidən cəhd edin.")


def melumatlarin_daxil_edilmesi():
    for _ in range(say):
        ad = daxil_et("Ad", lambda x: x.isalpha())
        ata_adi = daxil_et("Ata adı", lambda x: x.isalpha())
        email = daxil_et("E-poçt ünvanı", lambda x: "@" in x and "." in x)
        telefon = int(
            daxil_et("Telefon nömrəsi", lambda x: x.isdigit() and len(x) == 10)
        )
        yas = int(
            daxil_et("Yaş", lambda x: x.isdigit() and int(x) > 0)
        )

        users.append(User(ad, ata_adi, email, telefon, yas))


def main():
    neceneferin_daxil_edilmesi()
    melumatlarin_daxil_edilmesi()

    print("\nDaxil edilən istifadəçilər:")
    for user in users:
        user.print_info()


if __name__ == "__main__":
    main()
