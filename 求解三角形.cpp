#include <iostream>
using namespace std;
#include"math.h"
int main()
{
    cout<<"求解三角形的面积:"<<endl;
    int a,b,c,m;
    double n;
    cin>>a>>b>>c;
    m=(a+b+c)/2;
    n=sqrt((m)*(m-a)*(m-b)*(m-c));
    cout<<"该三角形的面积为："<<n<<endl;
}
