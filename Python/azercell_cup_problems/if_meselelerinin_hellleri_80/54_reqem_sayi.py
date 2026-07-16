# 54. Rəqəm sayı
# Bir ədəd daxil edilir. 100-dən böyükdürsə "3 və ya daha çox rəqəmli", əks halda "1-2 rəqəmli" çap et.
#
# Giriş:  Bir tam ədəd
# Çıxış:  Uyğun mesaj
# Nümunə: 250 → 3 və ya daha çox rəqəmli

x = int(input())
if x > 100:
    print("3 və ya daha çox rəqəmli")
else:
    print("1-2 rəqəmli")
