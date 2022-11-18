#include <iostream>
using namespace std;
int main()
{
    const int num_hours=6;
    int hours[num_hours];
    int count;
    for (count = 0; count<num_hours; count++)
    {
        cout<<"enter the employee worked hours"<<(count+1)<<endl;
        cin>>hours[count];
    }
    
    for (count = 0; count<num_hours; count++)
    {
        cout<<hours[count]<<endl;
    }


    return 0;
}