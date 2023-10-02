#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i= 0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum = 0;
    int maxi = arr[0];

    for(int i=0;i<n;i++)
    {
        sum = sum +arr[i];
        maxi = max(maxi,sum);

        if(sum<0)
        sum =0;

    }

    cout<<maxi;

}