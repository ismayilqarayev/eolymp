# 41. Alış endirimi
# Alışın məbləği daxil edilir. 200 AZN-dən çoxdursa 15% endirim, 100-199 arası 10% endirim, əks halda endirim yoxdur. Son ödəniləcək məbləği çap et.
#
# Giriş:  Bir kəsr ədəd (məbləğ)
# Çıxış:  Son ödəniləcək məbləğ
# Nümunə: 250 → 212.5

meblegh = float(input())
if meblegh > 200:
    son_meblegh = meblegh * 0.85
elif meblegh >= 100:
    son_meblegh = meblegh * 0.90
else:
    son_meblegh = meblegh
print(son_meblegh)
