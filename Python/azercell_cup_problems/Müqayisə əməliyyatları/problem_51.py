"""
Bölmə 3 — Müqayisə və məntiqi əməliyyatların birləşməsi

Məsələ 51: Ədəd verilib. Onun 1-dən böyük və özündən başqa heç bir bölənə malik olmadığını (sadə ədəd olub-olmadığını) yoxlayın.

Nümunə giriş:  13
Nümunə çıxış:  True

İzah: Ədəd 2-dən özündən əvvəlki ədədə qədər bölünüb-bölünmədiyi yoxlanılır; hər hansı bölən tapılarsa sade False olur.
"""

x = int(input())
sade = x > 1
if sade:
    for i in range(2, x):
        if x % i == 0:
            sade = False
            break
print(sade)
