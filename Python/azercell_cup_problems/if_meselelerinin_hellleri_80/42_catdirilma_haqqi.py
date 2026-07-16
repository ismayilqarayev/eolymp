# 42. Çatdırılma haqqı
# Məsafə (km) daxil edilir. 5 km-dən azdırsa "Pulsuz", 5-20 km "3 AZN", 20-dən çox "6 AZN" çap et.
#
# Giriş:  Bir tam ədəd (məsafə)
# Çıxış:  Çatdırılma haqqı
# Nümunə: 12 → 3 AZN

mesafe = int(input())
if mesafe < 5:
    print("Pulsuz")
elif mesafe <= 20:
    print("3 AZN")
else:
    print("6 AZN")
