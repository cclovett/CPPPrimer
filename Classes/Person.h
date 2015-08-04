//
//  Person.h
//  CPPPrimer
//
//  Created by Cc on 15/7/15.
//  Copyright (c) 2015年 PinguoSDK. All rights reserved.
//

#ifndef CPPPrimer_Person_h
#define CPPPrimer_Person_h

#include <stdio.h>
#include <iostream>

using namespace std;
using std::string;

struct Person {
    //方法声明
    std::istream &read(std::istream &is, Person &p);
    std::ostream &print(std::ostream &os, const Person &p);
    
    Person() = default;
    Person(const std::string &name, const string &address = ""):strName(name), strAddress(address) {};
    Person(std::istream &is) { read(is, *this); };
    
    string strName;
    string strAddress;
    
    string getName() const { return this-> strName; }
    string getAddress() const { return this-> strAddress; }
};

inline std::istream & read(std::istream &is, Person &p)
{
    is >> p.strName >> p.strAddress;
    return is;
}

inline std::ostream & print(std::ostream &os, const Person &p)
{
    os << "name:" << p.strName << " address:" << p.strAddress;
    return os;
}
#endif
