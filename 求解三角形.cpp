#include <iostream>
using namespace std;
#include"math.h"
int main()
{
    cout<<"��������ε����:"<<endl;
    int a,b,c,m;
    double n;
    cin>>a>>b>>c;
    m=(a+b+c)/2;
    n=sqrt((m)*(m-a)*(m-b)*(m-c));
    cout<<"�������ε����Ϊ��"<<n<<endl;
}
