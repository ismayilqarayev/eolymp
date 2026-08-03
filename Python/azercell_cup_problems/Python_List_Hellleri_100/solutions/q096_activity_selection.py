"""
Sual 96: Maksimum sayda ust-uste dusmeyen tapsirigi secin
(activity selection, greedy alqoritm).

Giris (Input):
    1-ci setirde N.
    Sonrakı N setirde her biri "başlanğıc son" (tapsirigin vaxt araligi).

Cixis (Output):
    Secile bilen maksimum sayda ust-uste dusmeyen tapsiriq sayi.

Numune:
    Giris:  4
            1 3
            2 4
            3 5
            6 7
    Cixis:  3   (1-3, 3-5, 6-7 -- toxunma noqtesi qebul edilir)

Alqoritmin izahi (greedy - acgozlukle):
    Tapsiriqlari BITME vaxtina gore siralayiriq. Sonra ardicil olaraq,
    eger tapsirigin başlanğıcı son secilmis tapsirigin bitmesinden
    kicik deyilse (ust-uste dusmurse), onu seciriz. Bu, hemise
    optimal neticeni verir: en tez biten tapsirigi secmek galan
    vaxtdan maksimum istifadeye imkan yaradir.
"""

n = int(input())
tapsiriqlar = []
for _ in range(n):
    b, s = map(int, input().split())
    tapsiriqlar.append((b, s))

# Bitme vaxtina gore siralayiriq (greedy strategiyanin esasi budur)
tapsiriqlar.sort(key=lambda t: t[1])

say = 0
son_bitme = -float('inf')
for b, s in tapsiriqlar:
    if b >= son_bitme:
        # Bu tapsiriq evvelki secilmis tapsiriqla ust-uste dusmur
        say += 1
        son_bitme = s

print(say)
