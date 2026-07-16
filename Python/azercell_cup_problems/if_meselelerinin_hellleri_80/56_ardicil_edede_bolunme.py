# 56. Ardıcıl ədədə bölünmə
# Bir ədəd daxil edilir. Onun özündən bir əvvəlki ədədə bölünüb-bölünmədiyini yoxla.
#
# Giriş:  Bir tam ədəd
# Çıxış:  "Bölünür" və ya "Bölünmür"
# Nümunə: 6 → Bölünmür

x = int(input())
if x % (x - 1) == 0:
    print("Bölünür")
else:
    print("Bölünmür")
