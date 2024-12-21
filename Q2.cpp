// Q.2 Develop a program that prints the given Floyd’s triangle pattern using a nested for loop.


#include <iostream>
using namespace std;

int main() {
    int rows = 4; 
    int number = 11; 

    for (int i = 1; i <= rows; i++) { 
        for (int j = 1; j <= i; j++) { 
            cout << number << " "; 
            number++; 
        }
        cout << endl; 
    }

    return 0;
}