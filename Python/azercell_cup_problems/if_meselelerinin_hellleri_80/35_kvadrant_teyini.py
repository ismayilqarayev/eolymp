# 35. Kvadrant təyini
# Nöqtənin x və y koordinatları daxil edilir. Hansı kvadrantda yerləşdiyini tap (I, II, III, IV) və ya oxların üzərində olduğunu bildir.
#
# Giriş:  İki tam ədəd (x, y)
# Çıxış:  Kvadrant nömrəsi və ya "Ox üzərindədir"
# Nümunə: -3 4 → II kvadrant

x, y = map(int, input().split())
if x == 0 or y == 0:
    print("Ox üzərindədir")
elif x > 0 and y > 0:
    print("I kvadrant")
elif x < 0 and y > 0:
    print("II kvadrant")
elif x < 0 and y < 0:
    print("III kvadrant")
else:
    print("IV kvadrant")
