# 79. Oyun canı sayı
# Qalan can sayı daxil edilir. 0-dırsa "Oyun bitdi", 1-dirsə "Diqqətli ol, son canın!", 1-dən çoxdursa "Davam et" çap et.
#
# Giriş:  Bir tam ədəd (can sayı)
# Çıxış:  Uyğun mesaj
# Nümunə: 1 → Diqqətli ol, son canın!

can = int(input())
if can == 0:
    print("Oyun bitdi")
elif can == 1:
    print("Diqqətli ol, son canın!")
else:
    print("Davam et")
