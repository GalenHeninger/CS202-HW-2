//
//  main.cpp
//  CS202-HW-2
//
//  Created by Galen on 2/10/21.
//  Copyright © 2021 Galen. All rights reserved.
//

#include <iostream>
#include <list>
using std::list;

struct Value {
    int x;
//    Value * p;
};

int main() {
    
//    //v0 points to the first value in the list
//    Value * root;
//    root = new Value;
//    //End at the root of the list with null pointer
//    //root->p = nullptr;
//    Value * pointer_to_element;
//    // Start at root
//    pointer_to_element = root;
//    // Push a value to the end of the list
//    pointer_to_element->p = new Value;
    
    //Linked list with list header
    list<Value> a_list;
    Value A;
    a_list.push_back(A);
    
    
    return 0;
}
