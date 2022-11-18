#include <iostream>
using namespace std;
const int SIZE = 5;
void getdata(const string[],  int[]);
void findBest_WorstSeller(const int[], int&,int&);
int findTotal(const int[]);
void printSummary(const string[], const int[], int, int, int);
int main()
{
    string salsa[SIZE]= {"hot", "zesty", "mild", "medium", "sweet"};
    int jarsSold[SIZE], totalSale;
    int bestIndex = 0, worstIndex = 0;
    getdata(salsa,jarsSold);
    totalSale = findTotal(jarsSold);
    findBest_WorstSeller(jarsSold,bestIndex, worstIndex );
    printSummary (salsa, jarsSold,totalSale, bestIndex, worstIndex);
    return 0;
}
void getdata(const string s[], int j[])
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << "How many jars of " << s[i]<< "     salsa were sold  :::   ";
        cin >> j[i];
        while(j[i]< 0)
        {
            cout << " Please enter a positive number  ::: ";
            cin >> j[i];
        }
    }
}
int findTotal(const int j[])
{
    int total = 0;
    for(int i = 0; i < SIZE; i++)
        total = total + j[i];
    return total;
}
void findBest_WorstSeller(const int j[], int& b, int& w)
{
   int best = j[0] ;
   int worst = j[0];
   for(int i = 0; i < SIZE; i++)
   {
       if(best < j[i])
       {
           best = j[i];
           b = i;
       }
       if(worst > j[i])
       {
           worst = j[i];
           w = i;
       }
   }
}
void printSummary(const string s[], const int j[], int t, int b, int w)
{
    cout << "\n\n   S U M M A R Y  \n\n";
    cout << " Salsa sold   : \n";
    for( int i = 0; i < SIZE; i++)
    {
        cout << s[i]<< "       " << j[i] << endl;
    }
    cout <<"\n\nTotal sales  " << t << endl << endl;
    cout <<"Best seller   " << s[b] << "  " << j[b] << "  jars sold\n\n";
    cout <<"Worst seller  " << s[w] << "  " << j[w] << "  jars sold\n\n";
}