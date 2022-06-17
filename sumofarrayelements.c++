#include <bits/stdc++.h>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int sum(int arr[],int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return arr[0];
    }
    int rem=sum(arr+1,n-1);
   int summ=arr[0]+rem;
    return  summ ;
}
int main ()
{
    int n;
    cin>>n;
    int *arr= new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum1=sum(arr,n);
    cout<<sum1<<endl;
return 0;
}