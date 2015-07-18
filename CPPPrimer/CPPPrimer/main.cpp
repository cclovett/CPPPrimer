//
//  main.cpp
//  CPPPrimer
//
//  Created by Cc on 14/12/12.
//  Copyright (c) 2014年 PinguoSDK. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <cassert>
#include "Sales_data.h"
#include "Sales_item.h"
#include "Chapter6.h"
#include "Person.h"
#include "Screen.h"
#include "Window_mgr.h"

using namespace std;

using std::string;
using std::cout;
using std::cin;
using std::vector;
using std::endl;
using std::begin;
using std::end;

//int fact (int val);
//
//int txt_size()
//{
//    return 1;
//}

//#define _ASSERT(x) if (!(x)) __asm {int 3};

int main(int argc, char *argv[])
{
//    vector<int> s {1,2,3,4,5,6};
//    for (auto &i : s)
//    {
//        i *= i;
//    }
//    for (auto i : s) {
//        cout << i << endl;
//    }
//    
//    vector<int>::size_type s1 = s.size();
    
//    int arr[10][20][30] = {0};
//    int ia[3][4] = {0};
//    
//    for (int (*p)[4] = begin(ia); p != end(ia); ++p) {
//        
//        for (int *q = begin(*p); q != end(*p); ++q) {
//            
//            cout << *q << endl;
//        }
//    }
//    
//    for (int i = 0; i < 3; ++i) {
//        
//        for (int j = 0; j < 4; ++j) {
//            
//            cout << ia[i][j] << endl;
//        }
//    }
    
//    unsigned int ia[10];
    
//    vector<int> ia = {0,1,2,3,4,5,6,7,8,9};
//    decltype(ia) ia2;
//    
//    for (auto begin = ia.cbegin(); begin != ia.cend(); ++begin) {
//        
//        int s = *begin;
//        ia2.push_back(s);
//    }
    
//    constexpr size_t array_size = 10;
//    int ia[array_size];
//    int ia2[array_size];
//    for (size_t ix = 0; ix < array_size; ++ix) {
//        ia[ix] = (int)ix;
//        ia2[ix] = ia[ix];
//    }
    
//    int x = 1024;
//    unsigned int buf_size = 1024;
//    int ia[buf_size];
//    int ia1[ 4 * 5 - 4];
//    int ia2[txt_size()];
    
//    int arr[10];
//    int *ptrs[10];
//    int (*Parray)[10] = &arr;
//    int (&arrRef)[10] = arr;
//    
//    int *(&arry)[10] = ptrs;
//    
//    cout << "" << endl;
    
//    vector<int> v{0,1,2,3,4,5,5,6,7,8,9,10};
//    auto begin = v.cbegin();
//    auto end = v.cend();
//    
//    
//    for (decltype(end-begin) i = 0; i < (end - begin) / 2; ++i) {
//        
//        auto a = *(begin + i);
//        auto b = *(end - i - 1);
//        if (begin + i == end - i - 1) {
//            b = 0;
//        }
//        auto mid = (begin - end);
//        cout << a+b << endl;
//    }
    
//    vector<int> v{0,1,2,3,4,5,6,7,8,9};
//
//    int sought = 6;
//    
//    auto begin = v.cbegin();
//    auto end =  v.cend();
//    auto mid = begin + ((end - begin) / 2);
//    do {
//        
//        if (sought > *mid) {
//            
//            begin = mid;
//        }
//        else {
//            end = mid;
//        }
//        
//        mid = begin + ((end - begin) / 2);
//        
//    } while (mid != end && sought != *mid);
//    
//    cout << *mid << endl;
    
//    string s("some thing");
//    
//    for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it) {
//        *it = toupper(*it);
//    }
//    
//    cout << s << endl;
    
//    vector< string > string_vec;
//    
//    string tt ;
//    
//    while (cin >> tt) {
//    
//        string_vec.push_back(tt);
//    }
//    
//    for (auto &x : string_vec) {
//        
//        for (auto &s : x) {
//            
//            if (!isupper(s)) {
//                
//                s = toupper(s);
//            }
//        }
//        
//        cout << x << endl;
//    }

//    vector< int > ivec;
//    
//    int ci ;
//    
//    while (cin >> ci) {
//        
//        ivec.push_back(ci);
//    }
//    
//    int sum = 0;
//    for (int i = 0 ; i < ivec.size() / 2; ++i) {
//        
//        sum = ivec[i] + ivec[ivec.size() - i - 1];
//        cout << sum << endl;
//    }
//    if (sum != 0) {
//        
//        cout << sum << endl;
//        sum = 0;
//    }
    
//    std::__1::string s1 = "a string", *p = &s1;
//    auto n = s1.size();
//    
//    n = (*p).size();
//    n = p -> size();

//    vector<int> x = {0,1,2,3,4,5,6,7,8,9};
//    for (auto &p : x) {
//        
//        p = (p % 2 == 0) ? (p) : (p * 2);
//        
//        cout << p << endl;
//    }

//    int grade;
//    cin >> grade;
//    
//    string finalgrade = grade < 60 ? "fail" : ( grade < 75 ? "low pass" : ( grade < 90 ? "pass" : "high pass" ) );
//    
//    cout << finalgrade << endl;

//    string s = "word";
//    
//    string pl = s + (s[s.size() - 1] == 's' ? "" : "s");
//    unsigned long sss = 0;
//    
//    sss |= 1UL << 27;
//    
//    cout << sss << endl;
//    
//    sss &= (~(1UL << 27));
//    
//    cout << sss << endl;
    
//    char q = 'q';
//    q = q << 6;
//    cout << q << endl;

//    unsigned long u11 = 3, u12 = 7;
//    unsigned long x = u11 & u12;
//    unsigned long x1 = u11 && u12;
//    unsigned long x2 = u11 | u12;
//    unsigned long x3 = u11 || u12;

//    Sales_data data, *p;
//    cout <<  sizeof(Sales_data) << sizeof Sales_data::revenue  <<  endl;

//    int x[10]; int *p = x;
//    cout << sizeof(x)/sizeof(*x) << endl;
//    cout << sizeof(p)/sizeof(*p) << endl;

//    vector<int> ivec = {0,1,2,3,4,5};
//    vector<int>::size_type cnt = ivec.size();
//    
//    for (vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--) {
//        
//        ivec[ix] = (int)cnt;
//        cout << ivec[ix] << endl;
//    }

//    string xxx = string("sssss");
//    
//    int i;
//    double d;
//    const string *ps = &xxx;
//    char *pc;
//    void *pv;
    
    
////    pv = (void *)ps;
//    string *pss = const_cast<string*>(ps);
//    pv = reinterpret_cast<void *>(pss);
    
////    i = int(*pc);
//    i = static_cast<int>(*pc);
    
////    pv = &d;
//    pv = reinterpret_cast<void *>(&d);
    
////    pc = (char *)pv;
//    pc = reinterpret_cast<char *>(pv);

//    string s = "sssss";
//    string::iterator iter = s.begin();
//    while (iter != s.end()) {
//        
//        iter ++;
//    }
    
//    string word = "xsa";
//    while (bool status = find("word")) {
//        
//    }
//    char ch = getVal();lll
//    vector<int> a = {0,1,1,2};
//    vector<int> b = {0,1,1,2,3};
//    
//    bool bRet = true;
//    vector<int> tmp = a.size() < b.size() ? a : b;
//    for (auto obj : tmp) {
//        
//        
//    }
//    
//    if (bRet) {
//        
//        cout << "ok" << endl;
//    }
//    else {
//        
//        cout<<"failed"<<endl;
//    }

//    string a,b;
//    do {
//        
//        if (a.size() > 0 && b.size() > 0) {
//
//            cout << ((a.size() < b.size()) ? a : b) << endl;
//        }
//        
//    } while (cin >> a >> b);

//    Sales_item item1,item2;
//    while (cin >> item1 >> item2) {
//        
//        try {
//            
//            if (item1.isbn() != item2.isbn()) {
//                
//                throw runtime_error("Data must refer to same ISBN!");
//            }
//            else {
//                
//                cout << item1 + item2 << endl;
//            }
//        } catch (runtime_error err) {
//            
//            cout << err.what() << "\nTry Again? Enter 'y' or 'n'" << endl;
//            char c;
//            cin >> c;
//            if (!cin || c == 'n') {
//                break;
//            }
//        }
//    }
    
    
//    int a,b;
//    cin >> a >> b;
//    if (b == 0) {
//        assert(b != 0);
//        throw runtime_error("ddd");
//    }
//    cout << a / b << endl;
    
//    int a,b;
//    cin >> a >> b;
//    ccJiaoHuan(a, b);
//    cout << a << " " << b << endl;

//    const int ci = 42;
//    int i = ci;
//     int  *const p = &i;
//    
////    p = &ci;
//    
//    *p = 1;
    
//    int i = 1;
//    int j = 2;
//    
//    int *p1 = &i;
//    int *p2 = &j;
//    
////    auto a = &p1;
//    
//    ccJiaoHuanZhiZhen(*p1, *p2);
    
//    cout << p1 << "\n" << p2 << endl;

//    initializer_list<int> a = {1,2,3,4,5};
    
//    int b = ccJiSuanHe1(a);
    
//    cout << b << endl;

//    initializer_list<string> a = {"1232", "fdsfs" , "ssss"};
//    error_msg(a);
    
    
//    string a("a value");
//    char &s = get_val(a, 0);
//    s = 'A';
//    cout << a << endl;
    
//    int a = factorial(5);

//    int a[10];
//    for (int i = 0; i != 10; ++i) {
//        
//        get(a,i) = i;
//    }
    
//    vector<int> a {1,2,3,4,5,6};
//    
//    showAllEntity(a, a.begin());

//    string a = "aaa",b = "bb";
//    
//    string s = shorterString(a, b);
//    string s;
//    while (cin >> s && s != "12") {
//        
//    }
//    assert(cin);
    
//    void f();
//    void f(int);
//    void f(int,int);
//    void f(double, double = 3.14);
//    
//    f(42,0.2);

//    auto f1(int) -> int (*)(int *, int);//声明
//    
//    int ss = 2,*p = &ss;
//
////    int(*s)(int*,int) = f1(0);
//    
//    auto s = f1(0);
//    
//    int b = s(p,5);
//    
//    cout << b <<endl;

//    string::size_type sumLength(const string&, const string&);
//    string::size_type largerLength(const string&, const string&);
//    
//    decltype(sumLength) *getFcn(const string &);

//    int add(int, int);
//    
//    vector<int(*)(int,int)> aa;
//    
//    int (*ff)(int,int);
//    ff = add;
//    aa.push_back(add);
    
//    Sales_data total;
//    if (read(cin, total)) {
//    
//        Sales_data trans;
//        while (read(cin, trans)) {
//            
//            if (total.bookNo == trans.bookNo) {
//                
//                
//            }
//        }
//    }
    void sa(Person a);
    
    {
        Person a = Person("name","adderss");
        vector<Person> sb;
        sb.push_back(a);
        
        sa(a);
    }
    
    Screen s1 = Screen(5, 5, ' ');

    s1.move(4, 0).set('#').display(cout);
    cout << "\n";
    s1.display(cout);
    cout << "\n" << endl;
    
    printf("111");
    return EXIT_SUCCESS;
}

void sa(Person a)
{
    a.strAddress = "sb";
    print(cout, a);
    cout << endl;
}
//int add(int , int)
//{
//    return 0;
//}
//
//int s2(int *a,int b)
//{
//    return *a * b;
//}
//
//auto f1(int a) -> int (*)(int *a, int b)
//{
//    return s2;
//}


//int (*func(int i))[10]
//{
//    return nullptr;
//}
//int odd[] = {1,3,5,7,9};
//int even[] = {0,2,4,6,8};
//decltype(odd) *arrPtr(int i)
//{
//    return i % 2 ? &odd : &even;
//}
//auto arrPtr2(int i) -> int(*)[5]
//{
//    return i % 2 ? &odd : &even;
//}
//int (*arrPtr3(int i)) [5]
//{
//    return i % 2 ? &odd : &even;
//}
//auto func(int i) -> int(*)[10]
//{
//    return nullptr;
//}