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

using std::string;
using std::cout;
using std::cin;
using std::vector;
using std::endl;

int txt_size()
{
    return 1;
}

int main()
{
    std::__1::vector<int> s {1,2,3,4,5,6};
    for (auto &i : s)
    {
        i *= i;
    }
    for (auto i : s) {
        std::cout << i << std::endl;
    }
    
    std::__1::vector<int>::size_type s1 = s.size();
    
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
    
    return 0;
}
