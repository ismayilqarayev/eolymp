"""
Bölmə 1 — Müqayisə əməliyyatları (==, !=, >, <, >=, <=)

Məsələ 15: İki ədəd verilib. Birincinin ikinciyə bölünüb-bölünmədiyini (qalıqsız) yoxlayın.

Nümunə giriş:  20 4
Nümunə çıxış:  True

İzah: Əgər a-nın b-yə bölünməsindən qalıq 0-dırsa, deməli a ədədi b-yə tam bölünür.
"""

a, b = map(int, input().split())
print(a % b == 0)
