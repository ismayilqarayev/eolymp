# 44. Kredit faizi
# Kredit balansı daxil edilir. 5000-dən çoxdursa faiz 10%, əks halda 15%.
#
# Giriş:  Bir tam ədəd (balans)
# Çıxış:  Faiz dərəcəsi (%)
# Nümunə: 6000 → 10%

balans = int(input())
if balans > 5000:
    print("10%")
else:
    print("15%")
