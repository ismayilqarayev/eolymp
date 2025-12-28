class User:
    def __init__(self, ad, ata_adi, email, telefon, yas):
        self.ad = ad
        self.ata_adi = ata_adi
        self.email = email
        self.telefon = telefon
        self.yas = yas

    def print_info(self):
        print(f"Ad: {self.ad}, Ata adı: {self.ata_adi}, Telefon: {self.telefon}, Email: {self.email}, Yaş: {self.yas}")


def neceneferindaxiledilmesi():
    while True:
        try:
            say = int(input("Neçə nəfər üçün məlumat daxil etmək istəyirsiniz: "))
            if say > 0:
                return say
            else:
                print("Müsbət ədəd daxil edin.")
        except ValueError:
            print("Düzgün ədəd daxil edin.")


def daxil_et(mesaj, yoxlama):
    while True:
        daxil_edilen = input(f"{mesaj} daxil edin: ")
        if yoxlama(daxil_edilen):
            return daxil_edilen
        else:
            print("Daxil etdiyiniz məlumat düzgün deyil. Yenidən cəhd edin.")


def melumatlarindaxiledilmesi(say):
    users = []
    for _ in range(say):
        ad = daxil_et("Ad", lambda x: x.isalpha())
        ata_adi = daxil_et("Ata adı", lambda x: x.isalpha())
        email = daxil_et("E-poçt ünvanı", lambda x: "@" in x and "." in x)
        telefon = int(daxil_et("Telefon nömrəsi", lambda x: x.isdigit() and len(x) == 10))
        yas = int(daxil_et("Yaş", lambda x: x.isdigit() and int(x) > 0))

        users.append(User(ad, ata_adi, email, telefon, yas))
    return users


def main():
    say = neceneferindaxiledilmesi()
    users = melumatlarindaxiledilmesi(say)

    print("\nDaxil edilən istifadəçilər:")
    for user in users:
        user.print_info()


if __name__ == "__main__":
    main()
