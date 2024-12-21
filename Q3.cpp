//  Q3 Develop a program that prints the given Inverted Left half triangle pattern using a nested for
// loop
#include <iostream>
using namespace std;

int main() {
    int rows = 5; 

    for (int i = 0; i < rows; i++) { 
       
        for (int j = 0; j < i; j++) {
            cout << "  "; 
        }
        
        
        for (int j = 1; j <= (rows - i); j++) {
            cout << (j % 2) << " "; 
        }
        
        cout << endl; 
    }

    return 0;
}