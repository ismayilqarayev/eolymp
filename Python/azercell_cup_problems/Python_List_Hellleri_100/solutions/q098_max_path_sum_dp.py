"""
Sual 98: NxM matrisde yalniz saga/asagi hereket ederek sol-yuxari
kunc(0,0)-den sag-asagi kunca (n-1,m-1) qeder en boyuk cemli yolu tapin.

Giris (Input):
    1-ci setirde N ve M.
    Sonrakı N setirde matris.

Cixis (Output):
    Maksimum cemli yolun cemi.

Numune:
    Giris:  2 2
            1 2
            1 1
    Cixis:  4   (yol: 1 -> 2 -> 1, yaxud 1 -> 1 -> 1; en boyuk cem 1+2+1=4)

Alqoritmin izahi:
    dp[i][j] = (0,0)-dan (i,j)-e qeder olan en boyuk cemli yolun cemi.
    Yalniz saga ve ya asagi hereket eddiyimiz ucun, (i,j)-e ya yuxaridan
    (i-1,j), ya da soldan (i,j-1) gelmek olar. Bu ikisinden boyugunu
    secib, cari xananin deyerini elave edirik. Birinci setir/sutun
    ucun yalniz bir istiqametden gelmek mumkundur.
"""

n, m = map(int, input().split())
matris = [list(map(int, input().split())) for _ in range(n)]

dp = [[0] * m for _ in range(n)]
dp[0][0] = matris[0][0]

# Birinci setiri doldururuq (yalniz soldan gelmek mumkundur)
for j in range(1, m):
    dp[0][j] = dp[0][j - 1] + matris[0][j]

# Birinci sutunu doldururuq (yalniz yuxaridan gelmek mumkundur)
for i in range(1, n):
    dp[i][0] = dp[i - 1][0] + matris[i][0]

# Qalan xanalari doldururuq: yuxaridan ve soldan gelen yollardan boyugunu seciriz
for i in range(1, n):
    for j in range(1, m):
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + matris[i][j]

print(dp[n - 1][m - 1])
