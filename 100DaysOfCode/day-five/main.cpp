#include<iostream>

using namespace std;

int main()
{
    int input;

    cout << "Enter a Number: " << endl;
    cin >> input;

    if(input % 2 != 0)
        cout << "Odd" << endl;
    else   
        cout << "Even" << endl;
}