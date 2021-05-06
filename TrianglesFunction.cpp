// TrianglesFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void upper_triangle(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 0; j < i; j++) {
            cout << "*   ";
        }
        cout << "\n";
    }
   
   
}


void lower_triangle(int n) {
  
    int i, j;
    
    for(i = n; i >= 1; i--) {
        for (j = 0; j < i; j++) {
           cout << "*   ";
        }
        cout << "\n";
    }
}

int main()
{
    int i, j, n;
    cout << "\n Enter a number for the size of pyramid: ";
    cin >> n;
    upper_triangle(n);
    lower_triangle(n-1);
    
}
