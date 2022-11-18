#include <iostream>
using namespace std;

double input(double);
double Lowest(double, double, double, double, double);
double lowest(double, double, double, double, double);
void score(double &);
void average(double, double, double, double, double);


int main()
{
    double score1,score2,score3,score4,score5;


    score(score1);
    score(score2);
    score(score3);
    score(score4);
    score(score5);

    average(score1,score2,score3,score4,score5);

    return 0;
}

double input(double num)
{
    while(!(cin >> num) || (num < 0 || num > 100))
    {
        cout << "Error. An integer from 0-100 must be entered: ";
        cin.clear();
        cin.ignore();
    }
    return num;
}


void score(double &num)
{
    cout  << "Please enter testscores ";
    num = input(num);
}

void average(double num1,double num2,double num3,double num4,double num5)
                
{
    double average1,
           lowest1 = lowest(num1, num2, num3, num4, num5);

     if (num1 == lowest1)
         average1=(num1+num2+num3+num4)/4;
     else if (num2 == lowest1)
         average1=(num1+num2+num3+num4)/4;
     else if (num3 == lowest1)
         average1=(num1+num2+num3+num4)/4;
     else if (num4 == lowest1)
         average1=(num1+num2+num3+num4)/4;
     else if (num5 == lowest1)
         average1=(num1+num2+num3+num4)/4;

    cout<<"The average is: "<<average<<endl;
}

double Lowest(double num1,double num2,double num3,double num4,double num5) 

{
    double lowest1;
    if (num1 <= num2)
    {
        if (num1 <= num3)
        {
            if (num1 <= num4)
            {
                if (num1 <= num5)
                {
                    lowest1 = num1;
                }
            }
        }
    }
    return lowest1;
}

double lowest(double num1,double num2,double num3,double num4,double num5)
{
    double smallest;

    smallest = Lowest(num1, num2, num3, num4, num5);
    smallest = Lowest(num2, num3, num4, num5, num1);
    smallest = Lowest(num3, num4, num5, num1, num2);
    smallest = Lowest(num4, num5, num1, num2, num3);
    smallest = Lowest(num5, num1, num2, num3, num4);

    return smallest;
}