"""
Sual 57: Setri sozlere bolub kortec yaradin ve en uzun sozu tapin.

Giris (Input):
    Bir setir.

Cixis (Output):
    En uzun soz.

Numune:
    Giris:  Salam Azercell Cup
    Cixis:  Azercell
"""

setir = input()
sozler = tuple(setir.split())   # split() siyahi qaytarir, tuple() ile korteye ceviririk

en_uzun = sozler[0]
for soz in sozler:
    if len(soz) > len(en_uzun):
        en_uzun = soz

print(en_uzun)
