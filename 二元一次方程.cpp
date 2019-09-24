#include<iostream>
using namespace std;
#include"math.h"
int main()
{
    cout<<"求解二元一次方程组的两个根："<<endl;
    float a,b,c,m,n,x1,x2;
    cin>>a>>b>>c;
    n=b*b-4*a*c;
    x1=(-b+sqrt(b*b-4*a*c))/2*a;
    x2=(-b-sqrt(b*b-4*a*c))/2*a;
    if(n>0)
    {
        cout<<"该方程的其中一个根为:"<<x1<<endl;
        cout<<"该方程的另外一个根为:"<<x2<<endl;

    }
        else if(n=0)
            cout<<x1<<endl;
        else
            cout<<"该方程没有实数根"<<endl;
}
