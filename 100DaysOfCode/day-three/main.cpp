#include<iostream>

using namespace std;

int main(){
    char input;
    int asciiValue;

    cout << "Enter any character: " << endl;
    cin >> input;

    asciiValue = (int)input;

    cout << asciiValue << endl;
}