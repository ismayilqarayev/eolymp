# 31. Üçbucaq əmələ gəlirmi
# Üç tərəf uzunluğu daxil edilir. Bu tərəflərdən üçbucaq əmələ gəlib-gəlmədiyini yoxla (hər iki tərəfin cəmi üçüncüdən böyük olmalıdır).
#
# Giriş:  Üç tam ədəd (tərəflər)
# Çıxış:  "Üçbucaq əmələ gəlir" və ya "Üçbucaq əmələ gəlmir"
# Nümunə: 3 4 5 → Üçbucaq əmələ gəlir

a, b, c = map(int, input().split())
if a + b > c and a + c > b and b + c > a:
    print("Üçbucaq əmələ gəlir")
else:
    print("Üçbucaq əmələ gəlmir")
