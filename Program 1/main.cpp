//
//  main.cpp
//  CS202-HW-2
//
//  Created by Galen on 2/10/21.
//  Copyright © 2021 Galen. All rights reserved.
//

#include <iostream>
#include <list>
#include "catch.h"
using std::list;

struct Value {
    int x;
};

int main() {
    
    //Linked list with list header
    list<Value> a_list;
    Value A;
    a_list.push_back(A);
    
    
    return 0;
}
