"""
Bölmə 3 — Müqayisə və məntiqi əməliyyatların birləşməsi

Məsələ 44: İl verilib. Onun keçən (adi) il olub-olmadığını yoxlayın (4-ə bölünür, amma 100-ə bölünürsə 400-ə də bölünməlidir).

Nümunə giriş:  2024
Nümunə çıxış:  True

İzah: Keçən il qaydası: 4-ə bölünməli VƏ (100-ə bölünməməli YA DA 400-ə bölünməli). Mötərizələr əməliyyat ardıcıllığını təyin edir.
"""

y = int(input())
print(y % 4 == 0 and (y % 100 != 0 or y % 400 == 0))
