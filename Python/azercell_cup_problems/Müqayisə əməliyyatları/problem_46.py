"""
Bölmə 3 — Müqayisə və məntiqi əməliyyatların birləşməsi

Məsələ 46: Üç tərəf uzunluğu verilib. Onların üçbucaq əmələ gətirib-gətirmədiyini yoxlayın (hər iki tərəfin cəmi üçüncüdən böyük olmalıdır).

Nümunə giriş:  3 4 5
Nümunə çıxış:  True

İzah: Üçbucaq bərabərsizliyi qaydası: istənilən iki tərəfin cəmi üçüncü tərəfdən böyük olmalıdır. Bütün üç şərt and ilə birləşir.
"""

a, b, c = map(int, input().split())
print(a + b > c and a + c > b and b + c > a)
