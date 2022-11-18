#include <iostream>
using namespace std;
int main()
{
    const int SIZE=10;
    int numbers[SIZE];
cout<<"please enter 10 numbers"<<endl;

    for(int count=0;count<SIZE;count++)
    {
        
        cin>>numbers[count];
    }

    int large=0;
    int small=9999999;
    
    for(int i=0;i<SIZE;i++)
    {
        if (numbers[i]<small)
        small=numbers[i];
        if (numbers[i]>large) 
        large=numbers[i];
    }

    cout<<"the largest number is "<<large<<endl;
    cout<<"the smallest number is "<<small<<endl;
    
    return 0;
}