


//--------------------------------------------------------
//23.02.2025
fun main() {
    val adlar = mutableListOf<String>()
    val ataAdlari = mutableListOf<String>()
    val emaillar = mutableListOf<String>()
    val yaslar = mutableListOf<Int>()
    val telefonlar = mutableListOf<Long>()

    val say = neceneferiDaxilEdilmesi()
    melumatlariDaxilEdilmesi(adlar, ataAdlari, emaillar, telefonlar, yaslar, say)

    val konstruktor = Konstruktor(adlar, ataAdlari, emaillar, telefonlar, yaslar)
    konstruktor.print()

    val kopiya = konstruktor.kopyala()
    kopiya.print()
}

fun neceneferiDaxilEdilmesi(): Int {
    println("Neçə nəfər üçün məlumat daxil etmək istəyirsiniz: ")
    while (true) {
        val input = readLine()?.toIntOrNull()
        if (input != null && input > 0) {
            return input
        } else {
            println("Yenidən düzgün bir ədəd daxil edin:")
        }
    }
}

fun melumatlariDaxilEdilmesi(
    adlar: MutableList<String>, ataAdlari: MutableList<String>, emaillar: MutableList<String>,
    telefonlar: MutableList<Long>, yaslar: MutableList<Int>, say: Int
) {
    for (i in 0 until say) {
        adlar.add(adDaxilEt())
        ataAdlari.add(ataAdiniDaxilEt())
        emaillar.add(daxilEtEmail())
        telefonlar.add(daxilEtTelefon())
        yaslar.add(daxilEtYas())
    }
}

fun adDaxilEt(): String {
    while (true) {
        println("Ad daxil edin: ")
        val ad = readLine() ?: ""
        if (ad.isNotEmpty() && ad[0].isLetter()) {
            return ad
        } else {
            println("Adı düzgün daxil edin:")
        }
    }
}

fun ataAdiniDaxilEt(): String {
    while (true) {
        println("Ata adını daxil edin: ")
        val ataAd = readLine() ?: ""
        if (ataAd.isNotEmpty() && ataAd[0].isLetter()) {
            return ataAd
        } else {
            println("Ata adını düzgün daxil edin:")
        }
    }
}

fun daxilEtEmail(): String {
    while (true) {
        println("E-poçt ünvanını daxil edin:")
        val email = readLine() ?: ""
        if (email.contains("@") && email.contains(".")) {
            return email
        } else {
            println("Yenidən düzgün bir e-poçt ünvanı daxil edin:")
        }
    }
}

fun daxilEtTelefon(): Long {
    while (true) {
        println("Telefon nömrəsini daxil edin:")
        val number = readLine() ?: ""
        if (number.length == 10 && number.toLongOrNull() != null) {
            return number.toLong()
        } else {
            println("Məlumatı düzgün daxil edin:")
        }
    }
}

fun daxilEtYas(): Int {
    while (true) {
        println("Yaşı daxil edin:")
        val yas = readLine()?.toIntOrNull()
        if (yas != null && yas > 0) {
            return yas
        } else {
            println("Yaşı düzgün daxil edin:")
        }
    }
}

data class Konstruktor(
    private val adlar: List<String>,
    private val ataAdlari: List<String>,
    private val emaillar: List<String>,
    private val telefonlar: List<Long>,
    private val yaslar: List<Int>
) {
    fun kopyala(): Konstruktor {
        return Konstruktor(adlar, ataAdlari, emaillar, telefonlar, yaslar)
    }

    fun print() {
        adlar.indices.forEach { i ->
            println("Ad: ${adlar[i]}, Ata adı: ${ataAdlari[i]}, Telefon: ${telefonlar[i]}, Email: ${emaillar[i]}, Yaş: ${yaslar[i]}")
        }
    }
}


//------------------------------------------------------------
fun main() {
    val adlar = mutableListOf<String>()
    val ataAdlari = mutableListOf<String>()
    val emaillar = mutableListOf<String>()
    val yaslar = mutableListOf<Int>()
    val telefonlar = mutableListOf<Long>()

    var ad: String
    var ataAdi: String
    var email: String
    var telefon: Long
    var yas: Int

    var say: Int

    say = neceneferindaxiledilmesi()

    melumatlarindaxiledilmesi(adlar, ataAdlari, emaillar, telefonlar, yaslar, say)

    val konstruktor = Konstruktor(adlar, ataAdlari, emaillar, telefonlar, yaslar)
    konstruktor.print()

    val kopiya = konstruktor.kopyala()
    kopiya.print()
}

fun neceneferindaxiledilmesi(): Int {
    println("Neçə nəfər üçün məlumat daxil etmək istəyirsiniz: ")
    var say = 0
    while (true) {
        val input = readLine()?.toIntOrNull()
        if (input != null && input > 0) {
            say = input
            break
        } else {
            println("Yenidən düzgün bir ədəd daxil edin: ")
        }
    }
    return say
}

fun melumatlarindaxiledilmesi(
    adlar: MutableList<String>, ataAdlari: MutableList<String>, emaillar: MutableList<String>,
    telefonlar: MutableList<Long>, yaslar: MutableList<Int>, say: Int
) {
    for (i in 0 until say) {
        while (true) {
            println("Ad daxil edin: ")
            val ad = readLine() ?: ""
            if (ad.isNotEmpty() && ad[0].isLetter()) {
                adlar.add(ad)
                break
            } else {
                println("Məlumatı düzgün daxil edin: ")
            }
        }

        while (true) {
            println("Ata adını daxil edin: ")
            val ataAdi = readLine() ?: ""
            if (ataAdi.isNotEmpty() && ataAdi[0].isLetter()) {
                ataAdlari.add(ataAdi)
                break
            } else {
                println("Məlumatı düzgün daxil edin: ")
            }
        }

        while (true) {
            println("E-poçt ünvanını daxil edin: ")
            val email = readLine() ?: ""
            if (email.contains("@") && email.contains(".")) {
                emaillar.add(email)
                break
            } else {
                println("Yenidən düzgün bir e-poçt ünvanı daxil edin:")
            }
        }

        while (true) {
            println("Telefon nomresini daxil edin: ")
            val number = readLine() ?: ""
            if (number.length == 10 && number.toLongOrNull() != null) {
                telefonlar.add(number.toLong())
                break
            } else {
                println("Melumati duzgun daxil edin: ")
            }
        }

        while (true) {
            println("Yaşı daxil edin: ")
            val yasInput = readLine()?.toIntOrNull()
            if (yasInput != null && yasInput > 0) {
                yaslar.add(yasInput)
                break
            } else {
                println("Yaşı düzgün daxil edin:")
            }
        }
    }
}

data class Konstruktor(
    private val adlar: List<String>,
    private val ataAdlari: List<String>,
    private val emaillar: List<String>,
    private val telefonlar: List<Long>,
    private val yaslar: List<Int>
) {
    fun kopyala(): Konstruktor {
        return Konstruktor(adlar, ataAdlari, emaillar, telefonlar, yaslar)
    }

    fun print() {
        for (i in adlar.indices) {
            println("Ad: ${adlar[i]}, Ata adı: ${ataAdlari[i]}, Telefon: ${telefonlar[i]}, Email: ${emaillar[i]}, Yaş: ${yaslar[i]}")
        }
    }
}
