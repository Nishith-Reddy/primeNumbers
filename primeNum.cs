using System;

class PrimeNumber{
    // function check whether a
    // number is prime or not
    static bool isPrime(int n)
    {
        // Corner case
        if (n <= 1)
            return false;
 
        // Check from 2 to n-1
        for (int i = 2; i < n; i++)
            if (n % i == 0)
                return false;
 
        return true;
    }
 
    // Driver Code
    static void Main()
    {
        if (isPrime(11))
            Console.Write("given number is a prime number");
 
        else
            Console.Write("given number is not a prime number");
    }
}