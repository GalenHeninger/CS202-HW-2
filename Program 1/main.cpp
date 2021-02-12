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
    A.author = "Kennedy, John F. (John Fitzgerald)";
    A.url = "http://www.gutenberg.org/files/3/3.txt";
    A.language = "en";
    A.rights = "Public domain in the USA.";
    A.subject = "United States -- Foreign relations -- 1961-1963";
    A.title = "John F. Kennedy's Inaugural Address";
    
    
    // Linked list with list header
    list<metadata> list1({A});
    list<metadata> list2({A, B});
    
    list1.push_back(B);
    
    // Testing the equality of the actual lists causes an error
    REQUIRE(list1.size() == list2.size());
    
    list1.pop_front();
    REQUIRE(list1.size() == 1);
    
    
};
