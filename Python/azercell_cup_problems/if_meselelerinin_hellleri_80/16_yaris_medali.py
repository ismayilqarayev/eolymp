# 16. Yarış medalı
# Yarışda tutulan yer (rəqəm) daxil edilir: 1-ci yer "Qızıl", 2-ci yer "Gümüş", 3-cü yer "Bürünc", digər yerlər "Medal yoxdur".
#
# Giriş:  Bir tam ədəd (tutulan yer)
# Çıxış:  Medal növü
# Nümunə: 2 → Gümüş

yer = int(input())
if yer == 1:
    print("Qızıl")
elif yer == 2:
    print("Gümüş")
elif yer == 3:
    print("Bürünc")
else:
    print("Medal yoxdur")
