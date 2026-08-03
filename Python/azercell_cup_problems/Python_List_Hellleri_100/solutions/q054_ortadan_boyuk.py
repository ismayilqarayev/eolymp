"""
Sual 54: Her elementi orta qiymetle muqayise edib ondan boyuk olanlari cap edin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Ortadan boyuk olan elementler.

Numune:
    Giris:  5
            1 2 3 4 10
    Cixis:  4 10
"""

n = int(input())
arr = list(map(int, input().split()))

# Evvelce arifmetik ortani hesablayiriq
orta = sum(arr) / n

# Sonra ortadan boyuk olan elementleri secirik
print(*[x for x in arr if x > orta])
