import java.io.*;
import java.lang.*;
import java.util.Scanner;

class prime
{
public static void main (String[] args){
        
        Scanner sc= new Scanner(System.in);  
        int num = sc.nextInt(); 
    
        if(num > 1)
        {
        //check for factors
        for(int i = 2;i<num; i++)
        {
        if((num % i) == 0)
        {
           System.out.println("is not a prime number");
           break;
        }
        else
        {
            System.out.println("is a prime number");
            break;
        }
        }
        }
        else
        {
            System.out.println("is not a prime number");
        }
}
}