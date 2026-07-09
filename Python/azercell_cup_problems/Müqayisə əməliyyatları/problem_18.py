"""
Bölmə 1 — Müqayisə əməliyyatları (==, !=, >, <, >=, <=)

Məsələ 18: Temperatur verilib. Temperaturun 0°C-dən aşağı olub-olmadığını yoxlayın.

Nümunə giriş:  -5
Nümunə çıxış:  True

İzah: Temperatur 0-dan aşağıdırsa (mənfi ədəddirsə) True qaytarılır.
"""

t = int(input())
print(t < 0)
