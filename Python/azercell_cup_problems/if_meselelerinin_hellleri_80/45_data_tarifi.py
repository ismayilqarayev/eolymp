# 45. Data tarifi
# İstifadə olunan data (GB) daxil edilir. 10 GB-dan azdırsa "Standart tarif", 10-20 GB "Optimal tarif", 20-dən çox "Limitsiz tarif" tövsiyə et.
#
# Giriş:  Bir tam ədəd (GB)
# Çıxış:  Tövsiyə olunan tarif adı
# Nümunə: 15 → Optimal tarif

gb = int(input())
if gb < 10:
    print("Standart tarif")
elif gb <= 20:
    print("Optimal tarif")
else:
    print("Limitsiz tarif")
