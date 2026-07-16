# 20. Təqaüd yoxlaması
# Şagirdin GPA-sı (0.0-4.0) daxil edilir. 3.5-dən yuxarıdırsa "Təqaüd alır", əks halda "Təqaüd almır".
#
# Giriş:  Bir kəsr ədəd (GPA)
# Çıxış:  "Təqaüd alır" və ya "Təqaüd almır"
# Nümunə: 3.7 → Təqaüd alır

gpa = float(input())
if gpa > 3.5:
    print("Təqaüd alır")
else:
    print("Təqaüd almır")
