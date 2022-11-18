#include <iostream>
using namespace std;
double get_radius();
double square(double);
int main()
{
    const double Pi=3.14;
    double radius;
    double area;
    radius = get_radius();
    area = Pi * square(radius);
    cout<<area<<endl;
    return 0;
}

double get_radius()
{
    double number;
    cout<<"press a number to get radius"<<endl;;
    cin>>number;
    return number;
}

double square(double number)
{
    return number * number;
}