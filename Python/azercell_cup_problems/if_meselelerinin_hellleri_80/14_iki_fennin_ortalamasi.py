# 14. İki fənnin ortalaması
# İki fənnin balı daxil edilir. Ortalama bal 60-dan çoxdursa "Keçdi", əks halda "Kəsildi" çap et.
#
# Giriş:  İki tam ədəd (bal1, bal2)
# Çıxış:  "Keçdi" və ya "Kəsildi"
# Nümunə: 70 50 → Keçdi

bal1, bal2 = map(int, input().split())
ortalama = (bal1 + bal2) / 2
if ortalama >= 60:
    print("Keçdi")
else:
    print("Kəsildi")
