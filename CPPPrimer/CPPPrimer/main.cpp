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

int main()
{
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

    vector< int > ivec;
    
    int ci ;
    
    while (cin >> ci) {
        
        ivec.push_back(ci);
    }
    
    int sum = 0;
    for (int i = 0 ; i < ivec.size() / 2; ++i) {
        
        sum = ivec[i] + ivec[ivec.size() - i - 1];
        cout << sum << endl;
    }
    if (sum != 0) {
        
        cout << sum << endl;
        sum = 0;
    }
    
    return 0;
}
