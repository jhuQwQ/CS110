#include <iostream>
using namespace std;
//1cup = 8ounces
void showIntro();
double getCups();
double cuptoOunces(double);

int main()
{
    showIntro();
    double cups,ounces;
    cups=getCups();
    ounces=cuptoOunces(cups);



    cout<<cups<<" cups are "<<ounces<<" ounces"<<endl;
}
void showIntro()
{
    cout<<"This program help u to convert cups to ounces"<<endl;

}

double getCups()
{
    double cup_number;
    cout<<"Please enter the number of cups"<<endl;
    cin>>cup_number;
    return cup_number;
}

double cuptoOunces(double cup_number)
{
    return cup_number*8;
}

