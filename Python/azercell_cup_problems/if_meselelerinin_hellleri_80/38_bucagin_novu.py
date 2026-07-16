# 38. Bucağın növü
# Bucaq dərəcə ilə daxil edilir. 90-dan azdırsa "İti bucaq", 90-dırsa "Düz bucaq", 90-dan çoxdursa "Kor bucaq".
#
# Giriş:  Bir tam ədəd (dərəcə)
# Çıxış:  Bucağın növü
# Nümunə: 120 → Kor bucaq

derece = int(input())
if derece < 90:
    print("İti bucaq")
elif derece == 90:
    print("Düz bucaq")
else:
    print("Kor bucaq")
