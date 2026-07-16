# 11. Hərf qiyməti
# Şagirdin balı (0-100) daxil edilir. Bala görə hərf qiyməti çap et: 90+ "A", 80-89 "B", 70-79 "C", 60-69 "D", 60-dan az "F".
#
# Giriş:  Bir tam ədəd (bal)
# Çıxış:  Hərf qiyməti
# Nümunə: 85 → B

bal = int(input())
if bal >= 90:
    print("A")
elif bal >= 80:
    print("B")
elif bal >= 70:
    print("C")
elif bal >= 60:
    print("D")
else:
    print("F")
