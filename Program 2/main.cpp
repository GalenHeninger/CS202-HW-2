//
//  main.cpp
//  Program 2
//
//  Created by Galen on 2/12/21.
//  Copyright © 2021 Galen. All rights reserved.
//

#include <iostream>
using std::cout;
using std::endl;


int main() {
    // A storage class in the context of C++ variable declarations is a type specifier that governs the lifetime, linkage, and memory location of objects. (The keyword static alters the memory location.)
    // Static storage: Static variables preserve their value even after they are out of their scope
    // Stack: The allocation happens on contiguous blocks of memory. Whenever a function is called, its variables get memory allocated on the stack
    // Free store: The region of memory used for dynamic memory management
    
    cout << "Addresses of integer variables:\n";
    cout << endl;
    
    
    // Static storage
    static int i = 0;
    static int j = 2;
    static int k = 3;
    
    cout << "Static storage:\n";
    cout << &i << "\n";
    cout << &j << "\n";
    cout << &k << "\n";
    cout << endl;
    
    
    // Memory allocated on stack
    int i1 = 0;
    int j1 = 1;
    int k1 = 2;
    
    cout << "Allocated on stack:\n";
    cout << &i1 << "\n";
    cout << &j1 << "\n";
    cout << &k1 << "\n";
    cout << endl;
    cout << "On the stack the addresses of the variables created later are lower addresses.\n";
    cout << endl;
    
    
    // Memory allocated dynamically
    //"Free store"
    int * p = new int[3];
    
    p[0] = 0;
    p[1] = 1;
    p[2] = 2;
    
    cout << "Dynamically allocated array:\n";
    cout << &p[0] << "\n";
    cout << &p[1] << "\n";
    cout << &p[2] << "\n";
    cout << endl;
    
    cout << "The addresses of the elements of the dynamically allocated array increase for higher indices.\n";
    cout << endl;
    
    return 0;
}
