"""
Sual 85: NxN matrisde 'sehrli kvadrat' olub-olmadigini yoxlayin.

Sehrli kvadrat: her setirin, her sutunun ve her iki diaqonalin cemi eynidir.

Giris (Input):
    1-ci setirde N.
    Sonrakı N setirde matris.

Cixis (Output):
    "Beli" - eger matris sehrli kvadratdirsa, eks halda "Xeyr".

Numune:
    Giris:  3
            2 7 6
            9 5 1
            4 3 8
    Cixis:  Beli
"""

n = int(input())
matris = [list(map(int, input().split())) for _ in range(n)]

# Hedef cemi ilk setirin cemi kimi qebul edirik, sonra hamisi ile muqayise edirik
hedef = sum(matris[0])
uygundur = True

# Her setirin cemini yoxlayiriq
for setir in matris:
    if sum(setir) != hedef:
        uygundur = False

# Her sutunun cemini yoxlayiriq
for j in range(n):
    if sum(matris[i][j] for i in range(n)) != hedef:
        uygundur = False

# Bas diaqonalin cemini yoxlayiriq
if sum(matris[i][i] for i in range(n)) != hedef:
    uygundur = False

# Eks diaqonalin cemini yoxlayiriq
if sum(matris[i][n - 1 - i] for i in range(n)) != hedef:
    uygundur = False

print("Beli" if uygundur else "Xeyr")
