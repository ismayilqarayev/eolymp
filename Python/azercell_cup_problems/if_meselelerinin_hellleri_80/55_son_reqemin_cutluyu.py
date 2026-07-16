# 55. Son rəqəmin cütlüyü
# Bir ədəd daxil edilir. Onun son rəqəminin cüt yoxsa tək olduğunu tap.
#
# Giriş:  Bir tam ədəd
# Çıxış:  "Son rəqəm cütdür" və ya "Son rəqəm təkdir"
# Nümunə: 237 → Son rəqəm təkdir

x = int(input())
son_reqem = abs(x) % 10
if son_reqem % 2 == 0:
    print("Son rəqəm cütdür")
else:
    print("Son rəqəm təkdir")
