"""
Sual 27: Iki tam ededi qebul edib onlari kortec kimi yerdeyismis qaytarin (a, b = b, a).

Giris (Input):
    Bir setirde "a b".

Cixis (Output):
    Yerdeyismis "b a".

Numune:
    Giris:  3 7
    Cixis:  7 3
"""

a, b = map(int, input().split())

# Python-da a, b = b, a ifadesi arxa planda muveqqeti bir kortec ((b, a)) yaradib,
# sonra onu a ve b-ye "unpack" edir -- elave deyisen istifade etmeye ehtiyac qalmir
a, b = b, a

print(a, b)
