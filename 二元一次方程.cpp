#include<iostream>
using namespace std;
#include"math.h"
int main()
{
    cout<<"����Ԫһ�η��������������"<<endl;
    float a,b,c,m,n,x1,x2;
    cin>>a>>b>>c;
    n=b*b-4*a*c;
    x1=(-b+sqrt(b*b-4*a*c))/2*a;
    x2=(-b-sqrt(b*b-4*a*c))/2*a;
    if(n>0)
    {
        cout<<"�÷��̵�����һ����Ϊ:"<<x1<<endl;
        cout<<"�÷��̵�����һ����Ϊ:"<<x2<<endl;

    }
        else if(n=0)
            cout<<x1<<endl;
        else
            cout<<"�÷���û��ʵ����"<<endl;
}
