//
//  StrBlobPtr.h
//  CPPPrimer2
//
//  Created by Cc on 15/9/10.
//  Copyright (c) 2015年 PinguoSDK. All rights reserved.
//

#ifndef __CPPPrimer2__StrBlobPtr__
#define __CPPPrimer2__StrBlobPtr__

#include <stdio.h>
#include <vector>
#include <string>

using namespace std;

class StrBlobPtr {
    
public:
    
    
private:
    // 若检查成功，check 返回一个shared 指针
    shared_ptr<vector<string>> check(size_t, const string &) const;
    
    weak_ptr<vector<string>> wptr;
    size_t curr;
    
};

#endif /* defined(__CPPPrimer2__StrBlobPtr__) */
