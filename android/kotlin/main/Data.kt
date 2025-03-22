package Data

class Daxiledilenler{
    val ad: String
    val soyad: String
    val yas: Int
    val dogumtarixi: String
    val email: String
    val telefon: String

    constructor(ad: String, soyad: String, yas: Int = 0, dogumtarixi: String, email: String, telefon: String){
        this.ad = ad
        this.soyad = soyad
        this.yas = yas
        this.dogumtarixi = dogumtarixi
        this.email = email
        this.telefon = telefon
    }
}