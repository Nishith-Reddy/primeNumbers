#include<bits/stdc++.h>
using namespace std;
 
bool primes[1000000];
const int maxn = 1000000;
 
// Sieve of Eratosthenes
void sieve()
{
    memset(primes,true,sizeof(primes));
    primes[0] = primes[1] = 0;
     
    for(int i = 2; i * i <= maxn; i++)
    {
        if(primes[i])
        {
            for(int j = i * i ;
                   j <= maxn ; j += i)
            primes[j] = false;
        }
    }
}
 
// Function Convert integer
// to binary string
string toBinary(int n)
{
    string r = "";
    while(n != 0)
    {
        r = (n % 2 == 0 ?"0":"1") + r;
        n /= 2;
    }
    return (r == "")?"0":r;
}
 
// Function print all the all the
// ways to split the given string
// into Primes.
void PrimeSplit(string str)
{
    string temp;
    int cnt=0;
     
    // To store all possible strings
    vector<string> ans;
    int bt = 1<<(str.size()-1);
    int n = str.size();
 
 
    // Exponetnital complexity n*(2^(n-1))
    // for bit
    for(int i = 0 ; i < bt ; i++)
    {
        temp = toBinary(i) + "0";
        int j = 0, x = n - temp.size(), y;
        while(j < x)
        {
            temp = "0" + temp;
            j++;
        }
        j = 0;
        x = 0;
        y = -1;
         
        string sp = "", tp = "";
        bool flag = 0;
         
        while(j < n)
        {
            sp += str[j];
            if(temp[j] == '1')
            {
                tp += sp + ',';
                y = stoi(sp);
                 
                // Pruning step
                if(!primes[y])
                {
                    flag = 1;
                    break;
                }
                sp = "";
            }
            j++;
        }
        tp += sp;
        if(sp != "")
        {
            y = stoi(sp);
            if(!primes[y])
            flag = 1;
        }
        if(!flag)
        ans.push_back(tp);
    }
    if(ans.size() == 0)
    {
        cout << -1 << endl;
    }
    for(auto i:ans)
    {
        cout << i << endl;
    }
}
 
// Driver code
int main()
{
    string str = "11373";
    sieve();
     
    PrimeSplit(str);
     
    return 0;
}