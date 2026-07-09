"""
Bölmə 3 — Müqayisə və məntiqi əməliyyatların birləşməsi

Məsələ 54: Ədəd verilib. Onun 10-a bölünəndə qalığın 0 və ya 5 olub-olmadığını yoxlayın.

Nümunə giriş:  35
Nümunə çıxış:  True

İzah: Ədədin 10-a bölünəndəki qalığı 0 və ya 5-dirsə şərt doğru olur (yəni ədəd 5-ə bölünür).
"""

x = int(input())
print(x % 10 == 0 or x % 10 == 5)
