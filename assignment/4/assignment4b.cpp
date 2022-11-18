// Assignment 4B:Math Tutor
// Author :Jianing Hu
// Description :This program uses to calculate the problem of addition, subtraction, multiplication and division
// status   :complete
// date     :Sep 18,2022

#include <iostream>   
using namespace std;

int main()
{
  int choice;
  do{  
  
  const int choice_1=1,choice_2=2,choice_3=3,choice_4=4;

    cout<<"This is a calculator"<<endl;
    cout<<"1.Additonal problems"<<endl;
    cout<<"2.Subtraction problems"<<endl;
    cout<<"3.Multiplication problems"<<endl;
    cout<<"4.Division problems"<<endl;
    cout<<"Please enter your choice(1-4)"<<endl;
    cin >> choice;

    switch (choice)
    {

        case 1:
          double add1,add2,add_sum;
          cout<<"Additonal problems"<<endl;
          cout<<"Enter two number to add"<<endl;
          cin>>add1>>add2;
          add_sum=add1 + add2;
          cout<<"The sum is "<<add_sum<<endl;
          
            
            break;

        case 2:
          double subed_number,sub,diff;
          cout<<"Subtraction problems"<<endl;
          cout<<"Enter subtracted number and subtractor"<<endl;
          cin>>subed_number>>sub;
          diff = subed_number - sub;
          cout<<"The difference is "<<diff<<endl;
          
          
           
            break;

        case 3:
          double mult1,mult2,product;
          cout<<"Multiplication problems"<<endl;
          cout<<"Enter two multiplier"<<endl;
          cin>>mult1>>mult2;
          product = mult1 * mult2;
          cout<<"The product is "<<product<<endl;
            
            break;
        case 4:
          cout<<"good bye"<<endl;
    

    }

  
    }while (choice != 4); 
    
    return 0;
}