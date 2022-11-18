#include <iostream>
using namespace std;

double inputValidate(double);
void getScore(double &);
void calcAverage(double, double, double, double, double);
double ifLowest(double, double, double, double, double);
double findLowest(double, double, double, double, double);

int main()
{
    double score1, score2,score3,score4,score5;


    getScore(score1);
    getScore(score2);
    getScore(score3);
    getScore(score4);
    getScore(score5);

    calcAverage(score1, score2, score3, score4, score5);

    return 0;
}

/********************************************************
 * Definition of inputValidate function:                *
 * This function checks user input. When the            *
 * user enters anything other than an (int) or anything *
 * not within a 0-100 range, it will display an error,  *
 * clear the input stream, ignore previous input up     *
 * untill the new line (\n) character.                  *
 ********************************************************/
double inputValidate(double num)
{
    while(!(cin >> num) || (num < 0 || num > 100))
    {
        cout << "Error. An integer from 0-100 must be entered: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return num;
}


void getScore(double &num)
{
    cout  << "What is the testscore: ";
    num = inputValidate(num);
}

/********************************************************
 * Function Definition for void calcAverage():          *
 * calcAverage() should calculate and display the       *
 * average of the four highest scores. This function    *
 * should be called just once by main and should be     * 
 * passed the five scores.                              *
 ********************************************************/
void calcAverage(double num1,
                 double num2,
                 double num3,
                 double num4,
                 double num5)
{
    double average,
           lowest = findLowest(num1, num2, num3, num4, num5);

     if (num1 == lowest)
         average = (num2 + num3 + num4 + num5) / 4;
     else if (num2 == lowest)
         average = (num1 + num3 + num4 + num5) / 4;
     else if (num3 == lowest)
         average = (num1 + num2 + num4 + num5) / 4;
     else if (num4 == lowest)
         average = (num1 + num2 + num3 + num5) / 4;
     else if (num5 == lowest)
         average = (num1 + num2 + num3 + num4) / 4;

    cout << "The average is: " << average << endl;
}

/********************************************************
 * Definition of lowest():                              *
 * lowest using a if statmenent to find the lowest      *
 * number.                                              *
 ********************************************************/
double ifLowest(double num1, 
                double num2, 
                double num3, 
                double num4, 
                double num5)
{
    double lowest;
    if (num1 <= num2)
    {
        if (num1 <= num3)
        {
            if (num1 <= num4)
            {
                if (num1 <= num5)
                {
                    lowest = num1;
                }
            }
        }
    }
    return lowest;
}

/********************************************************
 * Function Definition for int findLowest():            *
 * findLowest() should find and return the lowest of    *
 * the five scores passed to it. It should be called by *
 * calcAverage, which uses the function to determine    *
 * which of the five scores to drop.                    *
 ********************************************************/
double findLowest(double num1, 
                  double num2, 
                  double num3, 
                  double num4, 
                  double num5)
{
    double smallest;

    smallest = ifLowest(num1, num2, num3, num4, num5);
    smallest = ifLowest(num2, num3, num4, num5, num1);
    smallest = ifLowest(num3, num4, num5, num1, num2);
    smallest = ifLowest(num4, num5, num1, num2, num3);
    smallest = ifLowest(num5, num1, num2, num3, num4);

    return smallest;
}