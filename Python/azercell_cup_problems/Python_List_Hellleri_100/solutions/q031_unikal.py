"""
Sual 31: Siyahidaki tekrarlanan elementleri silib unikal siyahi yaradin (set() olmadan).

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Her element yalniz bir defe, ilk gorunme sirasi ile.

Numune:
    Giris:  6
            1 2 2 3 1 4
    Cixis:  1 2 3 4
"""

n = int(input())
arr = list(map(int, input().split()))

# Netice siyahisini bos yaradiriq, unikal elementleri buraya toplayacagiq
unikal = []

for x in arr:
    # Eger element artiq unikal siyahida yoxdursa, elave edirik
    if x not in unikal:
        unikal.append(x)

print(*unikal)
