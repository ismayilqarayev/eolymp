# 61. Sait yoxsa samit
# Bir hərf daxil edilir. Onun sait (a, e, ə, i, ı, o, ö, u, ü) yoxsa samit olduğunu tap.
#
# Giriş:  Bir simvol (hərf)
# Çıxış:  "Saitdir" və ya "Samitdir"
# Nümunə: a → Saitdir

herf = input()
saitler = "aeəiıoöuü"
if herf.lower() in saitler:
    print("Saitdir")
else:
    print("Samitdir")
