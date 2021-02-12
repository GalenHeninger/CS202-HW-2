//
//  main.cpp
//  CS202-HW-2
//
//  Created by Galen on 2/10/21.
//  Copyright © 2021 Galen. All rights reserved.
//

#define CATCH_CONFIG_MAIN
#include <iostream>
#include <list>
#include "catch.h"
using std::list;

struct Value {
    int x;
};

TEST_CASE() {
    
    Value A;
    Value B;
    
    //Linked list with list header
    list<Value> list1({A});
    list<Value> list2({A, B});
    
    list1.push_back(B);
    
    REQUIRE(list1.size() == list2.size());
    
};
