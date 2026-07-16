# 59. Eyni işarəli ədədlər
# İki ədəd daxil edilir. Hər ikisi müsbətdirsə və ya hər ikisi mənfidirsə "Eyni işarəlidir", əks halda "Fərqli işarəlidir".
#
# Giriş:  İki tam ədəd
# Çıxış:  Uyğun mesaj
# Nümunə: -3 -7 → Eyni işarəlidir

a, b = map(int, input().split())
if (a > 0 and b > 0) or (a < 0 and b < 0):
    print("Eyni işarəlidir")
else:
    print("Fərqli işarəlidir")
