//
//  StrBlob.cpp
//  CPPPrimer2
//
//  Created by Cc on 15/9/8.
//  Copyright (c) 2015年 PinguoSDK. All rights reserved.
//

#include "StrBlob.h"

void test_process(shared_ptr<int> ptr)
{
    shared_ptr<int> p(new int(42));
    shared_ptr<int> p2 = make_shared<int>(42);
}

StrBlob::StrBlob() : data(make_shared<vector<string>>()), test1(make_shared<string>("1")), test2("2")
{
}

StrBlob::StrBlob(initializer_list<string> il) : data(make_shared<vector<string>>(il)), test1(make_shared<string>("t1")), test2("t2")
{
}

void StrBlob::check(size_type i, const std::string &msg) const
{
    if (i >= data->size()) {
        
        throw out_of_range(msg);
    }
}

string& StrBlob::front()
{
    check(0, "front on empty StrBlob");
    return data->front();
}
const string& StrBlob::front() const
{
    check(0, "front on empty StrBlob");
    return data->front();
}

string& StrBlob::back()
{
    check(0, "back on empty StrBlob");
    return data->back();
}
const string& StrBlob::back() const
{
    check(0, "back on empty StrBlob");
    return data->back();
}

void StrBlob::pop_back()
{
    check(0, "pop_back on empty StrBlob");
    data->pop_back();
}
