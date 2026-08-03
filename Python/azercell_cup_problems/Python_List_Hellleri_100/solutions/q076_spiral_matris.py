"""
Sual 76: NxM matrisde spiral sirada butun elementleri cap edin.

Giris (Input):
    1-ci setirde N ve M.
    Sonrakı N setirde matris.

Cixis (Output):
    Elementler spiral (xarici cizgidan ice dogru fırlanaraq) sirada,
    bir setirde boslugla ayrilmis.

Numune:
    Giris:  3 3
            1 2 3
            4 5 6
            7 8 9
    Cixis:  1 2 3 6 9 8 7 4 5

Alqoritmin izahi:
    Dord "serhed" saxlayiriq: ust, alt, sol, sag. Novbe ile:
    1) Ust setiri soldan saga gez, sonra ust serhedi asagi endir.
    2) Sag sutunu yuxaridan asagi gez, sonra sag serhedi sola cek.
    3) Alt setiri sagdan sola gez (eger hele qalibsa), alt serhedi yuxari cek.
    4) Sol sutunu asagıdan yuxari gez (eger hele qalibsa), sol serhedi saga cek.
    Butun sahe gezilene qeder bu addimlari tekrarlayiriq.
"""

n, m = map(int, input().split())
matris = [list(map(int, input().split())) for _ in range(n)]

netice = []
ust, alt, sol, sag = 0, n - 1, 0, m - 1

while ust <= alt and sol <= sag:
    # 1) Ust setiri soldan saga
    for j in range(sol, sag + 1):
        netice.append(matris[ust][j])
    ust += 1

    # 2) Sag sutunu yuxaridan asagi
    for i in range(ust, alt + 1):
        netice.append(matris[i][sag])
    sag -= 1

    # 3) Alt setiri sagdan sola (eger hele bir setir qalibsa)
    if ust <= alt:
        for j in range(sag, sol - 1, -1):
            netice.append(matris[alt][j])
        alt -= 1

    # 4) Sol sutunu asagıdan yuxari (eger hele bir sutun qalibsa)
    if sol <= sag:
        for i in range(alt, ust - 1, -1):
            netice.append(matris[i][sol])
        sol += 1

print(*netice)
