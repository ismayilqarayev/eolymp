# 8. Mütləq qiymət
# Bir tam ədəd daxil edilir. `if` istifadə edərək (abs() funksiyasından istifadə etmədən) onun mütləq qiymətini (modulunu) tap.
#
# Giriş:  Bir tam ədəd
# Çıxış:  Ədədin mütləq qiyməti
# Nümunə: -8 → 8

x = int(input())
if x < 0:
    print(-x)
else:
    print(x)
