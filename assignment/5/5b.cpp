#include <iostream>
#include <cmath>    
using namespace std;

const double g=9.8; 

double falling_distance(double);

int main()
{
	double distance,time;
           

	for (int a = 0; a < 10; a++)
    {
		time = a + 1;
        distance = falling_distance(time);
        
        cout << time<< " seconds= "<<distance<<"meters"<<endl;
             
    }
	
  	return 0;
}
double falling_distance(double falling_time)
{
    return (0.5)*g*pow(falling_time, 2);
}
