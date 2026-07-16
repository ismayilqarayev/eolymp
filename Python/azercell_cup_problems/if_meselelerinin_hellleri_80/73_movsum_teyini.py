# 73. Mövsüm təyini
# Ayın nömrəsi (1-12) daxil edilir. Mövsümü tap: 12,1,2 "Qış", 3,4,5 "Yaz", 6,7,8 "Yay", 9,10,11 "Payız".
#
# Giriş:  Bir tam ədəd (ay nömrəsi)
# Çıxış:  Mövsümün adı
# Nümunə: 4 → Yaz

ay = int(input())
if ay in (12, 1, 2):
    print("Qış")
elif ay in (3, 4, 5):
    print("Yaz")
elif ay in (6, 7, 8):
    print("Yay")
else:
    print("Payız")
