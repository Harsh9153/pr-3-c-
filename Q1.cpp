// Q.1 Develop a program that prints the given Right half triangle pattern using a nested for loop.
#include <iostream>
using namespace std;


int main() {
    int rows = 5; 
    int startNumber = 41; 

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            cout << (startNumber + j) << " "; 
        }
        cout << endl; 
    }

    return 0;
}