fun main(){
    val list1 = mutableListOf<String>()
    val list2 = mutableListOf<String>()

    l1MetininDaxilEdilmesi(list1, "Salam", "Dünya")
    l2MetininDaxilEdilmesi(list2, "Kotlin", "Vararg", "Misal")

    cap_etme(list1, list2)
}

fun l1MetininDaxilEdilmesi(l1: MutableList<String>, vararg sozler: String){
    for (soz in sozler) {
        l1.add(soz)
    }
}

fun l2MetininDaxilEdilmesi(l2: MutableList<String>, vararg sozler: String){
    for (soz in sozler) {
        l2.add(soz)
    }
}

fun cap_etme(l1: MutableList<String>, l2: MutableList<String>){
    println("List1:")
    for (i in l1){
        println(i)
    }

    println("List2:")
    for (i in l2){
        println(i)
    }
}


//----------------------------------------------------------------------------
fun main(){
    val list1 = mutableListOf<String>()
    val list2 = mutableListOf<String>()

    l1MetininDaxilEdilmesi(list1)
    l2MetininDaxilEdilmesi(list2)

    cap_etme( list1, list2)
}


fun l1MetininDaxilEdilmesi(l1: MutableList<String>){
    print("metininizi list1 daxil edin: ")
    val metininList1DaxilEdilmesi = readln() ?: ""

    for (i in metininList1DaxilEdilmesi){
        println("heriflerin list1 elave olunmasi: ")
        val heriflerinList1ElaveOlunmasi = readln() ?: ""
        l1.add(heriflerinList1ElaveOlunmasi)
    }
}


fun l2MetininDaxilEdilmesi(l2: MutableList<String>){
    println("metininizi list2 daxil edin: ")
    val metininList2DaxilEdilmesi = readln() ?: ""

    for (i in metininList2DaxilEdilmesi){
        println("heriflerin list2 elave olunmasi: ")
        val heriflerinList2ElaveOlunmasi = readln() ?: ""
        l2.add(heriflerinList2ElaveOlunmasi)
    }
}

fun cap_etme(l1: MutableList<String>, l2: MutableList<String>){
    for (i in l1){
        println(i)
    }
}


//----------------------------------------------------------------------------------------
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


