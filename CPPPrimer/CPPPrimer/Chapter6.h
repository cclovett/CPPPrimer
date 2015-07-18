//
//  Chapter6.h
//  CPPPrimer
//
//  Created by Cc on 15/7/13.
//  Copyright (c) 2015年 PinguoSDK. All rights reserved.
//

#ifndef __CPPPrimer__Chapter6__
#define __CPPPrimer__Chapter6__

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;
using std::string;
using std::vector;

int ccFact(int val);

int ccAbs(int val);

void ccJiaoHuan(int &a,int &b);

inline bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

string::size_type find_char(const string &s, char c, string::size_type &occurs);

void ccJiaoHuanZhiZhen(int & p1,int & p2);

int ccJiSuanHe1(initializer_list<int> il);

void error_msg(initializer_list<string> il);

const string & shorterString(const string & a, const string & b);
string & shorterString(string & a, string & b);

char &get_val(string &str, string::size_type ix);

int factorial(int val);

int &get(int *array, int index);

void showAllEntity(const vector<int> &a, vector<int>::iterator item);

#endif /* defined(__CPPPrimer__Chapter6__) */
