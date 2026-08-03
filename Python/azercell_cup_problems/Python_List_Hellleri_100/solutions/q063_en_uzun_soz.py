"""
Sual 63: Setri sozlere bolub en uzun sozu tapin.

Giris (Input):
    Bir setir (sozler boslugla ayrilir).

Cixis (Output):
    Setirdeki en uzun soz.

Numune:
    Giris:  Salam Azercell Cup
    Cixis:  Azercell
"""

setir = input()

# split() defolt olaraq boslugla bolur ve soz siyahisi qaytarir
sozler = setir.split()

en_uzun = sozler[0]
for soz in sozler:
    if len(soz) > len(en_uzun):
        en_uzun = soz

print(en_uzun)
