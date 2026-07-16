# 80. Çatdırılma növü
# Sifarişin çəkisi (kq) daxil edilir. 1 kq-dan azdırsa "Poçt ilə", 1-20 kq "Kuryer ilə", 20 kq-dan çox "Yük maşını ilə" çatdırılacağını bildir.
#
# Giriş:  Bir kəsr ədəd (çəki)
# Çıxış:  Çatdırılma növü
# Nümunə: 15 → Kuryer ilə

cheki = float(input())
if cheki < 1:
    print("Poçt ilə")
elif cheki <= 20:
    print("Kuryer ilə")
else:
    print("Yük maşını ilə")
