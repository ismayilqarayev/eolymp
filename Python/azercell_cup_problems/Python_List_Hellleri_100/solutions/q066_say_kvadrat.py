"""
Sual 66: Her eded ucun (say, kvadrat) cutlerini cap edin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Her eded ucun ayri setirde "eded kvadrati" cutu.

Numune:
    Giris:  3
            2 3 4
    Cixis:  2 4
            3 9
            4 16
"""

n = int(input())
arr = list(map(int, input().split()))

for x in arr:
    print(x, x * x)   # x ve onun kvadratini ayni setirde cap edirik
