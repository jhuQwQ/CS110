#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    const int array_size=10;
    int numbers[array_size];
    int count=0;//loop counter variable
    ifstream inputFile;//input file stream object

    inputFile.open("tennumber.txt");

    //read numbers from the file into the array
    while (count<<array_size&&inputFile>>numbers[count])
    count++;

    inputFile.closd();

    //display the numbers read
    cout<<"numbers are:"
    for (count=0; count<array_size; count++)
    cout<<numbers[count]<<endl;
    
    return 0;

    
}