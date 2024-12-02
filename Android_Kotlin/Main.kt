import java.util.Scanner

data class MyStruct(
    val ad: String,
    val soyad: String,
    val ataAdi: String,
    val telefon: String
) {
    fun print() {
        println("Ad: $ad, Soyad: $soyad, Ata adı: $ataAdi, Telefon: $telefon")
    }
}

fun main() {
    val myStructs = mutableListOf<MyStruct>()
    val say = melumatlarinDaxilEdilmesi()

    repeat(say) {
        val person = yeniMelumatDaxilEt()
        myStructs.add(person)
    }

    for (myStruct in myStructs) {
        myStruct.print()
    }
}

fun melumatlarinDaxilEdilmesi(): Int {
    val scanner = Scanner(System.`in`)
    var say: Int?

    println("Neçə nəfərin məlumatını daxil edəcəksiniz?")
    while (true) {
        val input = scanner.nextLine()
        say = input.toIntOrNull()
        if (say != null && say > 0) {
            break
        }
        println("Zəhmət olmasa düzgün bir ədəd daxil edin:")
    }
    return say
}

fun yeniMelumatDaxilEt(): MyStruct {
    val scanner = Scanner(System.`in`)

    println("Adınızı daxil edin:")
    val ad = scanner.nextLine()

    println("Soyadınızı daxil edin:")
    val soyad = scanner.nextLine()

    println("Ata adınızı daxil edin:")
    val ataAdi = scanner.nextLine()

    println("Telefon nömrənizi daxil edin:")
    var telefon: String
    while (true) {
        telefon = scanner.nextLine()
        if (telefon.isNotBlank()) {
            break
        }
        println("Zəhmət olmasa düzgün telefon nömrəsi daxil edin:")
    }

    return MyStruct(ad, soyad, ataAdi, telefon)
}
