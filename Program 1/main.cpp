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
    //Linked list with list header
    list<Value> a_list;
    Value A;
    a_list.push_back(A);
    a_list.pop_back();
    REQUIRE(0.0 == 0.0);
};

//int main() {
//
//
//    return 0;
//}
