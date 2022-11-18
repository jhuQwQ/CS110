#include <iostream>
#include <string>
#include <cstring>

using namespace std;

const int SIZE =81;

void toUpperCase(char[]);
void toLowerCase(char[]);
void numberOfLetters(char[]);
void firstLetter(char[]);
void lastLetter(char[]);
void compareWords(char[],char[]);

int main()
{
    char firstChar[SIZE],secondChar[SIZE];
    
    cout<<"enter the first word:"<<endl;
    cin.getline(firstChar,SIZE);
    
    cout<<"enter the second word"<<endl;
    cin.getline(secondChar,SIZE);

    cout<<"report"<<endl;
    cout<<"first word :"<<firstChar<<endl;
    cout<<endl<<"first word lower case  ";toLowerCase(firstChar);
    cout<<endl<<"first word upper case ";toUpperCase(firstChar);
    cout<<endl<<"first word total characters ";numberOfLetters(firstChar);
    cout<<endl<<"first word first character";firstLetter(firstChar);
    cout<<endl<<"first word last character";lastLetter(firstChar);



    cout<<endl<<"second word :"<<firstChar<<endl;
    cout<<endl<<"second word lower case  ";toLowerCase(secondChar);
    cout<<endl<<"second word upper case ";toUpperCase(secondChar);
    cout<<endl<<"second word total characters ";numberOfLetters(secondChar);
    cout<<endl<<"second word first character";firstLetter(secondChar);
    cout<<endl<<"second word last character";lastLetter(secondChar);
    cout<<endl<<endl;compareWords(firstChar,secondChar);




}

void toUpperCase(char word[])
{
    for(int i=0;i<strlen(word);i++)
    cout<<(char)toupper(word[i]);
}

void toLowerCase(char word[])
{
    for (int i =0;i<strlen(word);i++)
    cout<<(char)tolower(word[i]);
}

void numberOfLetters(char word[])
{cout<<strlen(word);}

void firstLetter(char word[])
{cout<<word[0];}

void lastLetter(char word[])
{cout<<word[strlen(word)-1];}

void compareWords(char firstCharWord[],char secondCharWord[])
{
    if ((strcmp(firstCharWord,secondCharWord)>0))
    {cout<<"list"<<endl;cout<<secondCharWord<<endl;cout<<firstCharWord<<endl;}
    else if ((strcmp(firstCharWord,secondCharWord)<0))
    {cout<<"list"<<endl;cout<<firstCharWord<<endl;cout<<secondCharWord<<endl;}

    if ((strcmp(firstCharWord,secondCharWord)==0))
    {cout<<"same"<<endl;}
    else
    {cout<<"not same "<<endl;}
}