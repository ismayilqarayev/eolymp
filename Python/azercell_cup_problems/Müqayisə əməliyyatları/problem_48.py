"""
Bölmə 3 — Müqayisə və məntiqi əməliyyatların birləşməsi

Məsələ 48: İki ədəd verilib. Onlardan birinin digərinə tam bölünüb-bölünmədiyini və nəticənin cüt olub-olmadığını yoxlayın.

Nümunə giriş:  20 5
Nümunə çıxış:  True

İzah: Əvvəlcə tam bölünmə (%) yoxlanılır, sonra // (tam bölmə) ilə tapılan nəticənin cüt olub-olmadığı yoxlanılır.
"""

a, b = map(int, input().split())
print(a % b == 0 and (a // b) % 2 == 0)
