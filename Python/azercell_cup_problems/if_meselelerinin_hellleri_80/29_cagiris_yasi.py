# 29. Çağırış yaşı
# Yaş və cins ("kişi"/"qadın") daxil edilir. Yaş 18-dən yuxarıdırsa VƏ cins "kişi"dirsə "Çağırışa cəlb oluna bilər", əks halda "Cəlb olunmur".
#
# Giriş:  Bir tam ədəd (yaş) və bir söz (cins)
# Çıxış:  Uyğun mesaj
# Nümunə: 20 kişi → Çağırışa cəlb oluna bilər

yas, cins = input().split()
yas = int(yas)
if yas > 18 and cins == "kişi":
    print("Çağırışa cəlb oluna bilər")
else:
    print("Cəlb olunmur")
