//
//  main.cpp
//  CPPPrimer2
//
//  Created by Cc on 15/7/27.
//  Copyright (c) 2015年 PinguoSDK. All rights reserved.
//

#include "mHeader.h"

//Linux   Ctrl+D 结束cin输入

using namespace std;
using namespace std::placeholders;

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
//bool tfind(const vector<int> &a, int b);
//const vector<int>::const_iterator ttfind(const vector<int> &a, int b);
//void insertSS(forward_list<string> &li,const string a,const string b);
//bool isShorter(const string &s1, const string &s2);
//void biggies(vector<string> &words, vector<string>::size_type sz);
//void counts(vector<string> &words, vector<string>::size_type sz);

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

//    list<string> lst;
//    string word;
//    auto ite = lst.begin();
//    while (cin >> word) {
//        
//        ite = lst.insert(ite, word);
//    }
//
//    for (auto a : lst) {
//        
//        cout << a << endl;
//    }
    
//    string s1 = "test2";
//    ifstream s(s1);
//    list<string> ss;
//    
//    string s2;
//    while (s >> s2) {
//        
//        ss.push_back(s2);
//    }
    

//    list<int> a1 = {1,2,3,4,5,6};
//    deque<int> a2,a3;
//    for (auto i : a1) {
//        
//        if (i % 2 == 0) {
//            
//            a2.push_back(i);
//        }
//        else {
//            
//            a3.push_back(i);
//        }
//    }
    
    
//    int some_val = -1;
//    vector<int> iv = {0,2,3,4};
//    auto start = iv.begin();
//    auto end = iv.end();
//    decltype(end) mid = start + iv.size() / 2;
//    while (start != mid)
//    {
//        if (some_val == *mid) {
//            
//            start = mid;
//        }
//        else if (some_val > *mid) {
//            
//            start = mid;
//            mid = start + (end - start) / 2;
//        }
//        else {
//            
//            end = mid;
//            mid = start + (end - start) / 2;
//        }
//    };
//    
//    iv.insert(mid + 1, some_val);
    
    
//    vector<int> c = {0,1,2,3,4,5,6,7,8,9};
//    auto val = *c.begin(), val2 = c.front();
//    auto last = c.end();
//    auto val3 = *(--last);
//    auto val4 = c.back();
//    cout << c[5] << endl;
//    cout << c.at(5) << endl;
    
//    cout << c.at(0) << endl;
//    cout << c[5] << endl;
//    cout << c.front() << endl;
//    cout << *c.begin() << endl;
    
//    auto iter = c.begin();
//    while (iter != c.end()) {
//        
//        if (*iter % 2 == 0) {
//            
//            iter = c.erase(iter);
//        }
//        else {
//            
//            iter ++;
//        }
//    }
//    auto s = c.begin();
//    auto e = c.end();
//    c.erase(e, s);
    
//    int a[] = {0,1,1,2,3,5,8,13,21,55,89};
//    vector<int> vi;
//    list<int> li;
//    for (auto &t : a) {
//        
//        vi.push_back(t);
//        li.push_back(t);
//    }
//
//    {
//        auto be = vi.begin();
//        while (be != vi.end()) {
//            
//            if (*be % 2 == 0) {
//                
//                be = vi.erase(be);
//            }
//            else {
//                
//                ++be;
//            }
//        }
//    }
//    
//    {
//        auto be = li.begin();
//        while (be != li.end()) {
//            
//            if (*be % 2 == 1) {
//                
//                be = li.erase(be);
//            }
//            else {
//            
//                ++be;
//            }
//        }
//    }
    
    
//    forward_list<int> flst = {0,1,2,3,4,5,6,7,8,9};
//    auto prev = flst.before_begin();
//    auto curr = flst.begin();
//    while (curr != flst.end()) {
//        
//        if (*curr % 2) {
//            
//            curr = flst.erase_after(prev);
//        }
//        else {
//            
//            prev = curr;
//            ++ curr;
//        }
//    }
    
//    {
//        forward_list<int> flst = {0,1,2,3,4,5,6,7,8,9};
//        auto be = flst.begin();
//        auto beB = flst.before_begin();
//        
//        while (be != flst.end()) {
//            
//            if (*be % 2 == 1) {
//                
//                be = flst.erase_after(beB);
//            }
//            else {
//                
//                beB = be;
//                ++ be;
//            }
//        }
//        
//        for( auto &a : flst) {
//            
//            cout << a << endl;
//        }
//    }
    
    
//    {
//        forward_list<string> li = {"1","2","3","4"};
//        string b = "1.5";
//        insertSS(li, "5", b);
//        
//        for( auto &a : li) {
//            
//            cout << a << endl;
//        }
//    }

    
//    {
//        vector<int > vi = {1,2,3,4,5,6,7,8,9};
//        auto iter = vi.begin();
//        while (iter != vi.end()) {
//            
//            if (*iter % 2 == 0) {
//                
//                iter = vi.erase(iter);
//            }
//            else {
//                
//                iter = vi.insert(iter, *iter);
//                iter += 2;
//            }
//        }
//    }
    
    
//    {
//        list<int> vi = {1,2,3,4,5,6,7,8,9};
//        auto iter = vi.begin();
//        while (iter != vi.end()) {
//            
//            if (*iter % 2) {
//                
//                iter = vi.insert(iter, *iter);
//                iter++;
//                iter++;
//            }
//            else {
//                
//                iter = vi.erase(iter);
//            }
//        }
//    }
    
//    {
//        forward_list<int> vi = {1,2,3,4,5,6,7,8,9};
//        auto iter = vi.begin();
//        auto bIter = vi.before_begin();
//        while (iter != vi.end()) {
//            
//            cout << *iter << endl;
//            if (*iter % 2) {
//                
//                iter = vi.insert_after(bIter, *iter);
//                iter ++;
//                iter ++;
//                bIter ++;
//                bIter ++;
//            }
//            else {
//                
//                iter = vi.erase_after(bIter);
//            }
//        }
//        
//        for (auto s : vi) {
//            
//            cout << s << endl;
//        }
//    }

//    {
//        vector<int> vi = {1,2,3,4,5,6};
//        auto iter = vi.begin();
//        while (iter != vi.end()) {
//            
//            if (*iter % 2) {
//                
//                iter = vi.insert(iter, *iter);
//                ++ iter;
//            }
//            ++ iter;
//        }
//    }
    
//    {
//        vector<int> ivec ;
//        cout << " ivec: size:" << ivec.size() << " capacity:" << ivec.capacity() << endl;
//        
//        for (int i = 0; i < 24; ++i) {
//            
//            ivec.push_back(i);
//            cout << " ivec: size:" << ivec.size() << " capacity:" << ivec.capacity() << endl;
//        }
//        
//        for (auto a : ivec) {
//            
//            ivec.pop_back();
//            ivec.shrink_to_fit();
//            cout << " ivec: size:" << ivec.size() << " capacity:" << ivec.capacity() << endl;
//            
//        }
//        cout << " ivec: size:" << ivec.size() << " capacity:" << ivec.capacity() << endl;
//    }
    
//    {
//        vector<double> vi = {1,2,3,4,5,6.2};
////        auto cnt = count(vi.begin(), vi.end(), 7);
//        auto cnt = accumulate(vi.cbegin(), vi.cend(), 0.0);
//        cout << cnt << endl;
//    }
    
//    {
//        vector<const char *> v1 = {"1", "2" , "3"};
//        vector<const char *> v2 = {"1", "2"};
//        
//        bool b = equal(v1.cbegin(), v1.cend() - 1 , v2.cbegin());
//        
//        cout << b << endl;
//    }
    
//    {
//        vector<int> vec;
//        fill_n(back_inserter(vec), 10, 0);
//    }
    
//    {
//        int a[] = {1,2,3,4,5,6,7,8,9};
//        int b[sizeof(a) / sizeof(*a)];
//        
//        auto ret = copy(begin(a), end(a), b);
//    }

//    {
//        vector<int> vec;
//        list<int> lst;
//        int i;
//        while (cin >> i) {
//            lst.push_back(i);
//        }
//        copy(lst.begin(), lst.end(), back_inserter(vec));
//    }
    
//    {
//        vector<int> vec;
////        vec.reserve(10);
//        vec.resize(10);
//        fill_n(vec.begin(), 10, 0);
//    }
    
    
//    {
//        vector<string> vec = {"1","21","122","1","32","222222"};
//        vector<string> vec1;
//        sort(vec.begin(), vec.end(), [](const string &a, const string &b) -> bool { return a.size() < b.size(); });
//        auto copy = unique_copy(vec.begin(), vec.end(), back_inserter(vec1));
//        sort(vec.begin(), vec.end());
//        auto end_unique = unique(vec.begin(), vec.end());
//        vec.erase(end_unique, vec.end());
//        sort(vec.begin(), vec.end(), isShorter);
//        stable_sort(vec.begin(), vec.end(), isShorter);
        
//        auto f = [](const string &s1, const string &s2){
//            return s1.size() < s1.size();
//        };
//
//        partition(vec.begin(), vec.end(), f);
//        biggies(vec, 3);
//        
//        auto f = [](int a, int b) { return a + b;};
//        auto n = f(4,5);
//        printf("%i",n);
        
//        counts(vec, 3);
//       auto bbb = back_inserter(vec);
//        *bbb = "tttt";
//                *bbb = "ttttt";
//        
//    }
    
//    {
//        vector<int> vv = {0,1,2,3,4,5,6,7,8,9};
//        vector<int> v1;
//        vector<int> v2;
//        list<int> v3;
//        
//        copy(vv.begin(), vv.end(), inserter(v1,v1.end()));
//        copy(vv.begin(), vv.end(), back_inserter(v2));
//        copy(vv.begin(), vv.end(), front_inserter(v3));
//    }
    
//    {
//        istream_iterator<int> int_it(cin);
//        istream_iterator<int> int_eof;
//        ifstream in("test3");
//        istream_iterator<string> str_it(in);
        
//        vector<int> vec;
//        istream_iterator<int> in_iter(cin);
//        istream_iterator<int> eof;
//        while (in_iter != eof) {
//            
//            vec.push_back(*in_iter);
//            in_iter++;
//        }
        
//        ifstream in("test3");
//        istream_iterator<string> in_iter(in), eof;
//        vector<string> vec (in_iter , eof);
        
//        for (auto s : vec)
//            cout << s <<endl;
        
//        vector<string> x = {"1","2","3"};
//        for (auto i = x.crbegin(); i != x.crend(); ++i) {
//            
//            cout << *i << endl;
//        }
//        for (auto i = x.cend(); i >= x.cbegin(); --i) {
//            if (i != x.cend()) {
//                
//                cout << *i << endl;
//            }
//        }
//    }
    
//    {
////        list<int> x = {1,2,3,0,4,5,6,7};
////        auto comma = find(x.crbegin(), x.crend(), 0);
//        vector<int> s = {0,1,2,3,4,5,6,7,8,9};
//        
//        auto b3 = find(s.cbegin(), s.cend(), 3);
//        auto b7 = find(s.cbegin(), s.cend(), 7);
//        
//        if (b3 != s.cend() && b7 != s.cend()) {
//            
//            cout << "ssss" << endl;
//        }
//        
//    }
    
//    {
//        map<string, size_t> word_count;
//        set<string> exc = {"a","b","c"};
//        string word;
//        while (cin >> word) {
//            
//            if (exc.find(word)==exc.end()) {
//            
//                ++ word_count[word];
//            }
//        }
//        
//        for (const auto &a : word_count) {
//            
//            auto b = a.first;
//            cout << b << " " << a.second << endl;
//        }
//    }
    
//    {
////        bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs);
//////        auto ddd = decltype(compareIsbn)*;
////        multiset<Sales_data, bool(*)(const Sales_data &a,const Sales_data &b)> bookstore(compareIsbn);
//        
////        multiset<string> c {"1","2","3"};
////        vector<string> v {"2"};
//        
////        copy(v.begin(), v.end(), inserter(c, c.end()));
////        copy(v.begin(), v.end(), back_inserter(c));
////        copy(c.begin(), c.end(), inserter(v, v.end()));
////        copy(c.begin(), c.end(), back_inserter(v));
//        
//        map<string, int> word_count {{"1",1},{"2",2}};
////        word_count.at("1");
//////        if (word_count["1"] == NULL) {
////        
////            word_count["1"] = 1;
//////        }
////        
////        
////        auto b = word_count.cbegin();
////        set<int> set2;
////        set2.insert({1,2,3,4});
//        
////        auto beg = word_count.lower_bound("1");
////        auto end = word_count.upper_bound("3");
////        
////        for (; beg != end; ++beg) {
////            
////            cout << beg->second << endl;
////        }
//        
////        for (auto pos = word_count.equal_range("1"); pos.first != pos.second; ++pos.first) {
////            
////            cout << pos.first->second << endl;
////        }
//        
//        
//    }
    
//    {
//        ifstream mapfile = ifstream("test1");
//        ifstream intpu = ifstream("test2");
//        
//        void word_transform(ifstream &map_file, ifstream &input);
//        word_transform(mapfile, intpu);
//    }
    
//    {
//        shared_ptr<int> p = make_shared<int>(42);
////        auto p2 = make_shared<vector<string>>();
//        auto q = p;
//        cout << p.use_count() << endl;
//    }
    
//    {
//        StrBlob b1;
//        {
//            StrBlob b2 = {"a","b"};
//            b1 = b2;
//            b2.push_back("c");
//        }
//    }

    {
        int ix = 1024, *pi = &ix, *pi2 = new int (1024);
        typedef unique_ptr<int> IntP;
        
//        IntP p0(ix);// 应该要指针
//        IntP p1(pi);// 正确
//        IntP p2(pi2);// 正确
        IntP p3(&ix);// 正确
//        IntP p4(new int (2048));// 正确
//        IntP p5(p2.get());// 2次 delete
    }
    return EXIT_SUCCESS;
}

//const string & transform(const string &s, const map<string, string> &m);
//map<string, string> buildMap(ifstream &map_file);
//void word_transform(ifstream &map_file, ifstream &input)
//{
//    auto mapFile = buildMap(map_file);
//    string text,word;
//    while (getline(input, text)) {
//        
//        bool isFirst = true;
//        istringstream stream = istringstream(text);
//        while (stream >> word) {
//            
//            if (isFirst) {
//                
//                isFirst = false;
//            }
//            else {
//                
//                cout << " ";
//            }
//            
//            cout << transform(word, mapFile);
//        }
//        
//        cout << endl;
//    }
//}
//
//map<string, string> buildMap(ifstream &map_file)
//{
//    map<string, string> mapF;
////    decltype(buildMap)* mapF;
//    string word,key;
//    while (map_file >> key && getline(map_file, word)) {
//        
////        mapF[key] = word.substr(1);
//        mapF.insert({key, word.substr(1)});
//    }
//    return mapF;
//}
//
//const string & transform(const string &s, const map<string, string> &m)
//{
//    auto mapit = m.find(s);
//    if (mapit != m.cend()) {
//        
//        return mapit->second;
//    }
//    return s;
//}

//bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs)
//{
//    return lhs.isbn() < rhs.isbn();
//}
//
//ostream &print2(ostream &os, const string &s, char c)
//{
//    return os << s << c;
//}
//
//void biggies(vector<string> &words, vector<string>::size_type sz)
//{
//    stable_sort(words.begin(), words.end(), [](const string &s1, const string &s2) {
//        return s1.size() < s2.size();
//    });
//    
//    auto wc = find_if(words.begin(), words.end(), [sz](const string &a) -> bool {
//        return a.size() >= sz;
//    });
//    
//    auto count = words.end() - wc;
//    cout << count << " " << "words" << " of length " << sz << " or longer" << endl;
////    for_each(wc, words.end(), [](const string &s) {
////        cout << s << " ";
////    });
//    for_each(wc, words.end(), bind(print2, ref(cout), _1, ' '));
//    
//    cout << endl;
//}
//
//bool check_size(const string &a, string::size_type sz)
//{
//    return a.size() >= sz;
//}
//
//void counts(vector<string> &words, vector<string>::size_type sz)
//{
//    stable_sort(words.begin()
//                , words.end()
//                , [](const string &a, const string &b) -> bool {
//
//                    return a.size() < b.size();
//                });
//    
//    auto c = count_if(words.begin()
//                      , words.end()
//                      , bind(check_size, _1, sz));
//    
//    cout << c << endl;
//}

//bool isShorter(const string &s1, const string &s2)
//{
//    return s1.size() < s2.size();
//}

//void insertSS(forward_list<string> &li,const string a,const string b)
//{
//    bool isInsert = false;
//    auto be = li.begin();
//    while (be != li.end()) {
//        
//        if (*be == a) {
//            
//            li.insert_after(be, b);
//            isInsert = true;
//            break;
//        }
//        else {
//            
//            ++ be;
//        }
//    }
//    
//}
//
//bool tfind(const vector<int> &a, int b)
//{
//    bool bRet = false;
//    {
//        for (auto e : a) {
//            
//            if (e == b) {
//                
//                bRet = true;
//                break;
//            }
//        }
//    }
//    return bRet;
//}
//
//const vector<int>::const_iterator ttfind(const vector<int> &a, int b)
//{
//    for (auto it = a.begin(); it != a.end(); ++it) {
//        
//        if (*it == b) {
//            
//            return it;
//        }
//    }
//    
//    return a.end();
//}
//
//void pluralize(size_t cnt, string &word)
//{
//    if (cnt > 1) {
//        
//        word.push_back('s');
//    }
//}
