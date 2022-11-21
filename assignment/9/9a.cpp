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
    // Variables 
    MovieData m1, m2; 
    MovieData *ptr1, *ptr2; 
    ptr1 = &m1; 
    ptr2 = &m2; 

    // Call getMovieData function to get information for both movies 
    m1 = getMovieData(); 

    m2 = getMovieData(); 

    printMovieData(ptr1); 

    cout << "\n"; 

    printMovieData(ptr2); 

    system("PAUSE"); 

    return 0; 
}

/**
* Pre-Condition: 
* Post-Condition: 
*/
MovieData getMovieData()
{
    // Variables
    MovieData temp; 

    // Prompt user for information
    cout << "Enter the title of the movie: "; 
    getline(cin, temp.title); 

    cout << "\n"; 

    cout << "Enter the name of the movie's director: "; 
    getline(cin, temp.director); 

    cout << "\n"; 

    cout << "Enter the year the movie was released: "; 
    cin >> temp.year_released; 

    cout << "\n"; 

    cout << "Enter the running time of the movie in minutes: "; 
    cin >> temp.running_time; 

    cout << "\n"; 

    cout << "Enter the production cost of the movie: $"; 
    cin >> temp.production_cost; 

    cout << "\n"; 

    cout << "Enter the movie's first year revenue: $"; 
    cin >> temp.first_year_revenue; 

    cin.ignore(); 

    cout << "\n"; 

    return temp; 
}
//
// Pre-Condition: 
// Post-Condition: 
//

void printMovieData(MovieData *pointer)
{
    cout << "Title: " << pointer->title << endl; 
    cout << "Director: " << pointer->director << endl;
    cout << "Year Released: " << pointer->year_released << endl;
    cout << "Running Time: " << pointer->running_time << endl;
    cout << "Production Cost: " << pointer->production_cost << endl;
    cout << "First Year Revenue: " << pointer->first_year_revenue << endl;
    cout << "\n"; 
}