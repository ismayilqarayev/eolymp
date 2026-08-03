"""
Sual 72: Merge Sort ile siyahini siralayin (rekursiya).

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Artan sirada siralanmis siyahi.

Numune:
    Giris:  5
            5 3 8 1 9
    Cixis:  1 3 5 8 9

Alqoritmin izahi:
    "Bol ve hokm et" (divide and conquer) yanaşması:
    1) Siyahi ortadan iki yariya bolunur.
    2) Her yari rekursiv sekilde siralanir.
    3) Iki siralanmis yari "merge" funksiyasi ile birlesdirilir
       (36-ci sualdaki merge menantiği ile eynidir).
"""


def merge(a, b):
    """Iki siralanmis siyahini birlesdirib siralanmis netice qaytarir."""
    netice = []
    i = j = 0
    while i < len(a) and j < len(b):
        if a[i] <= b[j]:
            netice.append(a[i]); i += 1
        else:
            netice.append(b[j]); j += 1
    netice.extend(a[i:])
    netice.extend(b[j:])
    return netice


def merge_sort(arr):
    if len(arr) <= 1:
        return arr

    orta = len(arr) // 2
    sol = merge_sort(arr[:orta])   # sol yarini rekursiv siralayiriq
    sag = merge_sort(arr[orta:])   # sag yarini rekursiv siralayiriq
    return merge(sol, sag)          # iki siralanmis yarini birlesdiririk


n = int(input())
arr = list(map(int, input().split()))
print(*merge_sort(arr))
