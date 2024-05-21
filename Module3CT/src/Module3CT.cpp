//============================================================================
// Name        : Module3CT.cpp
// Author      : k
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
   cout << "Enter three integer values: ";
   cin >> a >> b >> c;
    int* ptrA = new int;
    int* ptrB = new int;
    int* ptrC = new int;
    *ptrA = a;
    *ptrB = b;
    *ptrC = c;
    cout << "Values: " << a << ", " << b << ", " << c << endl;
     cout << "Pointers: " << *ptrA << ", " << *ptrB << ", " << *ptrC << endl;
    delete ptrA;
    delete ptrB;
    delete ptrC;

    return 0;
}
