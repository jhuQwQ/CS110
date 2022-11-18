//This program uses a function that return true of false
#include <iostream>
using namespace std;

bool isEven(int);

int main()
{
    cout<<"enter a number"<<endl;
    int value;
    cin>>value;
    if (isEven(value))
    {
        cout<<"even"<<endl;
    }
    else
    {
        cout<<"odd"<<endl;
    }
    cout<<"123"<<endl;
    return 0;
}

bool isEven(int number)
{
    bool status;
    if (number %2 ==0)
    status = true;
    else 
    status = false;
    return status;

}