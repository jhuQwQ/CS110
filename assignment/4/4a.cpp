// Assignment 4A:Characters for the ASCII codes
// Author :Jianing Hu
// Description :This program uses loop to display the characters for the ASCII codes 0 through 127
// status   :complete
// date     :Sep 18,2022

#include <iostream>

using namespace std;
int main()
{
int number;
const int max_number=127,min_number=1;
  number = min_number;
  
  while (number <= max_number)
    {
      cout<<char(number)<<"  "<<char(++number)<<"  ";
      cout<<char(++number)<<"  "<<char(++number)<<"  ";
      cout<<char(++number)<<"  "<<char(++number)<<"  ";
      cout<<char(++number)<<"  "<<char(++number)<<"  ";
      cout<<char(++number)<<"  "<<char(++number)<<"  ";
      cout<<char(++number)<<"  "<<char(++number)<<"  ";
      cout<<char(++number)<<"  "<<char(++number)<<"  ";
      cout<<char(++number)<<"  "<<char(++number)<<endl;
    }
return 0;
  }