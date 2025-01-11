import java.util.*

data class MyStruct(
    var ad: String = "",
    var soyad: String = "",
    var ataAdi: String = "",
    var telefon: String = ""
) {
    fun print() {
        println("Ad: $ad, Soyad: $soyad, Ata adi: $ataAdi, Telefon: $telefon")
    }

    data class Struktorlar(
        var ad: String,
        var soyad: String,
        var ataAdi: String,
        var telefon: String
    ) {
        fun print() {
            println("Ad: $ad, Soyad: $soyad, Ata adi: $ataAdi, Telefon: $telefon")
        }
    }
}

fun main() {
    val myStruct = MyStruct(
        ad = "ismayil",
        soyad = "qarayev",
        ataAdi = "ilqar",
        telefon = "0555555555"
    )

    println("Melumat: ")
    myStruct.print()

    val say = neceneferindaxiledilmesi()

    val myStructs = mutableListOf<MyStruct.Struktorlar>()
    repeat(say) {
        val person = melumatlarindaxiledilmesi()
        myStructs.add(person)
    }

    myStructs.forEach { it.print() }
}

fun neceneferindaxiledilmesi(): Int {
    val scanner = Scanner(System.`in`)
    var say: Int
    println("Nece neferin melumatini daxil edeceksiniz: ")
    while (true) {
        val input = scanner.nextLine()
        if (input.toIntOrNull() != null && input.toInt() > 0) {
            say = input.toInt()
            break
        } else {
            println("Yeniden duzgun bir eded daxil et: ")
        }
    }
    return say
}

fun melumatlarindaxiledilmesi(): MyStruct.Struktorlar {
    val scanner = Scanner(System.`in`)

    println("\nAd: ")
    val ad = scanner.nextLine()

    println("Soyad: ")
    val soyad = scanner.nextLine()

    println("Ata adi: ")
    val ataAdi = scanner.nextLine()

    println("Telefon: ")
    val telefon = scanner.nextLine()

    return MyStruct.Struktorlar(ad, soyad, ataAdi, telefon)
}
