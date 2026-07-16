# 30. Doğum ili əsri
# Doğum ili daxil edilir. 2000 və ya yuxarıdırsa "XXI əsr", əks halda "XX əsr və ya daha əvvəl" çap et.
#
# Giriş:  Bir tam ədəd (il)
# Çıxış:  Uyğun əsr
# Nümunə: 2010 → XXI əsr

il = int(input())
if il >= 2000:
    print("XXI əsr")
else:
    print("XX əsr və ya daha əvvəl")
