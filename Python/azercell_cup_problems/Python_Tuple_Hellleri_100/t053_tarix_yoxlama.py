"""
Sual 53: Kortec kimi verilmis tarixi (il, ay, gun) yoxlayib, duzgun tarix
olub-olmadigini sade qaydalarla yoxlayin.

Giris (Input):
    "il ay gun".

Cixis (Output):
    "Duzgundur" / "Sehvdir".

Numune:
    Giris:  2024 5 15
    Cixis:  Duzgundur
"""

il, ay, gun = map(int, input().split())
tarix = (il, ay, gun)   # (il, ay, gun) kortecidir

duzgundur = 1 <= tarix[1] <= 12 and 1 <= tarix[2] <= 31

print("Duzgundur" if duzgundur else "Sehvdir")
