//
//  Screen.h
//  CPPPrimer
//
//  Created by Cc on 15/7/17.
//  Copyright (c) 2015年 PinguoSDK. All rights reserved.
//

#ifndef CPPPrimer_Screen_h
#define CPPPrimer_Screen_h

class Screen;

extern std::ostream& storeOn(std::ostream &, Screen &);


class Screen {
    
    friend class Window_mgr;
    friend std::ostream & storeOn(std::ostream &, Screen &);
    
public:
    
    typedef std::string::size_type pos;
//    using pos = std::string::size_type; //同上
    Screen() = default;
    explicit Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht * wd, c) {};
    char get() const {
        
        return contents[cursor];
    }
    char get(pos ht, pos wd) const;
    Screen &move(pos r, pos c);
    void some_member() const;
    
    Screen &set(char c);
    Screen &set(pos r,pos col, char ch);
    
    Screen &display(std::ostream &os);
    const Screen &display(std::ostream &os) const;
    pos size() const;
    
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
    mutable size_t access_ctr;
    
    void do_display(std::ostream &os) const;
    
};

inline char Screen::get(pos r, pos c) const
{
    pos row = r * this-> width;
    return this-> contents[row + c];
}

inline Screen & Screen::move(pos r, pos c)
{
    pos row = r * this-> width;
    this-> cursor = c + row;
    return *this;
}

inline void Screen::some_member() const
{
    ++ (this-> access_ctr);
}

inline Screen & Screen::set(char c)
{
    this-> contents[this-> cursor] = c;
    return *this;
}
inline Screen & Screen::set(pos r,pos col, char ch)
{
    this-> contents[r * (this-> width) + col] = ch;
    return *this;
}

inline Screen & Screen::display(std::ostream &os)
{
    do_display(os);
    return *this;
}

inline const Screen & Screen::display(std::ostream &os) const
{
    do_display(os);
    return *this;
}

inline void Screen::do_display(std::ostream &os) const
{
    os << this-> contents;
}

Screen::pos Screen::size() const
{
    return height * width;
}

#endif
