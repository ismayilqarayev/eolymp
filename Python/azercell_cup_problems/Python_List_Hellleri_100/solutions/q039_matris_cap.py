"""
Sual 39: NxM matrisi daxil edib cap edin.

Giris (Input):
    1-ci setirde N ve M (setir ve sutun sayi).
    Sonrakı N setirde her biri M eded.

Cixis (Output):
    Matrisi oldugu kimi cap edin.

Numune:
    Giris:  2 2
            1 2
            3 4
    Cixis:  1 2
            3 4
"""

n, m = map(int, input().split())

# List comprehension ile N eded setir oxuyub siyahilarin siyahisini (matris) qururuq
matris = [list(map(int, input().split())) for _ in range(n)]

for setir in matris:
    print(*setir)
