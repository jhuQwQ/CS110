//This program calculate the gross pay
#include <iostream>
using namespace std;

//global constant
const double PAY_RATE=22.55;
const double BASE_HOURS=40.0;
const double OT_MULTIPLIER=1.5;

double get_basepay(double);
double get_otpay(double);

int main()
{
    cout<<"press your work hours"<<endl;
    double hoursofwork,basepay,otpay,total_pay;
    cin>>hoursofwork;
    basepay=get_basepay(hoursofwork);
    if (hoursofwork>BASE_HOURS)
    {
        otpay=get_otpay(hoursofwork);
    }
    total_pay=basepay+otpay;
    cout<<total_pay<<"$"<<endl;
    return 0;
}




double get_basepay(double hoursofwork)
{
    double basepay;
    if (hoursofwork > BASE_HOURS)
    {
        basepay=PAY_RATE*BASE_HOURS;
    }
    else
    {
        basepay=PAY_RATE*hoursofwork;
    }
    return basepay;
}

double get_otpay(double hoursofwork)
{
    double otpay,ottime;
    ottime=hoursofwork-BASE_HOURS;
    otpay=ottime*PAY_RATE*OT_MULTIPLIER;
    return otpay;
}
             