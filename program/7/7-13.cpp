//this program stores,in array,the hours worked by employees

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double payrate,grosspay;
    const int num_employees=5;
    int hours[num_employees];
//input the hours worked
    for(int index=0;index<num_employees;index++)
    {
        cout<<"employee #"<<index+1<<endl;
        cin>>hours[index];
    }

    cout<<"enter the pay rate"<<endl;
    cin>>payrate;

    for(int index=0;index<num_employees;index++)
    {
        grosspay=hours[index]*payrate;
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"the gross pay of employee # "<<index+1<<"is "<<grosspay<<endl;
    }

    return 0;
    



}