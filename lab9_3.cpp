/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    int age,bounty;
    float height;
    string character;
    cout << "Enter your age: ";
    cin >> age;
    if(age>60)
    {
        character ="Brook";
    }
    else if(age>25)
    {
        cout<<"Enter your bounty: ";
        cin>>bounty;
        if(bounty>500*pow(10,6))
        {
            character="Jinbe";
        }
        else
        {
            character="Franky";
        }
    }
    else
    {
        cout << "Enter your height: ";
        cin >> height;
        if(height<100)
        {
            character="Chopper";
        }
        else if(height<180)
        {
            character="Usopp";
        }
        else
        {
            cout << "Enter your bounty: ";
            cin >> bounty;
            if(bounty>11*pow(10,8))
            {
                character="Zoro";
            }
            else
            {
                character="Sanji";
            }
        }
    }
    cout <<"Your character = "<<character;
    return 0;
}