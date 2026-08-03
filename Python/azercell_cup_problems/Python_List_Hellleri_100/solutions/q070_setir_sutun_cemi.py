"""
Sual 70: NxN matrisin setir ve sutun cemlerini tapin.

Giris (Input):
    1-ci setirde N.
    Sonrakı N setirde matris.

Cixis (Output):
    1-ci setirde her setirin cemi.
    2-ci setirde her sutunun cemi.

Numune:
    Giris:  2
            1 2
            3 4
    Cixis:  3 7
            4 6
"""

n = int(input())
matris = [list(map(int, input().split())) for _ in range(n)]

# Her setiri sum() ile toplayaraq setir cemlerini tapiriq
setir_cemleri = [sum(setir) for setir in matris]

# Her sutun ucun butun setirlerdeki uygun elementleri topluyuriq
sutun_cemleri = [sum(matris[i][j] for i in range(n)) for j in range(n)]

print(*setir_cemleri)
print(*sutun_cemleri)
