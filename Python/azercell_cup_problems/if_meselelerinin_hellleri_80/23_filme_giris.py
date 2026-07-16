# 23. Filmə giriş
# Yaş və valideyn icazəsinin olub-olmaması (bəli/xeyr) daxil edilir. Yaş 16-dan azdırsa VƏ icazə "xeyr"dirsə "Girişə icazə yoxdur", əks halda "Girişə icazə var".
#
# Giriş:  Bir tam ədəd (yaş) və bir söz ("bəli" və ya "xeyr")
# Çıxış:  Uyğun mesaj
# Nümunə: 14 xeyr → Girişə icazə yoxdur

yas, icaze = input().split()
yas = int(yas)
if yas < 16 and icaze == "xeyr":
    print("Girişə icazə yoxdur")
else:
    print("Girişə icazə var")
