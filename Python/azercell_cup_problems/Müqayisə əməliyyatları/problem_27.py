"""
Bölmə 2 — Məntiqi əməliyyatlar (and, or, not)

Məsələ 27: İki şərt: yaş 18-dən böyükdür və vətəndaşlıq vəsiqəsi vardır (True/False). Səs vermə hüququnu yoxlayın.

Nümunə giriş:  20 True
Nümunə çıxış:  True

İzah: Səs vermə hüququ üçün hər iki şərt — yaş 18-dən böyük olmalı VƏ vəsiqə olmalıdır — and ilə birləşdirilir.
"""

yas, senedi = input().split()
yas = int(yas)
senedi = (senedi == "True")
print(yas > 18 and senedi)
