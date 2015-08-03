//
//  Window_mgr.h
//  CPPPrimer
//
//  Created by Cc on 15/7/17.
//  Copyright (c) 2015年 PinguoSDK. All rights reserved.
//

#ifndef CPPPrimer_Window_mgr_h
#define CPPPrimer_Window_mgr_h



class Window_mgr {
    
public:
    using ScreenIndex = std::vector<Screen>::size_type;
    void clear(ScreenIndex i);
    ScreenIndex addScreen(const Screen &s);
    
private:
    std::vector<Screen> screens { Screen(24, 80, ' ')};
    
};



void Window_mgr::clear(ScreenIndex i)
{
    Screen &s = screens[i];
    s.contents = string(s.height * s.width, ' ');
}

Window_mgr::ScreenIndex Window_mgr::addScreen(const Screen &s)
{
    screens.push_back(s);
    return screens.size() - 1;
}


#endif
