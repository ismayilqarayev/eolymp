"""
Bölmə 3 — Müqayisə və məntiqi əməliyyatların birləşməsi

Məsələ 53: Şagirdin dərsə davamiyyəti (faizlə) verilib. 75%-dən aşağıdırsa "İmtahana buraxılmır", əks halda "Buraxılır" yazın.

Nümunə giriş:  68
Nümunə çıxış:  İmtahana buraxılmır

İzah: Faiz 75-dən azdırsa müvafiq xəbərdarlıq mesajı, əks halda icazə mesajı çap olunur.
"""

davamiyyet = int(input())
if davamiyyet < 75:
    print("İmtahana buraxılmır")
else:
    print("Buraxılır")
