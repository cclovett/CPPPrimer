//
//  main.cpp
//  CPPPrimer2
//
//  Created by Cc on 15/7/27.
//  Copyright (c) 2015年 PinguoSDK. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <list>
#include <deque>
#include <string>
#include <ostream>
#include <sstream>
#include "Sales_data.h"
#include "PersonInfo.h"
#include "noDefault.h"

//Linux   Ctrl+D 结束cin输入

using namespace std;

//istream& func8_1_2(istream &io)
//{
//    auto old_state = io.rdstate();
//    string s;
//    while (io >> s) {
//        
//        cout << s;
//    }
//    
//    cout << s << endl;
//    
//    io.setstate(old_state);
//    return io;
//}
bool tfind(const vector<int> &a, int b);
const vector<int>::const_iterator ttfind(const vector<int> &a, int b);
int main(int argc, const char * argv[])
{
//    func8_1_2(cin);
    
//    string ifile;
//    ifstream in(ifile);
//    vector<string> vec;

//    ofstream out;
//    out.open("scratchpad");
//    out.close();
//    out.open("precious", ofstream::app);
//    out.close();

//    for (unsigned int i = 10; i >= 0; --i) {
//        cout << i << endl;
//    }
//    cout << sizeof(void *) << endl;
    
    
//    ifstream input("precious");
//    ofstream output("scratchpad");
//    
//    Sales_data total;
//    if (read(input, total)) {
//        
//        Sales_data trans;
//        while (read(input, trans)) {
//            
//            if (total.isbn() == trans.isbn()) {
//                
//                total.combine(trans);
//            }
//            else {
//                
//                print1(output, total) << endl;
//                total = trans;
//            }
//        }
//        print1(output, total) << endl;
//    }
//    else {
//        
//        cerr << "No data?!" << endl;
//    }
    
//    ifstream input("test1");
//    
//    string line, word;
//    vector<PersonInfo> people;
//    istringstream record;
//    while (getline(input, line)) {
//        
//        PersonInfo info;
//        record = istringstream(line);
//        record >> info.name;
//        while (record >> word) {
//            
//            info.phones.push_back(word);
//        }
//        people.push_back(info);
//    }
//    
//    input.close();

//    vector<vector<noDefault> > a;
//    vector<noDefault> v1(10, noDefault(1));
    
//    vector<int> a = {1,2,3,4,5,6,7};
////    bool bRet = tfind(a, 9);
////    cout << bRet << endl;
//    decltype(a)::const_iterator st = ttfind(a, 3);
//    cout << *st << endl;
//    st ++ ;
//    cout << *st << endl;
//    
//    list<int > lst1;
//    list<int >::iterator iter1 = lst1.begin(),
//                         iter2 = lst1.end();
//    
//    while (iter1 != iter2) {
//        
//        
//    }
    
//    list<int> a = {1,2,3};
//    vector<double> dd(a.begin(),a.end());
//    
//    vector<int> b = {1,2,3};
//    vector<double> ee(b.cbegin(),b.cend());
    
//    string s("asvsfsder");
//    
//    for (auto a : s) {
//        
//        cout << a << endl;
//    }

//    vector<string> slist ;
//    vector<string> v = {"1","2","3","4"};
//    
//    slist.insert(slist.begin(), v.begin(), v.end());
//    slist.insert(slist.end(), {"123"});
//    
//    for (auto a : slist) {
//        
//        cout << a << endl;
//    }

    vector<string> lst;
    string word;
    auto ite = lst.begin();
    while (cin >> word) {
        
        ite = lst.insert(ite, word);
    }
    
    return EXIT_SUCCESS;
}

bool tfind(const vector<int> &a, int b)
{
    bool bRet = false;
    {
        for (auto e : a) {
            
            if (e == b) {
                
                bRet = true;
                break;
            }
        }
    }
    return bRet;
}

const vector<int>::const_iterator ttfind(const vector<int> &a, int b)
{
    for (auto it = a.begin(); it != a.end(); ++it) {
        
        if (*it == b) {
            
            return it;
        }
    }
    
    return a.end();
}

void pluralize(size_t cnt, string &word)
{
    if (cnt > 1) {
        
        word.push_back('s');
    }
}
