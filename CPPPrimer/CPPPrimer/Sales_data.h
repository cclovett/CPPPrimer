//
//  Sales_data.h
//  CPPPrimer
//
//  Created by Cc on 14/12/31.
//  Copyright (c) 2014年 PinguoSDK. All rights reserved.
//

#ifndef CPPPrimer_Sales_data_h
#define CPPPrimer_Sales_data_h

struct Sales_data
{
    std::string bookNo;
    unsigned int units_sold = 0;
    double revenue = 0.0;
};

#endif
