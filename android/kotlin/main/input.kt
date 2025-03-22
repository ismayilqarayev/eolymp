package input

fun daxiledilensay(): Int{
    println("sayi daxil edin")
    while (true){
        val umumisay = readln().toIntOrNull()
        if (umumisay != null && umumisay > 0){
            return umumisay
        }else{
            println("duzgun daxil edin")
        }
    }
}

fun adParametri(): String{
    while (true){
        val inputad = readln()
        if (inputad.isNotEmpty()){

        }
    }
}

fun soyadParametri(): String{

}

fun yasParametri(): Int{

}

fun dogumtarixiParametri(): String{

}

fun emailParametri(): String{

}

fun telefonParametri(): String{

}