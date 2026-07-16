# 12. Keçid balı
# İmtahan balı daxil edilir. Bal 50 və ya çoxdursa "Keçdi", əks halda "Kəsildi" çap et.
#
# Giriş:  Bir tam ədəd (bal)
# Çıxış:  "Keçdi" və ya "Kəsildi"
# Nümunə: 48 → Kəsildi

bal = int(input())
if bal >= 50:
    print("Keçdi")
else:
    print("Kəsildi")
