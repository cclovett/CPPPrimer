//
//  Y.h
//  CPPPrimer
//
//  Created by Cc on 15/7/18.
//  Copyright (c) 2015年 PinguoSDK. All rights reserved.
//

#ifndef CPPPrimer_Y_h
#define CPPPrimer_Y_h

class NoDefault {
    
public:
    NoDefault() {};
    NoDefault(int i) {};
    
};

class C {
    
public:
    C();
    
};


class Debug {
    
public:
    constexpr Debug(bool b = true) : hw(b), io(b), other(b) {}
    constexpr Debug(bool h, bool i, bool o): hw(h), io(i), other(o) {}
    
    constexpr bool any() { return hw || io || other; }

    void set_io(bool b) {io = b;}
    void set_hw(bool b) {hw = b;}
    void set_other(bool b) {other = b;}
    
private:
    bool hw;
    bool io;
    bool other;
    
};


class Account {
    
public:
    void calculate() { amount += amount * interestRate; }
    static double rate() { return interestRate; }
    static void rate(double);
    
private:
    std::string owner;
    double amount;
    static double interestRate;
    static double initRate();
};

#endif
