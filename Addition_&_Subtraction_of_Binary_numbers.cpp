//Addition & subtraction of 2 binary numbers
#include<iostream>
using namespace std;
void reverse_array(int a[20],int n)
{
    int t,i,j;
    for(i=0,j=n-1;i<n/2;i++,j--)
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
}
int main()
{
    int sum[20],a[20]={0},b[20]={0},diff[20],c=0,br=0,i,n,sb=0,db=0;
    cout<<"\nEnter the total no of bits : ";
    cin>>n;
    cout<<"\nEnter the bits of the 1st binary number : ";
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"\nEnter the bits of the 2nd binary number : ";
    for(i=0;i<n;i++)
        cin>>b[i];
    reverse_array(a,n);
    reverse_array(b,n);
    for(i=0;i<=n;i++)
    {
        sum[i]=a[i]^b[i]^c;
        c=(a[i]&b[i])|(a[i]^b[i])&c;
        sb++;
        diff[i]=a[i]^b[i]^br;
        br=(~a[i]&b[i])|(~(a[i]^b[i]))&br;      //for performing a-b
//        br=(a[i]&~b[i])|(~(a[i]^b[i]))&br;      //for performing b-a
        db++;
    }
    reverse_array(sum,sb);
    reverse_array(diff,db);
    cout<<"\nSum = ";
    for(i=0;i<sb;i++)
        cout<<sum[i];
    cout<<"\nDifference = ";
    for(i=0;i<db;i++)
        cout<<diff[i];
    return 0;
}
