//
//  Sales_data.h
//  CPPPrimer
//
//  Created by Cc on 14/12/31.
//  Copyright (c) 2014年 PinguoSDK. All rights reserved.
//

#ifndef CPPPrimer_Sales_data_h
#define CPPPrimer_Sales_data_h


//struct Sales_data
//{
//    Sales_data() = default;
//    Sales_data(const std::string &s): bookNo(s) {}
//    Sales_data(const std::string &s, unsigned n, double p): bookNo(s), units_sold(n), revenue(p * n) {}
//    Sales_data(std::istream &is) { read(is, *this); }
//    
//    std::istream &read(std::istream &is, Sales_data &item);
//    
//    std::string isbn() const { return bookNo; }
//    Sales_data& combine(const Sales_data&);
//    double avg_price() const;
//    
//    std::string bookNo;
//    unsigned int units_sold = 0;
//    double revenue = 0.0;
//};
//
//
//
////Sales_data::Sales_data(std::istream &is)
////{
////    read(is, *this);
////}
//
//double Sales_data::avg_price() const
//{
//    if (this-> units_sold) {
//        
//        return this-> revenue / this-> units_sold;
//    }
//    else {
//        
//        return 0;
//    }
//}
//
//Sales_data& Sales_data::combine(const Sales_data &rhs)
//{
//    this-> units_sold += rhs.units_sold;
//    this-> revenue += rhs.revenue;
//    return *this;
//}
//
//Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
//{
//    Sales_data sum = lhs;
//    sum.combine(rhs);
//    return sum;
//}
//
//std::ostream &print(std::ostream &os, const Sales_data &item)
//{
//    os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
//    return os;
//}
//
//std::istream &read(std::istream &is, Sales_data &item)
//{
//    double price = 0;
//    is >> item.bookNo >> item.units_sold >> price;
//    item.revenue = price * item.units_sold;
//    return is;
//}


class Sales_data {

public:
    friend Sales_data add(const Sales_data &a, const Sales_data &b);
    
    friend std::ostream & print1(std::ostream &io, const Sales_data &data);
    
    friend std::istream & read(std::istream &is, Sales_data &data);
    

    Sales_data() {
        
        printf("Sales_data()\n");
    };
    Sales_data(const std::string &s, unsigned n, double p): bookNo(s), units_sold(n), revenue(p) {
    
        printf("Sales_data(const std::string &s, unsigned n, double p)\n");
    };
    explicit Sales_data(const std::string &s): bookNo(s) {
    
        printf("explicit Sales_data(const std::string &s)\n");
    };
    explicit Sales_data(std::istream &is) {
        
        read(is, *this);
        printf("explicit Sales_data(std::istream &is)\n");
    };
    inline std::string isbn() const;
    inline Sales_data &combine(const Sales_data &data);
    
private:
    
    inline double avg_price() const {
        
        return units_sold ? (revenue / units_sold) : 0;
    }
    
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0;
};

inline std::string Sales_data::isbn() const
{
    return bookNo;
}

inline Sales_data& Sales_data::combine(const Sales_data &data)
{
    this-> units_sold += data.units_sold;
    this-> revenue += data.revenue;
    return *this;
}

Sales_data add(const Sales_data &a, const Sales_data &b)
{
    Sales_data t = a;
    t = t.combine(b);
    return t;
}

std::istream & read(std::istream &is, Sales_data &data)
{
    double price = 0;
    is >> data.bookNo >> data.units_sold >> price;
    data.revenue = price * data.units_sold;
    return is;
}

std::ostream & print1(std::ostream &io, const Sales_data &data)
{
    io << data.isbn() << " " << data.units_sold << " " << data.revenue << " " << data.avg_price();
    return io;
}

#endif
