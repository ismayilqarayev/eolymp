# 57. 3 rəqəmli palindrom
# 3 rəqəmli bir ədəd daxil edilir. Onun palindrom olub-olmadığını (yəni tərsdən oxunduqda eyni olub-olmadığını) yoxla.
#
# Giriş:  Bir tam ədəd (3 rəqəmli)
# Çıxış:  "Palindromdur" və ya "Palindrom deyil"
# Nümunə: 343 → Palindromdur

x = int(input())
s = str(x)
if s == s[::-1]:
    print("Palindromdur")
else:
    print("Palindrom deyil")
