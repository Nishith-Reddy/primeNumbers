fun isPrime(number: Int): Boolean {
    if (number <= 1) {
        return false
    }
 
    var i = 2
    while ( i <= number/i ) {
        if (number % i == 0) {
            return false
        }
        i++
    }
 
    return true
}
 
fun main() {
    print("Enter an integer : ")
    val num = readLine()!!.toInt()
    if ( isPrime(num) ) {
        println("$num is a prime number")
    } else {
        println("$num is not a prime number")
    }
}
