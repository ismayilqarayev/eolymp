# 77. Üçşərtli giriş yoxlaması
# İstifadəçi adı, şifrə və yaş daxil edilir. İstifadəçi adı "admin", şifrə "1234" VƏ yaş 18-dən yuxarıdırsa "Giriş uğurludur", əks halda "Giriş rədd edildi" çap et.
#
# Giriş:  Bir söz (istifadəçi adı), bir söz (şifrə), bir tam ədəd (yaş)
# Çıxış:  Uyğun mesaj
# Nümunə: admin 1234 20 → Giriş uğurludur

istifadeci_adi, sifre, yas = input().split()
yas = int(yas)
if istifadeci_adi == "admin" and sifre == "1234" and yas > 18:
    print("Giriş uğurludur")
else:
    print("Giriş rədd edildi")
