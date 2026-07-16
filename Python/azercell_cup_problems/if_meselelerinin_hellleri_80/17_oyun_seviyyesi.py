# 17. Oyun səviyyəsi
# Toplanan xal daxil edilir. 1000-dən çoxdursa "Növbəti səviyyəyə keçdin", əks halda "Davam et".
#
# Giriş:  Bir tam ədəd (xal)
# Çıxış:  Uyğun mesaj
# Nümunə: 1200 → Növbəti səviyyəyə keçdin

xal = int(input())
if xal > 1000:
    print("Növbəti səviyyəyə keçdin")
else:
    print("Davam et")
