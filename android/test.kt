fun main() {
    val say = daxiledilensay()
    val melumat = daxiledilenmelumat(say)

    for (info in melumat) {
        println("Ad: ${info.ad}, Soyad: ${info.soyad}, Yas: ${info.yas}")
    }
}

fun daxiledilensay(): Int {
    println("Sayı daxil edin:")
    while (true) {
        val umumisay = readln().toIntOrNull()
        if (umumisay != null && umumisay > 0) {
            return umumisay
        } else {
            println("Məlumatı düzgün daxil edin")
        }
    }
}

fun daxiledilenmelumat(say: Int): List<Person> {
    val data = mutableListOf<Person>()

    for (i in 0..<say) {
        val person = Person(
            ad = adparametri(),
            soyad = soyadparametri(),
            yas = yasparametri()
        )
        data.add(person)
    }
    return data
}

fun adparametri(): String {
    println("Ad daxil edin:")
    while (true) {
        val input = readln()
        if (input.isNotBlank()){
            return input
        }
        println("Məlumatı düzgün daxil edin")
    }
}

fun soyadparametri(): String {
    println("Soyad daxil edin:")
    while (true) {
        val input = readln()
        if (input.isNotBlank()){
            return input
        }
        println("Məlumatı düzgün daxil edin")
    }
}

fun yasparametri(): Int {
    println("Yaş daxil edin:")
    while (true) {
        val input = readln().toIntOrNull()
        if (input != null && input > 0) {
            return input
        }
        println("Məlumatı düzgün daxil edin")
    }
}

class Person{
    val ad: String
    val soyad: String
    val yas: Int

    constructor(ad: String, soyad: String, yas: Int = 0){
        this.ad = ad
        this.soyad = soyad
        this.yas = yas
    }
}

//-----------------------------------------
//03.16.2025
package com.example.myapplication

fun main() {
    val say = daxilEdilenSay() // İstifadəçidən neçə nəfər üçün məlumat daxil ediləcəyini soruşuruq
    val melumat = daxilEdilenMelumat(say) // Məlumatları daxil edirik

    println("\nDaxil edilən məlumatlar:")
    melumat.forEach { println(it) } // Daxil edilən məlumatları ekrana çap edirik
}

// Neçə nəfər üçün məlumat daxil ediləcəyini təyin edən funksiya
fun daxilEdilenSay(): Int {
    println("Neçə nəfər üçün məlumat daxil etmək istəyirsiniz:")
    while (true) {
        val umumiSay = readln().toIntOrNull() // İstifadəçinin daxil etdiyi məlumatı tam ədədə çeviririk
        if (umumiSay != null && umumiSay > 0) {
            return umumiSay // Düzgün dəyər daxil edilibsə, həmin dəyəri qaytarırıq
        } else {
            println("Məlumat yanlışdır. Yenidən daxil edin") // Xəta mesajı veririk və yenidən soruşuruq
        }
    }
}

// İstifadəçilərin məlumatlarını daxil edən funksiya
fun daxilEdilenMelumat(say: Int): List<User> {
    val data = mutableListOf<User>() // İstifadəçi obyektlərini saxlamaq üçün siyahı yaradırıq

    for (i in 0 until say) {
        val insan = User(
            ad = adParametri(), // İstifadəçidən ad daxil etməsini istəyirik
            soyad = soyadParametri() // İstifadəçidən soyad daxil etməsini istəyirik
        )
        data.add(insan) // Yaradılan istifadəçi obyektini siyahıya əlavə edirik
    }
    return data // Yekun siyahını qaytarırıq
}

// İstifadəçinin adını daxil etməsini istəyən funksiya
fun adParametri(): String {
    println("Adınızı daxil edin:")
    return readln().takeIf { it.isNotBlank() } ?: run {
        println("Məlumatı düzgün daxil edin!") // Boş daxil edilərsə, yenidən soruşuruq
        adParametri()
    }
}

// İstifadəçinin soyadını daxil etməsini istəyən funksiya
fun soyadParametri(): String {
    println("Soyadınızı daxil edin:")
    return readln().takeIf { it.isNotBlank() } ?: run {
        println("Məlumatı düzgün daxil edin!") // Boş daxil edilərsə, yenidən soruşuruq
        soyadParametri()
    }
}

// İstifadəçi məlumatlarını saxlayan data class
data class User(val ad: String, val soyad: String) {
    // Əgər istifadəçi ad və soyad daxil etməsə, "İsimsiz Soyisimsiz" kimi yaradılır
    constructor() : this("İsimsiz", "Soyisimsiz") {
        println("Adsız istifadəçi yaradıldı") // Konsola mesaj çıxarırıq
    }

    override fun toString(): String {
        return "$ad $soyad" // İstifadəçi obyektini mətn formatında qaytarırıq
    }
}




//-----------------------------------------------------
fun main() {
    val say = neceNefer()
    val melumatlar = melumatlariDaxilEtmek(say)

    println("\nDaxil edilən məlumatlar:")
    melumatlar.forEach { println(it) }
}

fun neceNefer(): Int {
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

fun melumatlariDaxilEtmek(say: Int): List<Person> {
    val melumatlar = mutableListOf<Person>()

    for (i in 0 until say) {
        val insan = Person(
            ad = adParametri(),
            yas = yasParametri(),
            email = emailParametri(),
            sifre = sifreParametri(),
            telefon = telefonParametri(),
            adres = adresParametri(),
            cinsiyet = cinsiyetParametri()
        )
        melumatlar.add(insan)
    }
    return melumatlar
}

fun adParametri(): String {
    println("Adınızı daxil edin: ")
    return readln().takeIf { it.isNotBlank() } ?: run {
        println("Məlumatı düzgün daxil edin!")
        adParametri() // Yenidən soruşur
    }
}

fun yasParametri(): Int {
    println("Yaşınızı daxil edin: ")
    return readln().toIntOrNull()?.takeIf { it > 0 } ?: run {
        println("Məlumatı düzgün daxil edin!")
        yasParametri() // Yenidən soruşur
    }
}

fun emailParametri(): String {
    println("Emailinizi daxil edin: ")
    return readln().takeIf { it.contains("@") } ?: run {
        println("Məlumatı düzgün daxil edin!")
        emailParametri() // Yenidən soruşur
    }
}

fun sifreParametri(): String {
    println("Şifrənizi daxil edin: ")
    return readln().takeIf { it.isNotBlank() } ?: run {
        println("Məlumatı düzgün daxil edin!")
        sifreParametri() // Yenidən soruşur
    }
}

fun telefonParametri(): String {
    println("Telefon nömrənizi daxil edin: ")
    return readln().takeIf { it.length == 9 } ?: run {
        println("Məlumatı düzgün daxil edin!")
        telefonParametri() // Yenidən soruşur
    }
}

fun adresParametri(): String {
    println("Adresinizi daxil edin: ")
    return readln().takeIf { it.isNotBlank() } ?: run {
        println("Məlumatı düzgün daxil edin!")
        adresParametri() // Yenidən soruşur
    }
}

fun cinsiyetParametri(): String {
    println("Cinsiyyətinizi daxil edin (K/Q): ")
    return readln().uppercase().takeIf { it == "K" || it == "Q" } ?: run {
        println("Yalnız 'K' (kişi) və ya 'Q' (qadın) daxil edin.")
        cinsiyetParametri() // Yenidən soruşur
    }
}

data class Person(
    val ad: String,
    val yas: Int,
    val email: String,
    val sifre: String,
    val telefon: String,
    val adres: String,
    val cinsiyet: String
) {
    override fun toString(): String {
        return """
            Ad: $ad, 
            Yaş: $yas, 
            Email: $email, 
            Şifrə: $sifre, 
            Telefon: $telefon, 
            Ünvan: $adres, 
            Cinsiyyət: $cinsiyet
        """.trimIndent()
    }
}


//-----------------------------------------------------
=======
    // Daxil edilən məlumatları ekrana çıxarırıq
    println("\nDaxil edilən məlumatlar:")
    melumatlar.forEach(::println)  // hər bir məlumatı çap edirik
}

// İstifadəçidən neçə nəfər üçün məlumat daxil ediləcəyini soruşuruq
fun Nece_Nefer(): Int {
    return readInput("Neçə nəfər üçün məlumat daxil etmək istəyirsiniz: ") {
        it.toIntOrNull()?.takeIf { it > 0 } != null  // müsbət bir ədəd olmalıdır
    }.toInt()  // alınan məlumatı integer tipinə çeviririk
}

// İstifadəçidən məlumatları daxil etməyi tələb edirik
fun Melumatlari_Daxil_Etmek(say: Int): List<Konstruktor> {
    // say qədər məlumat daxil ediləcək
    return List(say) {
        Konstruktor(
            ad = readInput("Adınızı daxil edin: ") { it.isNotBlank() }, // Adın boş olmaması lazımdır
            soyad = readInput("Soyadınızı daxil edin: ") { it.isNotBlank() }, // Soyadın boş olmaması lazımdır
            yas = readInput("Yaşınızı daxil edin: ") { it.toIntOrNull()?.takeIf { it > 0 } != null }.toInt(), // Yaşın müsbət olması lazımdır
            cinsiyet = readInput("Cinsiyyətinizi daxil edin (K/Q): ") { it == "K" || it == "Q" }, // Cinsiyyətin yalnız "K" və ya "Q" olmalıdır
            tel = readInput("Telefon nömrənizi daxil edin: ") { it.matches("\\d{7,}".toRegex()) }.toInt(), // Telefon nömrəsi ən azı 7 rəqəm olmalıdır
            sinif = readInput("Sinifinizi daxil edin: ") { it.isNotBlank() }, // Sinif boş olmamalıdır
            email = readInput("E-mailinizi daxil edin: ") { it.matches("[a-zA-Z0-9._-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}".toRegex()) } // E-mailin düzgün formatda olması lazımdır
        )
    }
}

// İstifadəçidən məlumatı alırıq və doğruluğunu yoxlayırıq
fun readInput(prompt: String, validation: (String) -> Boolean): String {
    println(prompt)  // İstifadəçiyə sorğu veririk
    return generateSequence { readln() }  // İstifadəçidən məlumat alırıq
        .first { validation(it).also { if (!it) println("Düzgün məlumat daxil edin: ") } }  // Əgər məlumat düzgün deyilsə, təkrar soruşuruq
}

// Konstruktor sinfi (data class) ilə daxil edilən məlumatları saxlayırıq
data class Konstruktor(
    val ad: String,
    val soyad: String,
    val yas: Int,
    val cinsiyet: String,
    val tel: Int,
    val sinif: String,
    val email: String
) {
    // Yaşın böyüklüyünü yoxlamaq
    fun isAdult(): Boolean = yas >= 18  // Əgər yaş 18-dən böyük və ya bərabərdirsə, böyüklük təsdiq edilir

    // Telefon nömrəsinin düzgünlüyünü yoxlamaq
    fun isPhoneNumberValid(): Boolean = tel.toString().matches("\\d{7,}".toRegex()) // Telefon nömrəsi ən azı 7 rəqəm olmalıdır
}



//-----------------------------------------------------------------------------
>>>>>>> Stashed changes
fun main() {
    val say = Nece_Nefer()
    val melumatlar = Melumatlari_Daxil_Etmek(say)

    println("\nDaxil edilən məlumatlar:")
    melumatlar.forEach { println(it) }
}

fun Nece_Nefer(): Int {
    println("
    ")
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
