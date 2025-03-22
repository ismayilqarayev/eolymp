package main

import input.*
import Data.Daxiledilenler

fun main() {
    val say = daxiledilensay()
    val melumat = daxiledilenmelumat(say)

}

fun daxiledilenmelumat(say: Int): List<Daxiledilenler> {
    val melumat = mutableListOf<Daxiledilenler>()
    for (i in 0..<say){
        val person = Daxiledilenler(
            ad = adParametri(),
            soyad = soyadParametri(),
            yas = yasParametri(),
            dogumtarixi = dogumtarixiParametri(),
            email = emailParametri(),
            telefon = telefonParametri()
        )
        melumat.add(person)
    }
    return melumat
}