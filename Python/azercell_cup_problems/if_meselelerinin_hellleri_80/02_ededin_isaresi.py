# 2. Ədədin işarəsi
# Bir tam ədəd daxil edilir. Onun müsbət, mənfi, yoxsa sıfır olduğunu müəyyən et.
#
# Giriş:  Bir tam ədəd
# Çıxış:  "Müsbət", "Mənfi" və ya "Sıfır"
# Nümunə: -5 → Mənfi

x = int(input())
if x > 0:
    print("Müsbət")
elif x < 0:
    print("Mənfi")
else:
    print("Sıfır")
