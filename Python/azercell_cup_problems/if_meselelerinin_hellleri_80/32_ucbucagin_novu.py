# 32. Üçbucağın növü
# Üç tərəf uzunluğu daxil edilir (üçbucaq əmələ gətirdiyi fərz edilir). Növünü tap: hamısı bərabərdirsə "Bərabərtərəfli", iki tərəf bərabərdirsə "Bərabəryanlı", əks halda "Müxtəlif tərəfli".
#
# Giriş:  Üç tam ədəd (tərəflər)
# Çıxış:  Üçbucağın növü
# Nümunə: 5 5 8 → Bərabəryanlı

a, b, c = map(int, input().split())
if a == b == c:
    print("Bərabərtərəfli")
elif a == b or b == c or a == c:
    print("Bərabəryanlı")
else:
    print("Müxtəlif tərəfli")
