# 5. Üç ədəddən ən kiçiyi
# Üç tam ədəd daxil edilir. Onlardan ən kiçiyini tap.
#
# Giriş:  Üç tam ədəd (boşluqla ayrılmış)
# Çıxış:  Ən kiçik ədəd
# Nümunə: 4 9 6 → 4

a, b, c = map(int, input().split())
if a <= b and a <= c:
    print(a)
elif b <= a and b <= c:
    print(b)
else:
    print(c)
