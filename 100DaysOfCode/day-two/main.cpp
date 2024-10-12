#include<iostream>

using namespace std;

int main(){
    char input;
    bool isAlphabet = false;

    cout << "Enter a Character: " << endl;
    cin >> input;

    // if(65 <= input <= 90 || 97 <= input <= 122) {
    //     isAlphabet = true;
    // }
    //The Above style of condition is not working in C/C++


    if((input >= 65 && input <= 90) || (input >= 97 && input <=122)){
        isAlphabet = true;
    }

    if(isAlphabet == true) {
        cout << "Alphabet" << endl;
    }
    else {
        cout << "Not an alphabet" << endl;
    }

    return 0;
}