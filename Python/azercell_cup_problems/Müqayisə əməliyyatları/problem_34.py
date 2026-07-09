"""
Bölmə 2 — Məntiqi əməliyyatlar (and, or, not)

Məsələ 34: İki şərt: hava temperaturu 25-dən yuxarıdır və günəşlidir (True/False). Çimərliyə getmək qərarını yoxlayın.

Nümunə giriş:  28 False
Nümunə çıxış:  False

İzah: Çimərliyə getmək qərarı yalnız hər iki şərt (temperatur VƏ günəşli olma) doğru olduqda True olur.
"""

temp, gunesli = input().split()
temp = int(temp)
gunesli = (gunesli == "True")
print(temp > 25 and gunesli)
