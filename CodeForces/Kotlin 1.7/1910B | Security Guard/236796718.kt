import java.util.*
 
fun main() {
    val scanner = Scanner(System.`in`)
    val mod = 1000000007L
    val t = scanner.nextInt()
 
    repeat(t) {
        val ch = scanner.next()
        val n = ch.length
        val pref = IntArray(n)
        var mn = 0
        var inIdx = -1
        var ipIdx = -1
        var ln = -1
 
        for (i in 0 until n) {
            if (i > 0) {
                pref[i] = if (ch[i] == '+') 1 + pref[i - 1] else pref[i - 1] - 1
            } else {
                pref[i] = if (ch[i] == '+') 1 else -1
            }
 
            mn = minOf(pref[i], mn)
 
            if (pref[i] == -1) {
                ln = i
            }
 
            if (inIdx == -1 && pref[i] == -1) {
                inIdx = i
            }
 
            if (pref[i] >= 0 && ch[i] == '+') {
                ipIdx = i
            }
        }
 
        if (mn < -2 || inIdx > ipIdx || ln > ipIdx) {
            println(-1)
        } else {
            if (mn == 0) {
                println("1 1")
            } else {
                println("${inIdx + 1} ${ipIdx + 1}")
            }
        }
    }
}