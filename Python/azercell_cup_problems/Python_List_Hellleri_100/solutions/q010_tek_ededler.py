"""
Sual 10: Siyahidaki butun tek ededleri cap edin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Deyeri tek olan elementler.

Numune:
    Giris:  6
            1 2 3 4 5 6
    Cixis:  1 3 5
"""

n = int(input())
arr = list(map(int, input().split()))

# x % 2 != 0 serti -- eded 2-ye qaliqsiz bolunmurse tekdir
netice = [x for x in arr if x % 2 != 0]

print(*netice)
