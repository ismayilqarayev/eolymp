# 63. Böyük yoxsa kiçik hərf
# Bir hərf daxil edilir. Onun böyük yoxsa kiçik hərf olduğunu tap.
#
# Giriş:  Bir simvol (hərf)
# Çıxış:  "Böyük hərfdir" və ya "Kiçik hərfdir"
# Nümunə: A → Böyük hərfdir

herf = input()
if herf.isupper():
    print("Böyük hərfdir")
else:
    print("Kiçik hərfdir")
