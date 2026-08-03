"""
Sual 45: Siyahinin elementlerini saga K movqe suruşdurun.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.
    3-cu setirde K (suruşme miqdari).

Cixis (Output):
    Saga suruşulmus siyahi.

Numune:
    Giris:  5
            1 2 3 4 5
            2
    Cixis:  4 5 1 2 3

Yanasma:
    Siyahinin son K elementini evvele, qalan hissesini sonuna qoyuruq.
    k % n edir ki, K, N-den boyuk olsa da düzgün nəticə alaq.
"""

n = int(input())
arr = list(map(int, input().split()))
k = int(input()) % n   # K, N-den boyuk olarsa lazimsiz tam dovrleri aradan qaldiririq

# arr[-k:] -- sondan k eded (bunlar evvele kecmelidir)
# arr[:-k] -- qalan (evvelki) hisse
netice = arr[-k:] + arr[:-k] if k != 0 else arr

print(*netice)
