fun main() {
    // Qlobal siyahılar
    val vec1 = mutableListOf<String>()
    val vec2 = mutableListOf<String>()

    // Fun1 funksiyasını çağırır və vec1, vec2 siyahılarını ötürür
    fun1(vec1, vec2)

    // Fun2 funksiyasını çağırır və vec1, vec2 siyahılarını ötürür
    fun2(vec1, vec2)

    // Fun3 funksiyasını çağırır və vec1, vec2 siyahılarını ötürür
    fun3(vec1, vec2)
}

fun fun1(v1: MutableList<String>, v2: MutableList<String>) {
    // Vektor v1 üçün mətn daxil etmək
    println("Enter text for v1: ")
    val addTextVector = readLine() ?: ""

    // Daxil edilən mətnin hər bir simvolu üçün v1 siyahısına mətn əlavə etmək
    for (i in addTextVector.indices) {
        println("Enter char for v1: ")
        val c = readLine() ?: ""
        v1.add(c)
    }
}

fun fun2(v1: MutableList<String>, v2: MutableList<String>) {
    // Vektor v2 üçün mətn daxil etmək
    println("Enter text for v2: ")
    val addTextVector = readLine() ?: ""

    // Daxil edilən mətnin hər bir simvolu üçün v2 siyahısına mətn əlavə etmək
    for (i in addTextVector.indices) {
        println("Enter char for v2: ")
        val c = readLine() ?: ""
        v2.add(c)
    }
}

fun fun3(v1: MutableList<String>, v2: MutableList<String>) {
    // v1 siyahısında uzunluğu 3 olan elementin olub-olmamasını yoxlayırıq
    val exists = v1.any { it.length == 3 }

    if (exists) {
        println("There is at least one element with length 3.")
    } else {
        println("There are no elements with length 3.")
    }

    // v1 siyahısını çap edirik
    println("Contents of v1:")
    for (item in v1) {
        println(item)
    }
}

//-----------------------------------------------------------

fun main() {
    val vec1 = mutableListOf<String>()
    val vec2 = mutableListOf<String>()

    fun1(vec1, vec2)
    fun2(vec1, vec2)
    fun3(vec1, vec2)
}

fun fun1(v1: MutableList<String>, v2: MutableList<String>) {
    println("Enter text for v1: ")
    val addTextVector = readln() // istifadəçinin daxil etdiyi mətn

    for (char in addTextVector) {
        v1.add(char.toString()) // hər simvolu ayrı string kimi əlavə edirik
    }
}

fun fun2(v1: MutableList<String>, v2: MutableList<String>) {
    println("Enter text for v2: ")
    val addTextVector = readln() // istifadəçinin daxil etdiyi mətn

    for (char in addTextVector) {
        v2.add(char.toString()) // hər simvolu ayrı string kimi əlavə edirik
    }
}

fun fun3(v1: MutableList<String>, v2: MutableList<String>) {
    val exists = v1.any { it.length == 1 } && v2.any { it.length == 1 }

    if (exists) {
        println("There is at least one character in both vectors")
    } else {
        println("There is no character in both vectors")
    }

    println("Contents of v1:")
    for (item in v1) {
        print(item)
    }
    println("\nContents of v2:")
    for (item in v2) {
        print(item)
    }
}

//-------------------------------------------------------------------------


import java.util.*

fun main(){
    val list1 = mutableListOf<Int>()
    val list2 = mutableListOf<Int>()

    //var sum1 = 0
    //var sum2 = 0

    melumatlarinlist1daxiledilmesi(list1)
    melumatlarinlist2daxiledilmesi(list2)

    println(" list 1: $list1")
    println(" list 2: $list2")
}

fun melumatlarinlist1daxiledilmesi(list1: MutableList<Int>) {
    println("list 1 ucun nece melumat daxil etmek isteyirsin: ")
    val melumatlarinsayi1 = readln().toInt() ?: 0

    for(i in 1..melumatlarinsayi1) {
        print("list 1 ucun reqem daxil edin: ")
        val melumat = readln().toInt() ?:0
        list1.add(melumat)
    }
}

fun melumatlarinlist2daxiledilmesi(list2: MutableList<Int>) {
    println("list 2 ucun nece melumat daxil etmek isteyirsin: ")
    val melumatlarinsayi2 = readln().toInt() ?: 0

    for(i in 1..melumatlarinsayi2){
        print("list 2 ucun reqem daxil edin: ")
        val melumat = readln().toInt() ?:0
        list2.add(melumat)
    }
}

fun melumatlarincixarilmasi(list1: MutableList<Int>, list2: MutableList<Int>) {

}


//----------------------------------------------------


fun main(){
    val sozler1 = mutableListOf<String>()
    val sozler2 = mutableListOf<String>()

    melumatlarinlist1daxiledilmesi(sozler1)
    melumatlarinlist2daxiledilmesi(sozler2)

    melumatlaringosterilmesi(sozler1, sozler2)
    val k = Konstruktor(sozler1, sozler2)
}


fun melumatlarinlist1daxiledilmesi(sozler1: MutableList<String>) {
    println("sozler 1 ucun melumatlari daxil edin")
    val melumat1 = readlnOrNull() ?: ""

    for (i in melumat1) {
        println("simvollari daxil edin")
        val simvol = readlnOrNull() ?: ""
        sozler1.add(simvol)
    }
}


fun melumatlarinlist2daxiledilmesi(list2: MutableList<String>) {
    println("sozler 2 ucun melumatlari daxil edin")
    val melumat2 = readlnOrNull() ?: ""

    for (i in melumat2) {
        println("simvollari daxil edin")
        val simvol = readlnOrNull() ?: ""
        list2.add(simvol)
    }
}


fun melumatlaringosterilmesi(sozler1: MutableList<String>, sozler2: MutableList<String>) {
    print("sozler1:")
    sozler1.forEach(::print)

    println("sozler2:")
    sozler2.forEach(::print)
}


class Konstruktor{
    private var name: String? = null
    private var lastname: String? = null

    constructor(name: String, lastname: String){
        this.name = name
        this.lastname = lastname
    }

    constructor(sozler1: MutableList<String>, sozler2: MutableList<String>){
        if (sozler1.isEmpty() || sozler2.isEmpty()){
            println("melumatlar daxil edilmeyib")
        }else{
            println("melumatlar daxil edildi")
        }
    }
}

//-----------------------------------------------------------------------
//-----------------------------------------------------------------------

fun main(){
    val text1 = mutableListOf<String>()
    val text2 = mutableListOf<String>()

    melumatlarindaxiledilmesi1(text1)
    melumatlarindaxiledilmesi2(text2)

    val k = Konstruktor(text1.toString(), text2.toString())
    val ex = export(text1.toString(), text2.toString())

    ex.melumatlaringosterilmesi(text1, text2)
}


fun melumatlarindaxiledilmesi1(text1: MutableList<String>){
    println("text1 ucun metni daxil edin")
    val tx1 = readlnOrNull() ?: ""

    for (i in tx1){
        println("simvollari daxil edin")
        val simvol = readlnOrNull() ?: ""
        text1.add(simvol)
    }
}


fun melumatlarindaxiledilmesi2(text2: MutableList<String>){
    print("text2 ucun metni daxil edin")
    val tx2 = readlnOrNull() ?: ""

    for (i in tx2){
        println("simvolu daxil edin")
        val simvol = readlnOrNull() ?: ""
        text2.add(simvol)
    }
}


class export(toString: String, toString1: String) {
    fun melumatlaringosterilmesi(text1: MutableList<String>, text2: MutableList<String>){
        println("Text1: ${text1.joinToString(", ")}") // Text1 məzmunu
        println("Text2: ${text2.joinToString(", ")}") // Text2 məzmunu
    }
}


class Konstruktor{

    private var name: String? = null
    private var lastname: String? = null

    constructor(name: String, lastname: String){
        this.name = name
        this.lastname = lastname
    }


    constructor(text1: MutableList<String>, text2: MutableList<String>){
        if (text1.isEmpty() || text2.isEmpty()){
            println("melumatlar daxil edilmeyib")
        }else{
            println("melumatlar daxil edildi")
        }
    }
}



//-----------------------------------------------------


fun main(){
    val text1 = mutableListOf<String>()
    val text2 = mutableListOf<String>()

    melumatlarindaxiledilmesi1(text1)
    melumatlarindaxiledilmesi2(text2)

    val k = Konstruktor(text1.toString(), text2.toString())
    val ex = export(text1.toString(), text2.toString())
    val obyekt = export2(text1.toString(), text2.toString())

    ex.melumatlaringosterilmesi(text1, text2)
    obyekt.dexport2(text1, text2)
}


fun melumatlarindaxiledilmesi1(text1: MutableList<String>){
    println("text1 ucun metni daxil edin")
    val tx1 = readlnOrNull() ?: ""

    for (i in tx1){
        println("simvollari daxil edin")
        val simvol = readlnOrNull() ?: ""
        text1.add(simvol)
    }
}


fun melumatlarindaxiledilmesi2(text2: MutableList<String>){
    print("text2 ucun metni daxil edin")
    val tx2 = readlnOrNull() ?: ""

    for (i in tx2){
        println("simvolu daxil edin")
        val simvol = readlnOrNull() ?: ""
        text2.add(simvol)
    }
}


class export(toString: String, toString1: String) {
    fun melumatlaringosterilmesi(text1: MutableList<String>, text2: MutableList<String>){
        println("Text1: ${text1.joinToString(", ")}") // Text1 məzmunu
        println("Text2: ${text2.joinToString(", ")}") // Text2 məzmunu
    }
}


class export2(toString: String, toString1: String){
    fun dexport2(text1: MutableList<String>, text2: MutableList<String>){

    }
}


class Konstruktor{

    private var name: String? = null
    private var lastname: String? = null

    constructor(name: String, lastname: String){
        this.name = name
        this.lastname = lastname
    }


    constructor(text1: MutableList<String>, text2: MutableList<String>){
        if (text1.isEmpty() || text2.isEmpty()){
            println("melumatlar daxil edilmeyib")
        }else{
            println("melumatlar daxil edildi")
        }
    }
}





#include <iostream>
#include <queue>
 
int main() {
    std::queue<std::string> queue1 {std::deque<std::string>{"Alice", "Kate"}};
 
    std::queue<std::string> queue2;
    queue2.push("Tom");
    queue2.push("Bob");
 
    queue1.swap(queue2);
    // queue1 = {"Tom", "Bob"}
    // queue2 = {"Alice", "Kate"}
}




