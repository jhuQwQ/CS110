#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
const int SIZE = 12;
struct Weather
{
    double monthlyrainfall,highTemp,lowTemp,avgTemp;
};
string month[SIZE]= {"January","February", "March",
                     "April", "May", "June", "July",
                     "August", "September", "October",
                     "November", "December"};
void getData(Weather[]);
void calculate(Weather[], double&, double&, int&, int&);
void display (Weather[],double, double , int, int);
int main()
{
    double yearlyTotalRain =0,averageYearlyTemp=0;
    int yearliHITemp=0, yearlyLowTemp=0;
    Weather wed[SIZE];
    // populate the structure
    getData(wed);
    //calculate the yearly values
    calculate(wed,yearlyTotalRain,averageYearlyTemp, yearliHITemp, 
yearlyLowTemp);
    // display yearly values
    display(wed,yearlyTotalRain,averageYearlyTemp, yearliHITemp, 
yearlyLowTemp);
    return 0;
}
void getData(Weather w[])
{
    ifstream fin("weather.txt");
    if(!fin)
    {
        cout << "Error opening the input file";
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < SIZE; i++)
    {
        fin >> w[i].monthlyrainfall;
        fin >> w[i].highTemp;
        fin >> w[i].lowTemp;
        w[i].avgTemp = (w[i].highTemp + w[i].lowTemp)/2;
    }
    fin.close();
}
void calculate(Weather w[], double& ytRain, double&aytemp, int&yHiTemp, int& 
yLowTemp)
{
    double high = w[0].highTemp;
    double low =   w[0].lowTemp;
    for (int i = 0; i < SIZE; i++ )
    {
        ytRain = ytRain + w[i].monthlyrainfall;
        aytemp = aytemp + w[i].avgTemp;
        if( high < w[i].highTemp)
        {
            high = w[i].highTemp;
            yHiTemp = i;
        }
        if( low > w[i].lowTemp)
        {
            low = w[i].lowTemp;
            yLowTemp = i;
        }
    }
   aytemp = aytemp/SIZE;
}
void display(Weather w[],double ytRain, double aytemp, int yHiTemp, int 
yLoTemp)
{
  cout << "\n\nSTATISTICS\n\n"  ;
  cout << "Total yearly rain          =   " << ytRain << endl;
  cout << "Average yearly temperature =   " << aytemp << endl;
  cout << "Highest temperature for the year = " <<w[yHiTemp].highTemp << "occured in month of " <<month[yHiTemp] << endl;
  cout << "Lowest temperature for the year  = " <<w[yLoTemp].lowTemp << " occured in month of " <<month[yLoTemp]<< endl << endl;
}
