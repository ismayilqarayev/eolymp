# 67. Rəqəm simvolu yoxlaması
# Bir simvol daxil edilir. Onun rəqəm olub-olmadığını yoxla.
#
# Giriş:  Bir simvol
# Çıxış:  "Rəqəmdir" və ya "Rəqəm deyil"
# Nümunə: 5 → Rəqəmdir

simvol = input()
if simvol.isdigit():
    print("Rəqəmdir")
else:
    print("Rəqəm deyil")
