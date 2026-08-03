"""
Sual 24: Siyahinin elementlerini vergulle ayrilmis setir kimi cap edin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Elementler vergulle ayrilmis, boslugsuz setir seklinde ("1,2,3").

Numune:
    Giris:  3
            1 2 3
    Cixis:  1,2,3
"""

n = int(input())
arr = list(map(int, input().split()))

# map(str, arr) -> her tam ededi setire cevirir
# ",".join(...) -> setirleri "," ile birlesdirir
netice = ",".join(map(str, arr))

print(netice)
