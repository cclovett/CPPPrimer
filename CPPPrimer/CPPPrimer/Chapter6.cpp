//
//  Chapter6.cpp
//  CPPPrimer
//
//  Created by Cc on 15/7/13.
//  Copyright (c) 2015年 PinguoSDK. All rights reserved.
//

#include "Chapter6.h"



int fact(int val)
{
    int ret = 1;
    while (val != 0) {
        
        ret *= val;
        val--;
    }
    
    return ret;
}

int ccAbs(int val)
{
    return val < 0 ? -val : val;
}

void ccJiaoHuan(int &a,int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

string::size_type find_char(const string &s, char c, string::size_type &occurs)
{
    auto ret = s.size();
    occurs = 0;
    for (decltype(ret) i = 0; i != s.size(); ++i) {
        
        if (s[i] == c) {
            
            if (ret == s.size()) {
                
                ret = i;
            }
            
            ++occurs;
        }
    }
    return ret;
}

void reset(int &a)
{
    a = 0;
}

void ccJiaoHuanZhiZhen(int &p1,int &p2)
{
    int p = p2;
    p2 = p1;
    p1 = p;
}

int ccJiSuanHe1(initializer_list<int> il)
{
    int sun = 0;
    for (auto beg = il.begin(); beg != il.end(); ++beg) {
        
        sun += *beg;
    }
    return sun;
}

void error_msg(initializer_list<string> il)
{
    for (auto elem : il) {
        
        cout << elem << " ";
    }
    cout << endl;
}

const string& shorterString(const string& a, const string& b)
{
    return a.size() < b.size() ? a : b;
}

string & shorterString(string &a, string &b)
{
    auto &r = shorterString(const_cast<const string&>(a), const_cast<const string&>(b));
    return const_cast<string &>(r);
}

char &get_val(string &str, string::size_type ix)
{
    return str[ix];
}

int factorial(int val)
{
    if (val > 1) {
        
        int sun = factorial(val - 1);
        sun *= val;
        return sun;
    }
    return 1;
}

int &get(int *array, int index)
{
    return array[index];
}

void showAllEntity(const vector<int> &a, vector<int>::iterator item)
{
    if (a.end() != item) {
        
        cout << *item << endl;
        ++item;
        showAllEntity(a, item);
    }
}
