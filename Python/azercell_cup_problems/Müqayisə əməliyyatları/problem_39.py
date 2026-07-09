"""
Bölmə 2 — Məntiqi əməliyyatlar (and, or, not)

Məsələ 39: İki şərtin heç birinin doğru olmadığını yoxlayın (not (a or b)).

Nümunə giriş:  False False
Nümunə çıxış:  True

İzah: İki şərtdən heç birinin doğru olmadığını yoxlamaq üçün əvvəlcə or, sonra not tətbiq olunur.
"""

a, b = input().split()
a = (a == "True")
b = (b == "True")
print(not (a or b))
