# 18. Loyallıq endirimi
# Müştərinin illik alış sayı daxil edilir. 50-dən çoxdursa "20% endirim", 20-49 arası "10% endirim", əks halda "Endirim yoxdur".
#
# Giriş:  Bir tam ədəd (alış sayı)
# Çıxış:  Endirim mesajı
# Nümunə: 30 → 10% endirim

sayi = int(input())
if sayi > 50:
    print("20% endirim")
elif sayi >= 20:
    print("10% endirim")
else:
    print("Endirim yoxdur")
