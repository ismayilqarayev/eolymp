import java.sql.Array

fun main(){
    val say = Nece_Nefer()

    val ad = Array(say){""}
    val soyad = Array(say){""}
    val yas = IntArray(say)
    val cinsiyet = Array(say){""}
    val tel = IntArray(say)
    val sinif = Array(say){""}
    val email = Array(say){""}

    Melumatlari_Daxil_Etmek( ad, soyad, yas, cinsiyet, tel, sinif, email, say)

}

fun Nece_Nefer(): Int{
    println("Neçə nəfər üçün məlumat daxil etmək istəyirsiniz: ")
    while (true){
        val input = readLine().toIntOrNull()
        if (input != null && input > 0) {
            return input
        }else{
            println("Yalnız ədəd daxil edin!")
        }
    }
}

fun Melumatlari_Daxil_Etmek(
    ad: Array<String>,
    soyad: Array<String>,
    yas: IntArray,
    cinsiyet: Array<String>,
    tel: IntArray,
    sinif: Array<String>,
    email: Array<String>,
    say: Int
){
   for ( i in 0 until say){
       ad[i] = ad_parametri()
       soyad[i] = soyad_parametri()
       yas[i] = yas_parametri()
       cinsiyet[i] = cinsiyet_parametri()
       tel[i] = tel_parametri()
       sinif[i] = sinif_parametri()
       email[i] = email_parametri()
   }
}

fun ad_parametri(): String{
    println("Adınızı daxil edin: ")
    while (true){
        val ad = readln()
        if (ad.isNotBlank()) {
            return ad
        }else{
            println("Yalnız ad daxil edin!")
        }
    }
}

fun soyad_parametri(): String{
    println("Soyadınızı daxil edin: ")
    while (true){
        val soyad = readln()
        if ( soyad.isNotBlank()) {
            return soyad
        }else{
            println("Yalnız soyad daxil edin!")
        }
    }
}

fun yas_parametri(): Int{
    println("Yaşınızı daxil edin: ")
    while (true){
        val yas = readln().toIntOrNull()
        if(yas != null && yas > 0){
            return yas
        }else{
            println("Yalnız ədəd daxil edin!")
        }
    }
}

fun cinsiyet_parametri(): String{
    println("Cinsiyetinizi daxil edin: ")
    while (true){
        val cinsiyet = readln()
        if (cinsiyet == "K" || cinsiyet == "Q"){
            return cinsiyet
        }else{
            println("Yalnız K və ya Q daxil edin!")
        }
    }
}

























