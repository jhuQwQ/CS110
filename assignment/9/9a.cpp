#include <iostream> 
#include <string> 
using namespace std; 

struct MovieData
{
    string title; 
    string director; 
    int year_released; 
    int running_time; 
    int production_cost; 
    int first_year_revenue; 
}; 

// Function prototypes
MovieData getMovieData(); 
void printMovieData(MovieData *); 

int main()
{

    MovieData m1, m2; 
    MovieData *ptr1, *ptr2; 
    ptr1 = &m1; 
    ptr2 = &m2; 
    m1 = getMovieData(); 
    m2 = getMovieData(); 
    printMovieData(ptr1); 
    printMovieData(ptr2); 
    system("PAUSE"); 

    return 0; 
}


MovieData getMovieData()
{
    MovieData temp; 

    cout<<"Eenter the title "<<endl;
    getline(cin, temp.title); 

   

    cout<<"enter the director "<<endl;
    getline(cin, temp.director); 


    cout<<"enter the year that the movie was released "<<endl;
    cin>>temp.year_released; 

 
    cout << "enter the minutes "<<endl; 
    cin>>temp.running_time; 



    cout<<"enter the cost"<<endl; 
    cin>>temp.production_cost; 



    cout<<"Enter the revenue: $"<<endl; 
    cin>>temp.first_year_revenue; 

    cin.ignore(); 


    return temp; 
}

void printMovieData(MovieData *pointer)
{
    cout<<"title: "<<pointer->title<<endl; 
    cout<<"director: "<<pointer->director<<endl;
    cout<<"year Released: "<< pointer->year_released<<endl;
    cout<<"running Time: "<< pointer->running_time<<endl;
    cout<<"production Cost: "<< pointer->production_cost<<endl;
    cout<<"first Year Revenue: "<< pointer->first_year_revenue<<endl;
     
}