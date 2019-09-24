#include <iostream>
using namespace std;
int FindDate(int year,int month,int day)
{
    bool IsGapYear = false;
    int days = day;
    int DayOfYear[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };//������12����ÿ���µ�����
    int DayOfGapYear[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };//����12 ����ÿ���µ�����
    if(year <=0 || month<=0 ||month>12 ||day<=0 || day>13)
        return 0;
    //�ж��ǲ�������
    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        IsGapYear = true;
    for(int i=0;i<month-1;i++)
    {
        if(IsGapYear)
        {
            days+=DayOfYear[i];
        }
        else
            days+=DayOfGapYear[i];
    }
    return days;
}
int main()
{
    int a,b,c,week;
    cin>>a>>b>>c;
    int day = FindDate(a,b,c);
    cout<<"������"<<day<<endl;
    week=day/7;
    cout<<"������"<<week<<endl;
}
