//
//  X.h
//  CPPPrimer
//
//  Created by Cc on 15/7/18.
//  Copyright (c) 2015年 PinguoSDK. All rights reserved.
//

#ifndef CPPPrimer_X_h
#define CPPPrimer_X_h

typedef string Type;
Type initVal()
{
    return "C";
};

class Exercise {
public:
    typedef double Type;
    
    Exercise(std::istream &io);
    Exercise(Type s);
    Exercise() : Exercise(5.0) {};
    
    Type setVal(Type param);
    Type initVal() {
        return 0;
    };
private:
    int val;
};

Exercise::Type Exercise::setVal(Exercise::Type param)
{
    string a = ::initVal();
    this->val = param + initVal();
    return this->val;
}

Exercise::Exercise(std::istream &io)
{
    io >> val;
}


//class ConstRef {
//    
//public:
//    ConstRef(int ii);
//    
//private:
//    int i;
//    const int ci;
//    int &ri;
//    
//};

#endif
