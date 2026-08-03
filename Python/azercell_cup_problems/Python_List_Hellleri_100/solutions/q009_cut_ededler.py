"""
Sual 9: Siyahidaki butun cut ededleri cap edin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Deyeri cut olan elementler.

Numune:
    Giris:  6
            1 2 3 4 5 6
    Cixis:  2 4 6
"""

n = int(input())
arr = list(map(int, input().split()))

# x % 2 == 0 serti -- eded 2-ye qaliqsiz bolunurse cutdur
netice = [x for x in arr if x % 2 == 0]

print(*netice)
