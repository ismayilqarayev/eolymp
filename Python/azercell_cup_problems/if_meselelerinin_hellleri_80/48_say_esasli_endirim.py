# 48. Say əsaslı endirim
# Alınan məhsul sayı daxil edilir. 10-dan çoxdursa "20% endirim", 5-9 arası "10% endirim", əks halda "Endirim yoxdur".
#
# Giriş:  Bir tam ədəd (say)
# Çıxış:  Endirim mesajı
# Nümunə: 7 → 10% endirim

say = int(input())
if say > 10:
    print("20% endirim")
elif say >= 5:
    print("10% endirim")
else:
    print("Endirim yoxdur")
