"""
Sual 29: Kortec unpacking istifade ederek 3 ededi ayrica deyisenlere menimsedib cemini cap edin.

Giris (Input):
    Bir setirde 3 eded.

Cixis (Output):
    Cem.

Numune:
    Giris:  1 2 3
    Cixis:  6
"""

# map(int, ...) neticesi 3 elementli olduğu ucun onu birbasa 3 deyisene "unpack" ede bilirik
a, b, c = map(int, input().split())

print(a + b + c)
