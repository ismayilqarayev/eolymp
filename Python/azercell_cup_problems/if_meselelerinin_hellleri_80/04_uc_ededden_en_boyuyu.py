# 4. Üç ədəddən ən böyüyü
# Üç tam ədəd daxil edilir. Onlardan ən böyüyünü tap.
#
# Giriş:  Üç tam ədəd (boşluqla ayrılmış)
# Çıxış:  Ən böyük ədəd
# Nümunə: 4 9 6 → 9

a, b, c = map(int, input().split())
if a >= b and a >= c:
    print(a)
elif b >= a and b >= c:
    print(b)
else:
    print(c)
