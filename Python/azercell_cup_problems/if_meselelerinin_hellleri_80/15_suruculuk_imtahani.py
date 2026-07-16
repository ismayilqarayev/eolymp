# 15. Sürücülük imtahanı
# Nəzəri və praktiki imtahan balları daxil edilir. Hər ikisi 70-dən çoxdursa "Vəsiqə verilir", əks halda "Vəsiqə verilmir".
#
# Giriş:  İki tam ədəd (nəzəri bal, praktiki bal)
# Çıxış:  "Vəsiqə verilir" və ya "Vəsiqə verilmir"
# Nümunə: 80 75 → Vəsiqə verilir

nezeri, praktiki = map(int, input().split())
if nezeri > 70 and praktiki > 70:
    print("Vəsiqə verilir")
else:
    print("Vəsiqə verilmir")
