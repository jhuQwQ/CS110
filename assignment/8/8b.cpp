#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void toUpperCase(string);
void toLowerCase(string);
void numberOfLetters(string);
void firstLetter(string);
void lastLetter(string);
void compareWords(string,string);

int main()
{
    string firstString,secondString;

   
    cout<<"enter the first word:"<<endl;
    getline(cin,firstString);
    
    cout<<"enter the second word"<<endl;
    getline(cin,secondString);

     cout<<"report"<<endl;
    cout<<"first word :"<<firstString<<endl;
    cout<<endl<<"first word lower case  ";toLowerCase(firstString);
    cout<<endl<<"first word upper case ";toUpperCase(firstString);
    cout<<endl<<"first word total characters ";numberOfLetters(firstString);
    cout<<endl<<"first word first character";firstLetter(firstString);
    cout<<endl<<"first word last character";lastLetter(firstString);



    cout<<endl<<"second word :"<<secondString<<endl;
    cout<<endl<<"second word lower case  ";toLowerCase(secondString);
    cout<<endl<<"second word upper case ";toUpperCase(secondString);
    cout<<endl<<"second word total characters ";numberOfLetters(secondString);
    cout<<endl<<"second word first character";firstLetter(secondString);
    cout<<endl<<"second word last character";lastLetter(secondString);
    cout<<endl<<endl;compareWords(firstString,secondString);
}

void toUpperCase(string word)
{
    for(int i=0;i<word.length();i++)
    cout<<(char)toupper(word[i]);
}

void toLowerCase(string word)
{
    for (int i =0;i<word.size();i++)
    cout<<(char)tolower(word.at(i));
}




void numberOfLetters(string word)
{cout<<word.length();}


void firstLetter(string w)
{cout<<w.at(0);}

void lastLetter(string w)
{cout<<w[w.size()-1];}


void compareWords(string firstCharWord,string secondCharWord)
{
    if (firstCharWord == secondCharWord)
    cout<<"same"<<endl;
    else 
    cout<<"not same"<<endl;
 if (firstCharWord > secondCharWord)
 {cout<<secondCharWord<<endl;cout<<firstCharWord<<endl<<endl;}
 else {cout<<firstCharWord<<endl;cout<<secondCharWord<<endl<<endl;}

}