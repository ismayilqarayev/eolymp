# 36. Dairə daxilində nöqtə
# Dairənin radiusu və nöqtənin mərkəzdən məsafəsi (kvadratı) daxil edilir. Nöqtənin dairənin daxilində olub-olmadığını yoxla.
#
# Giriş:  İki tam ədəd: radius, məsafənin kvadratı
# Çıxış:  "Daxilindədir" və ya "Xaricindədir"
# Nümunə: 5 16 → Daxilindədir

radius, mesafe_kv = map(int, input().split())
if mesafe_kv < radius ** 2:
    print("Daxilindədir")
else:
    print("Xaricindədir")
