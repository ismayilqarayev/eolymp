fun main() {
    val vec1 = mutableListOf<String>()
    val vec2 = mutableListOf<String>()

    fun1(vec1, vec2)
    fun2(vec1, vec2)
    fun3(vec1, vec2)
    fun4(vec1, vec2, vec1)
}

fun fun1(v1: MutableList<String>, v2: MutableList<String>) {
    // Vektor v1 üçün mətn daxil etmək
    print("Enter text v1: ")
    val addTextVector = readLine() ?: ""

    // Daxil edilən mətnin hər bir simvolu üçün v1 vektoruna mətn əlavə etmək
    for (char in addTextVector) {
        print("Enter text v1: ")
        val c = readLine() ?: ""
        v1.add(c)
    }
}

fun fun2(v1: MutableList<String>, v2: MutableList<String>) {
    // Vektor v2 üçün mətn daxil etmək
    print("Enter text v2: ")
    val addTextVector2 = readLine() ?: ""

    // Daxil edilən mətnin hər bir simvolu üçün v2 vektoruna mətn əlavə etmək
    for (char in addTextVector2) {
        print("Enter text v2: ")
        val c = readLine() ?: ""
        v2.add(c)
    }
}

fun fun3(v1: MutableList<String>, v2: MutableList<String>) {
    // Vektor v1-in başlanğıcından birinci elementin ardına boşluq əlavə etmək
    if (v1.size > 1) {
        v1.add(1, " ")
    }

    // Vektor v1-dəki bütün elementləri ekrana yazdırmaq
    for (ss in v1) {
        println(ss)
    }
}

fun fun4(v1: MutableList<String>, v2: MutableList<String>, v3: MutableList<String>) {
    if (v2.size > 2) {
        v2.add(1, " ")
    }

    for (ss in v3) {
        println(ss)
    }
}


