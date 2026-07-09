"""
Bölmə 4 — Praktiki və məntiqli məsələlər (Azercell Cup səviyyəsi)

Məsələ 80: Yekun məsələ: şagirdin üç fənn üzrə balı verilib (riyaziyyat, informatika, ingilis dili). Hər üçü 60-dan yuxarıdırsa və ortalama bal 75-dən yuxarıdırsa "Təqaüdə layiqdir" yazın, əks halda "Təqaüdə layiq deyil" yazın.

Nümunə giriş:  80 85 70
Nümunə çıxış:  Təqaüdə layiqdir

İzah: Dörd şərt (hər fənn 60-dan yuxarı VƏ ortalama 75-dən yuxarı) and operatoru ilə birləşdirilir; hamısı doğru olmalıdır.
"""

r, i, ing = map(int, input().split())
ortalama = (r + i + ing) / 3
if r > 60 and i > 60 and ing > 60 and ortalama > 75:
    print("Təqaüdə layiqdir")
else:
    print("Təqaüdə layiq deyil")
