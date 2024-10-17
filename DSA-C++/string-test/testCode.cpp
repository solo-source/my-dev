//My code

// #include<iostream>

// using namespace std;

// int main()
// {
// 	int i, j, k;
// 	int input;

//     cout << "Enter the input number: " << endl;
// 	cin >> input;

// 	int num[input];

// 	for(i = 0; i < input; i++)
// 	    {
// 		    if(input % (i+1) == 0)
// 			    num[i] = i+1;
//             else
//                 num[i] = 0;
// 	    }

// 	for(j = 0; j < input; j++)
// 	{
// 		for(k = 0; k < input; k++){
// 			if(input == num[j] * num[k])
// 			{
// 				cout << num[j] << "x" << num[k] << "=" << input << endl; 
// 			}
// 		}
// 	}
// }




//chatgpt's code
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int input;

    cout << "Enter the input number: " << endl;
    cin >> input;

    vector<int> num;

    // Store all divisors of the input number in the vector
    for(int i = 1; i <= input; i++)
    {
        if(input % i == 0)
            num.push_back(i);
    }

    // Find and print all pairs of divisors whose product equals the input
    for(size_t j = 0; j < num.size(); j++)
    {
        for(size_t k = j; k < num.size(); k++)
        {
            if(input == num[j] * num[k])
            {
                cout << num[j] << " x " << num[k] << " = " << input << endl;
            }
        }
    }

    return 0;
}
