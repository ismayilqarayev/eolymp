class User:
    def __init__(self, ad, ata_adi, email, telefon, yas):
        self.ad = ad 
        self.ad = ata_adi 
        self.email = email
        self.telefon = telefon
        self.yas = yas

    def print_info(self):
         print(f"Ad: {self.ad}, Ata adı: {self.ata_adi}, Telefon: {self.telefon}, Email: {self.email}, Yaş: {self.yas}")

def neceneferindaxiledilmesi():
    while True:
        try:
            say = int(input("gfdg"))
            if say > 0:
                return say 
            else: 
                print("Musbet eded daxil edin")
        except ValueError:
            print ("")

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
        ata_adi = ("Ata adi", lambda)

def main():
    say = neceneferindaxiledilmesi()
    users = melumatlarindaxiledilmesi(say)

    print("daxil edilen istifadeciler")
    for user in users:
        user.print_info()
        
if  __name__ == "__main__":
    main()
