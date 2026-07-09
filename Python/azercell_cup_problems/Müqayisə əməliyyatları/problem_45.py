"""
Bölmə 3 — Müqayisə və məntiqi əməliyyatların birləşməsi

Məsələ 45: İl verilib. Yuxarıdakı qaydaya əsasən keçən il yoxlanılsın.

Nümunə giriş:  1900
Nümunə çıxış:  False

İzah: Eyni düstur 1900-ə tətbiq olunur: 1900 4-ə bölünür, lakin 100-ə də bölünür və 400-ə bölünmür, ona görə False çıxır.
"""

y = int(input())
print(y % 4 == 0 and (y % 100 != 0 or y % 400 == 0))
