# 72. Hava proqnozuna görə geyim
# Temperatur (dərəcə ilə) daxil edilir. 0-dan azdırsa "Qalın palto geyin", 0-15 "Kurtka geyin", 15-dən yuxarı "Yüngül geyim kifayətdir".
#
# Giriş:  Bir tam ədəd (temperatur)
# Çıxış:  Geyim tövsiyəsi
# Nümunə: 10 → Kurtka geyin

temp = int(input())
if temp < 0:
    print("Qalın palto geyin")
elif temp <= 15:
    print("Kurtka geyin")
else:
    print("Yüngül geyim kifayətdir")
