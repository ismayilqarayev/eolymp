"""
Sual 93: N tapsirigin icra vaxtlari verilib, iki eyni prosessor arasinda
paylasdiraraq minimum "makespan"i (en boyuk yukun minimumunu) tapin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded (icra vaxtlari).

Cixis (Output):
    Minimum mumkun makespan (iki prosessordan boyuyunun ən kicik qiymeti).

Numune:
    Giris:  4
            4 5 6 7
    Cixis:  11   (bir prosessor: 4+7=11, digeri: 5+6=11)

Alqoritmin izahi:
    Bu meselə 77-ci sualdaki "partition problem" ile eynidir --
    tapsiriqlari iki qrupa bölürük ki, qruplarin cemleri bir-birine
    mümkün qeder yaxin olsun. Subset-sum DP ile umumi cemin yarisina
    en yaxin elde edilebilen cemi tapiriq, sonra iki prosessordan
    boyuyunun qiymetini (max(en_yaxin, cem-en_yaxin)) qaytaririq.
"""

n = int(input())
vaxtlar = list(map(int, input().split()))
cem = sum(vaxtlar)

dp = [False] * (cem + 1)
dp[0] = True
for v in vaxtlar:
    for s in range(cem, v - 1, -1):
        if dp[s - v]:
            dp[s] = True

en_yaxin = 0
for s in range(cem // 2, -1, -1):
    if dp[s]:
        en_yaxin = s
        break

# Iki prosessordan boyuk yuklenmis olani cavab olur
print(max(en_yaxin, cem - en_yaxin))
