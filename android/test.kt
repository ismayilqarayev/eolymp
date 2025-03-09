
fun main() {
    val say = Nece_Nefer()
    val melumatlar = Melumatlari_Daxil_Etmek(say)

    println("\nDaxil edilən məlumatlar:")
    melumatlar.forEach { println(it) }
}

fun Nece_Nefer(): Int {
    println("Neçə nəfər üçün məlumat daxil etmək istəyirsiniz: ")
    while (true) {
        val input = readln().toIntOrNull()
        if (input != null && input > 0) {
            return input
        } else {
            println("Yalnız müsbət ədəd daxil edin: ")
        }
    }
}

fun Melumatlari_Daxil_Etmek(say: Int): List<Konstruktor> {
    val melumatlar = mutableListOf<Konstruktor>()

    for (i in 0 until say) {
        val insan = Konstruktor(
            ad = ad_parametri(),
            soyad = soyad_parametri(),
            yas = yas_parametri(),
            cinsiyet = cinsiyet_parametri(),
            tel = tel_parametri(),
            sinif = sinif_parametri(),
            email = email_parametri()
        )
        melumatlar.add(insan)
    }
    
    return melumatlar
}

fun ad_parametri(): String {
    println("Adınızı daxil edin: ")
    while (true) {
        val ad = readln()
        if (ad.isNotBlank()) {
            return ad
        } else {
            println("Məlumatı düzgün daxil edin: ")
        }
    }
}

fun soyad_parametri(): String {
    println("Soyadınızı daxil edin: ")
    while (true) {
        val soyad = readln()
        if (soyad.isNotBlank()) {
            return soyad
        } else {
            println("Məlumatı düzgün daxil edin: ")
        }
    }
}

fun yas_parametri(): Int {
    println("Yaşınızı daxil edin: ")
    while (true) {
        val yas = readln().toIntOrNull()
        if (yas != null && yas > 0) {
            return yas
        } else {
            println("Məlumatı düzgün daxil edin: ")
        }
    }
}

fun cinsiyet_parametri(): String {
    println("Cinsiyyətinizi daxil edin (K/Q): ")
    while (true) {
        val cinsiyet = readln().uppercase()
        if (cinsiyet == "K" || cinsiyet == "Q") {
            return cinsiyet
        } else {
            println("Yalnız 'K' (kişi) və ya 'Q' (qadın) daxil edin.")
        }
    }
}

fun tel_parametri(): Int {
    println("Telefon nömrənizi daxil edin: ")
    while (true) {
        val tel = readln().toIntOrNull()
        if (tel != null && tel.toString().length >= 7) {
            return tel
        } else {
            println("Düzgün telefon nömrəsi daxil edin.")
        }
    }
}

fun sinif_parametri(): String {
    println("Sinifinizi daxil edin: ")
    while (true) {
        val sinif = readln()
        if (sinif.isNotBlank()) {
            return sinif
        } else {
            println("Məlumatı düzgün daxil edin: ")
        }
    }
}

fun email_parametri(): String {
    println("E-mailinizi daxil edin: ")
    while (true) {
        val email = readln()
        if (email.contains("@") && email.contains(".")) {
            return email
        } else {
            println("Düzgün e-mail ünvanı daxil edin.")
        }
    }
}

data class Konstruktor(
    val ad: String,
    val soyad: String,
    val yas: Int,
    val cinsiyet: String,
    val tel: Int,
    val sinif: String,
    val email: String
)