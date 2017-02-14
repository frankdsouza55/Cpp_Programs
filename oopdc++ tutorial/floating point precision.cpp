#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    double root2 = sqrt(2);
    int places;
    cout<<"\nSquare root of 2 with precision 0 - 9 \n";
    for(places = 0; places<10; places++)
    {
        cout.precision(places);
        cout<<root2<<endl;
    }
    cout<<"\nSquare root of 2 with precision 0 - 9 using setprecision()\n";
    for(places = 0; places<10; places++)
        cout<<setprecision(places)<<root2<<endl;
    return 0;
}
