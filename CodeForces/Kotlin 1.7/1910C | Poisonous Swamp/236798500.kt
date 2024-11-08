import java.util.*
 
fun main() {
    val scanner = Scanner(System.`in`)
    val mod = 1000000007L
    val t = scanner.nextInt()
 
    repeat(t) {
        val n = scanner.nextInt()
        val grid = Array(2) { "" }
 
        grid[0] = scanner.next()
        grid[1] = scanner.next()
 
        var i = 0
        var p: Int
        var cnt: Int
        var ans = 0
 
        while (i < n) {
            p = if (grid[0][i] == '*') 0 else 1
            cnt = 0
 
            while (i < n && grid[p][i] == '*') {
                i++
                cnt++
            }
 
            ans += cnt - 1
        }
 
        println(ans)
    }
}