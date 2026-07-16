# 10. Üç rəqəmli ədəd
# Bir tam ədəd daxil edilir. Onun düz 3 rəqəmli (100-999 aralığında) olub-olmadığını yoxla.
#
# Giriş:  Bir tam ədəd
# Çıxış:  "3 rəqəmlidir" və ya "3 rəqəmli deyil"
# Nümunə: 457 → 3 rəqəmlidir

x = int(input())
if 100 <= x <= 999:
    print("3 rəqəmlidir")
else:
    print("3 rəqəmli deyil")
