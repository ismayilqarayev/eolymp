fun main() {
    val text1 = mutableListOf<String>()
    val text2 = mutableListOf<String>()

    melumatlrindaxiledilmesi1(text1)
    melumatlrindaxiledilmesi2(text2)

    val k = Export(text1.toString(), text2.toString())
    k.melumatlaringosterilmesi(text1, text2)

    // Konsturktor obyektinin yaradılması
    val obyekt = Konsturktor(text1, text2)
    println("Konsturktor ilə yaradılan obyekt: text1 -> ${obyekt.text1}, text2 -> ${obyekt.text2}")
}

fun melumatlrindaxiledilmesi1(text1: MutableList<String>) {
    print("text1 üçün mətni daxil edin: ")
    val tx1 = readlnOrNull() ?: ""

    for (i in tx1) {
        print("Simvol daxil edin: ")
        val simvol1 = readlnOrNull() ?: ""
        text1.add(simvol1)
    }
}

fun melumatlrindaxiledilmesi2(text2: MutableList<String>) {
    print("text2 üçün mətni daxil edin: ")
    val tx2 = readlnOrNull() ?: ""

    for (i in tx2) {
        print("Simvol daxil edin: ")
        val simvol2 = readlnOrNull() ?: ""
        text2.add(simvol2)
    }
}

class Export(toString: String, toString1: String) {
    fun melumatlaringosterilmesi(text1: MutableList<String>, text2: MutableList<String>) {
        println("text1: ${text1.joinToString(", ")}")
        println("text2: ${text2.joinToString(", ")}")
    }
}

class Konsturktor {
    var text1: MutableList<String> = mutableListOf()
    var text2: MutableList<String> = mutableListOf()

    // Birinci konstruktor
    constructor(_text1: MutableList<String>, _text2: MutableList<String>) {
        this.text1 = _text1
        this.text2 = _text2
    }

    // İkinci konstruktor
    constructor(_txt1: String, _txt2: String) {
        this.text1 = _txt1.map { it.toString() }.toMutableList() // String-i MutableList-ə çevirmək
        this.text2 = _txt2.map { it.toString() }.toMutableList()
    }
}
