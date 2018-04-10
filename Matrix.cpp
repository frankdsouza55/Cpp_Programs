#include<iostream>
using namespace std;
int main()
{
    int a[20][20]={0},b[20][20]={0},n,k;
    cout<<"\nEnter number of nodes: ";
    cin>>n;
    cout<<"\nEnter k value (k > 0): ";
    cin>>k;
    cout<<"\nEnter the matrix A"<<k-1<<"\n(input 500 in the case of infinity)\n\n";
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];

    cout<<"\nA"<<k<<" is \n***************\n\n";
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            {
                if(i==j)
                    continue;
                cout<<"A"<<k<<"("<<i<<","<<j<<") = MIN [ A"<<k-1<<"("<<i<<","<<j<<") , A"<<k-1<<"("<<i<<","<<k<<") + A"<<k-1<<"("<<k<<","<<j<<")] = MIN [";
                cout<<a[i][j]<<", "<<a[i][k]<<" + "<<a[k][j]<<"] = \t"<<min(a[i][j],a[i][k]+a[k][j]);
                cout<<endl;
                b[i][j]=min(a[i][j],a[i][k]+a[k][j]);
            }
        cout<<endl;
    }
    cout<<"******************\n\n";
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cout<<b[i][j]<<"\t";
        cout<<endl;
    }
    return 0;
}
/* first input
5
1
0   3   8   500 -4
500 0   500 1   7
500 4   0   -5  500
500 500 500 0   500
500 500 500 6   0
*/
