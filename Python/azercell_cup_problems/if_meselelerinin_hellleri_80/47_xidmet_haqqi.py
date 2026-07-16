# 47. Xidmət haqqı
# Hesabın məbləği və müştəri statusu ("VIP" və ya "adi") daxil edilir. VIP-lərə 5%, adi müştərilərə 10% xidmət haqqı əlavə olunur.
#
# Giriş:  Bir tam ədəd (məbləğ) və bir söz (status)
# Çıxış:  Xidmət haqqı ilə yekun məbləğ
# Nümunə: 100 VIP → 105

meblegh, status = input().split()
meblegh = int(meblegh)
if status == "VIP":
    yekun = meblegh * 1.05
else:
    yekun = meblegh * 1.10
print(yekun)
