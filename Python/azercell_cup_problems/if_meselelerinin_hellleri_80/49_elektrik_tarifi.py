# 49. Elektrik tarifi
# İstehlak olunan kilovat-saat daxil edilir. 200-dən azdırsa hər kVt 0.1 AZN, 200-dən çoxdursa hər kVt 0.15 AZN. Ümumi ödənişi hesabla.
#
# Giriş:  Bir tam ədəd (kVt)
# Çıxış:  Ümumi ödəniş
# Nümunə: 250 → 37.5

kvt = int(input())
if kvt < 200:
    umumi = kvt * 0.1
else:
    umumi = kvt * 0.15
print(umumi)
