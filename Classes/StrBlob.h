//
//  StrBlob.h
//  CPPPrimer2
//
//  Created by Cc on 15/9/8.
//  Copyright (c) 2015年 PinguoSDK. All rights reserved.
//

#ifndef __CPPPrimer2__StrBlob__
#define __CPPPrimer2__StrBlob__

#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>


using namespace std;

class StrBlob {
    
public:
    typedef std::vector<std::string>::size_type size_type;
    StrBlob();
    StrBlob(std::initializer_list<std::string> il);
    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }
    //添加和删除元素
    void push_back(const std::string &t) { data->push_back(t); }
    void pop_back();
    //元素访问
    std::string& front();
    const std::string& front() const;
    std::string& back();
    const std::string& back() const;
    
private:
    std::shared_ptr<std::vector<std::string>> data;
    std::shared_ptr<std::string> test1;
    std::string test2;
    // 如果data[i] 不合法，抛出一个异常
    void check(size_type i, const std::string &msg) const;
};



#endif /* defined(__CPPPrimer2__StrBlob__) */
