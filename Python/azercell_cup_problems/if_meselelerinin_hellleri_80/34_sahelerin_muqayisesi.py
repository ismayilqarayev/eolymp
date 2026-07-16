# 34. Sahələrin müqayisəsi
# Kvadratın tərəfi və düzbucaqlının eni-uzunu daxil edilir. Hansının sahəsi daha böyükdürsə onu çap et.
#
# Giriş:  Üç tam ədəd: kvadrat tərəfi, düzbucaqlı eni, düzbucaqlı uzunu
# Çıxış:  "Kvadrat daha böyükdür", "Düzbucaqlı daha böyükdür" və ya "Bərabərdir"
# Nümunə: 4 3 5 → Kvadrat daha böyükdür

kvadrat_teref, en, uzun = map(int, input().split())
kvadrat_sahe = kvadrat_teref * kvadrat_teref
duzbucaqli_sahe = en * uzun
if kvadrat_sahe > duzbucaqli_sahe:
    print("Kvadrat daha böyükdür")
elif duzbucaqli_sahe > kvadrat_sahe:
    print("Düzbucaqlı daha böyükdür")
else:
    print("Bərabərdir")
