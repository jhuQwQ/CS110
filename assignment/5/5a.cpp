#include <iostream>
using namespace std;

// Function prototypes
double getLength();
double getWidth();
double getArea(double, double);
void displayData(double, double, double);
int main()
{
	double length;  // To hold the rectangle's length
	double width;	// To hold the rectangle's width
	double area;	// To hold the rectangle's area
          
	// Get the rectangle's length.
	length = getLength();
   
	// Get the rectangle's width.
	width = getWidth();
   
	// Get the rectangle's area.
	area = getArea(length, width);
   
	// Display the rectangle's data.
	displayData(length, width, area);
          
	return 0;
}

//***************************************************
// getLength function                               *
//***************************************************

double getLength()
{
	double length;  // To hold the length
   
	// Get the length.
	cout << "Enter the length: ";
	cin >> length;
   
	// Return the length.
	return length;
}

//***************************************************
// getWidth function                                *
//***************************************************

double getWidth()
{
	double width;  // To hold the width
   
	// Get the width.
	cout << "Enter the width: ";
	cin >> width;
   
	// Return the width.
	return width;
}

//***************************************************
// getArea function                                 *
//***************************************************

double getArea(double length, double width)
{
	// Return the area.
	return length * width;
}

//***************************************************
// displayData function                             *
//***************************************************

void displayData(double length, double width, double area)
{
	cout << "\nRectangle Data\n"
		 << "--------------\n"
	     << "Length: " << length << endl
	     << "Width:  " << width << endl
	     << "Area:   " << area << endl;
}
