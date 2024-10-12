#include<iostream>

using namespace std;

int main(){
    char inputCharacter;
    bool output = false;

    cout << "Enter the input character: " << endl;
    cin >> inputCharacter;

    if((inputCharacter == 'A' || inputCharacter == 'A' + 32) || (inputCharacter == 'E' || inputCharacter == 'E' + 32)
         || (inputCharacter == 'I' || inputCharacter == 'I' + 32) || (inputCharacter == 'O' || inputCharacter == 'O' + 32)
         || (inputCharacter == 'U' || inputCharacter == 'U' + 32))
         {
            cout << "Vowel" << endl;
         }
    else if ((inputCharacter >= 65 && inputCharacter <= 90) || (inputCharacter >= 97 && inputCharacter <= 122))
    {
        cout << "Consonant" << endl;
    }
    else
    {
        cout << "Invalid Input" << endl;
    }
    
}