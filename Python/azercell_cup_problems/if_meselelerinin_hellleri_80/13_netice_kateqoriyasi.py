# 13. Nəticə kateqoriyası
# Test balı (0-100) daxil edilir: 90+ "Əla", 75-89 "Yaxşı", 50-74 "Kafi", 50-dan az "Qeyri-kafi".
#
# Giriş:  Bir tam ədəd (bal)
# Çıxış:  Uyğun kateqoriya
# Nümunə: 78 → Yaxşı

bal = int(input())
if bal >= 90:
    print("Əla")
elif bal >= 75:
    print("Yaxşı")
elif bal >= 50:
    print("Kafi")
else:
    print("Qeyri-kafi")
