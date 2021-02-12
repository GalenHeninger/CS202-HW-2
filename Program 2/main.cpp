//
//  main.cpp
//  Program 2
//
//  Created by Galen on 2/12/21.
//  Copyright © 2021 Galen. All rights reserved.
//

#include <iostream>
using std::cout;

void printPointer(int i) {
 int* iptr = &i;
 // the unary * operator dereferences the pointer
 //std::cout << "i = " << *iptr << "\n";
 std::cout << "&i = " << iptr << "\n";
}

int main() {
    // A storage class in the context of C++ variable declarations is a type specifier that governs the lifetime, linkage, and memory location of objects. (The keyword static alters the memory location.)
    // Static storage: Static variables preserve their value even after they are out of their scope!
    // Stack: The allocation happens on contiguous blocks of memory. Whenever a function is called, its variables get memory allocated on the stack
    // Free store: The region of memory used for dynamic memory management
    
    static int i = 0; // Static storage
    int j = 1; // Memory allocated on stack
    int *p = new int(2); // Memory allocated dynamically "Free store"
    
    cout << &i << " (Static storage)\n";
    cout << &j << " (Allocated on stack)\n";
    cout << p << " (Allocated dynamically)\n";
    //std::cout << "i = " << *p << "\n";
    //std::cout << "&i = " << p << "\n";
    
    return 0;
}
