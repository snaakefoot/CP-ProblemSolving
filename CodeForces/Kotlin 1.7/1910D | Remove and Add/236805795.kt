import java.util.*
 
fun main() {
    val scanner = Scanner(System.`in`)
    val mod = 1000000007L
    val t = scanner.nextInt()
 
    repeat(t) {
        var add1 = 0
        val n = scanner.nextInt()
        val v1 = mutableListOf<Int>()
        val v2 = mutableListOf<Int>()
 
        repeat(n) {
            val x = scanner.nextInt()
            v1.add(x)
            v2.add(x)
        }
 
        var test = true
 
        for (i in 1 until n) {
            if (v1[i] < v1[i - 1] + add1) {
                v1.removeAt(i)
                v2.removeAt(i - 1)
                test = false
                break
            } else if (v1[i] == v1[i - 1] + add1) {
                add1 = 1
            } else {
                add1 = 0
            }
        }
 
        if (test) {
            println("YES")
        } else {
            test = true
            add1 = 0
 
            for (i in 1 until n - 1) {
                if (v1[i] < v1[i - 1] + add1) {
                    test = false
                    break
                } else if (v1[i] == v1[i - 1] + add1) {
                    add1 = 1
                } else {
                    add1 = 0
                }
            }
 
            if (test) {
                println("YES")
            } else {
                test = true
                add1 = 0
 
                for (i in 1 until n - 1) {
                    if (v2[i] < v2[i - 1] + add1) {
                        test = false
                        break
                    } else if (v2[i] == v2[i - 1] + add1) {
                        add1 = 1
                    } else {
                        add1 = 0
                    }
                }
 
                if (test) {
                    println("YES")
                } else {
                    println("NO")
                }
            }
        }
    }
}