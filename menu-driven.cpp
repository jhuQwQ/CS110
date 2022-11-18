//This is a menu-driven program that makes a function call
#include <iostream>
using namespace std;

void menu();
void totalprice(double, int);

//main
int main()
{

    int months;
    int choice;
    const int adult_choice=1,child_choice=2,senior_choice=3,quit=4;
    const double adult_price=40,child_price=20,senior_price=3;
    do{
        menu();
        cin>>choice;
        while(choice<adult_choice ||choice > quit)
        {
            cout<<"error.please select a valid choice"<<endl;
            cin>>choice;
        }
        if(choice != quit)
        {
            cout<<"For how many months?"<<endl;
            cin>>months;
            switch (choice)
            {
            case adult_choice:
                totalprice(adult_price,months);
                break;
            case child_choice:
                totalprice(child_price,months);
                break;
            case senior_choice:
                totalprice(senior_price,months);
                break;
            }
        }

    }while(choice != quit);
    cout<<"goodbye"<<endl;
    return 0;
}

void menu()
{
cout<<"1.adult"<<endl;
cout<<"2.child"<<endl;
cout<<"3.senior"<<endl;
cout<<"4.quit"<<endl;
cout<<"select your choice"<<endl;
}

void totalprice(double price,int months)
{
cout<<"The total price is "<<(price * months)<<endl;

}
