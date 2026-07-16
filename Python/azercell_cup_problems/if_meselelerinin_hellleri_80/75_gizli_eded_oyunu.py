# 75. Gizli ədəd oyunu
# Gizli ədəd (məsələn 42) və istifadəçinin təxmini daxil edilir. Təxmin gizli ədədə bərabərdirsə "Tapdın!", böyükdürsə "Çox böyükdür", kiçikdirsə "Çox kiçikdir" çap et.
#
# Giriş:  Bir tam ədəd (təxmin) — gizli ədəd koddadır (42)
# Çıxış:  Uyğun mesaj
# Nümunə: 50 → Çox böyükdür

gizli_eded = 42
texmin = int(input())
if texmin == gizli_eded:
    print("Tapdın!")
elif texmin > gizli_eded:
    print("Çox böyükdür")
else:
    print("Çox kiçikdir")
