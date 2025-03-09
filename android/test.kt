
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

//-------------------------------------------------------------
//03.09.2025


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
            println("Məlumatı düzgün daxil edin!")
        }
    }
}

fun Melumatlari_Daxil_Etmek(say: Int): List<Person> {
    val melumatlar = mutableListOf<Person>()

    for (i in 0 until say) {
        val insan = Person(
            adres_parametri = ::adres_parametri,
            telefon_parametri = ::telefon_parametri,
            sifre_parametri = ::sifre_parametri,
            email_parametri = ::email_parametri,
            yas_parametri = ::yas_parametri,
            ad_parametri = ::ad_parametri,
            cinsiyet_parametri = ::cinsiyet_parametri
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
            println("Məlumatı düzgün daxil edin!")
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
            println("Məlumatı düzgün daxil edin!")
        }
    }
}

fun email_parametri(): String {
    println("Emailinizi daxil edin: ")
    while (true) {
        val email = readln()
        if (email.isNotBlank() && email.contains("@")) {
            return email
        } else {
            println("Məlumatı düzgün daxil edin!")
        }
    }
}

fun sifre_parametri(): String {
    println("Şifrənizi daxil edin: ")
    while (true) {
        val sifre = readln()
        if (sifre.isNotBlank()) {
            return sifre
        } else {
            println("Məlumatı düzgün daxil edin!")
        }
    }
}

fun telefon_parametri(): String {
    println("Telefon nömrənizi daxil edin: ")
    while (true) {
        val telefon = readln()
        if (telefon.isNotBlank() && telefon.length == 9) {
            return telefon
        } else {
            println("Məlumatı düzgün daxil edin!")
        }
    }
}

fun adres_parametri(): String {
    println("Adresinizi daxil edin: ")
    while (true) {
        val adres = readln()
        if (adres.isNotBlank()) {
            return adres
        } else {
            println("Məlumatı düzgün daxil edin!")
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

// Düzgün sinif strukturu
class Person(
    adres_parametri: () -> String,
    telefon_parametri: () -> String,
    sifre_parametri: () -> String,
    email_parametri: () -> String,
    yas_parametri: () -> Int,
    ad_parametri: () -> String,
    cinsiyet_parametri: () -> String
) {
    val name: String = ad_parametri()
    val age: Int = yas_parametri()
    val email: String = email_parametri()
    val password: String = sifre_parametri()
    val phoneNumber: String = telefon_parametri()
    val address: String = adres_parametri()
    val gender: String = cinsiyet_parametri()

    override fun toString(): String {
        return "Ad: $name, Yaş: $age, Email: $email, Şifrə: $password, Telefon: $phoneNumber, Ünvan: $address, Cinsiyyət: $gender"
    }
}
