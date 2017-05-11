/*This program accepts inputs from the input.txt file*/ 

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int year;
    string userName;

    // example of the interger read
    cout<<"What year is your favorite? ";
    cin >> year;
    // getline(std::cin, year); // not usable for integer
    cout<<"How interesting, your favorite year is "<<year<<"!\n";
    
    // example of the string read
    cout<<"What is your name? ";
    getline(std::cin, userName);
    cout<<"Hello "<<userName<<" !\n";
    
    return 0;
}
