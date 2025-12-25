class Pers:
    def __init__(self, ad: str, soyad: str, ataadi: str, telefon: int):
        self.ad = ad 
        self.soyad = soyad
        self.ataadi = ataadi
        self.telefon = telefon

def print_info(self):
    print(f"Ad: {self.ad}, Soyad: {self.soyad}, Ata adı: {self.ataadi}, Telefon: {self.telefon}")



def nece_neferin_daxil_edilmesi() -> int:
    while True:
        try:
            say = int(input("nece neferin meluamatini daxil edeceksiniz:"))
            if say > 0:
                return say

def main():

if __name__ == "__main__":
    main()