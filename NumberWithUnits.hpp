//
// Created by ori on 19/04/2021.
//
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

namespace ariel {
    class NumberWithUnits {

    private:
        double number; //int or double
        string ans;
    public:
        NumberWithUnits(double number, string ans) {
            this->number = number;
            this->ans = ans;
        }
        ~NumberWithUnits(){}
        static void read_units(ifstream &units_file);
        friend ostream &operator<<(ostream &out, const NumberWithUnits &n);
        friend istream &operator>>(istream &in, NumberWithUnits &n);
        friend NumberWithUnits operator+(const NumberWithUnits &a, const NumberWithUnits &b);
        friend NumberWithUnits operator+(const NumberWithUnits &a);
        friend NumberWithUnits operator+=(const NumberWithUnits &a, const NumberWithUnits &b);
        friend NumberWithUnits operator-(const NumberWithUnits &a, const NumberWithUnits &b); //sub


        friend NumberWithUnits operator-(const NumberWithUnits &a); //negative num

        friend NumberWithUnits operator-=(const NumberWithUnits &a, const NumberWithUnits &b);
        //second part
        friend bool operator>(const NumberWithUnits &a, const NumberWithUnits &b);


        friend bool operator>=(const NumberWithUnits &a, const NumberWithUnits &b);

        friend bool operator<(const NumberWithUnits &a, const NumberWithUnits &b);
        friend bool operator<=(const NumberWithUnits &a, const NumberWithUnits &b);

        friend bool operator==(const NumberWithUnits &a, const NumberWithUnits &b);
        friend bool operator!=(const NumberWithUnits &a, const NumberWithUnits &b);
        //third part:
        friend NumberWithUnits operator--(const NumberWithUnits &a);

        friend NumberWithUnits operator++(const NumberWithUnits &a);
        //part four:
        friend NumberWithUnits operator*(const NumberWithUnits &a, double b);
        friend NumberWithUnits operator*(double b,const NumberWithUnits &a);
    };
};



