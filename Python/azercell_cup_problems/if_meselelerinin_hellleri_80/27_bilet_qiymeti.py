# 27. Bilet qiyməti
# Yaş daxil edilir. 12-dən azdırsa "Uşaq bileti: 3 AZN", əks halda "Böyük bileti: 7 AZN" çap et.
#
# Giriş:  Bir tam ədəd (yaş)
# Çıxış:  Bilet növü və qiyməti
# Nümunə: 10 → Uşaq bileti: 3 AZN

yas = int(input())
if yas < 12:
    print("Uşaq bileti: 3 AZN")
else:
    print("Böyük bileti: 7 AZN")
