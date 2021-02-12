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
using std::string;

struct metadata {
    string author;
    string url;
    string language;
    string rights;
    string subject;
    string title;
};

// Testing std::list
TEST_CASE() {
    
    metadata A;
    A.author = "Jefferson, Thomas";
    A.url = "http://www.gutenberg.org/files/1/1-0.txt";
    A.language = "en";
    A.rights = "Public domain in the USA.";
    A.subject = "United States -- History -- Revolution, 1775-1783 -- Sources";
    A.title = "The Declaration of Independence of the United States of America";
    
    
    metadata B;
    B.author = "Kennedy, John F. (John Fitzgerald)";
    B.url = "http://www.gutenberg.org/files/3/3.txt";
    B.language = "en";
    B.rights = "Public domain in the USA.";
    B.subject = "United States -- Foreign relations -- 1961-1963";
    B.title = "John F. Kennedy's Inaugural Address";
    
    
    // Linked list with list header
    list<metadata> list1({A});
    list<metadata> list2({A, B});
    
    // Queue
    list1.push_back(B);
    
    // Testing the equality of the lists causes an error
    REQUIRE(list1.size() == list2.size());
    
    list1.pop_front();
    REQUIRE(list1.size() == 1);
    
    // Stack
    list2.pop_back();
    REQUIRE(list2.size() == 1);
    list2.push_back(B);
    
    // Find and insert
    // Catch causes an error
//    auto it = std::find(list2.begin(), list2.end(), B);
//    if (it != list2.end()) {
//        list2.insert(it, A);
//    }
    
    // Print list2
    for (auto const &element:list2) {
        std::cout << element.author << std::endl;
    }
    
};
