//
// Created by ori on 19/04/2021.
//
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;
#include "NumberWithUnits.hpp"
namespace ariel {
    void NumberWithUnits::read_units(ifstream &units_file){ //change

    }
    //first part
    NumberWithUnits operator+(const NumberWithUnits &a, const NumberWithUnits &b) {
     return NumberWithUnits(a.number+b.number , a.ans); //not sure
    }

    NumberWithUnits operator+(const NumberWithUnits &a) {
        return NumberWithUnits(a.number,a.ans);
    }

    NumberWithUnits operator+=(const NumberWithUnits &a, const NumberWithUnits &b) {
        return a;
    }
    NumberWithUnits operator-(const NumberWithUnits &a, const NumberWithUnits &b) { //sub
        return NumberWithUnits(a.number-b.number, a.ans);
    }

    NumberWithUnits operator-(const NumberWithUnits &a){ //negative num
        return NumberWithUnits( -a.number , a.ans);
    }
    NumberWithUnits operator-=(const NumberWithUnits &a, const NumberWithUnits &b){
        return a;
    }
    //second part
    bool operator>(const NumberWithUnits &a, const NumberWithUnits &b) {
        return true;
    }

    bool operator>=(const NumberWithUnits &a, const NumberWithUnits &b) {
        return true;
    }

    bool operator<(const NumberWithUnits &a, const NumberWithUnits &b) {
        return true;
    }
    bool operator<=(const NumberWithUnits &a, const NumberWithUnits &b) {
        return true;
    }

    bool operator==(const NumberWithUnits &a, const NumberWithUnits &b){
        return true;
    }
    bool operator!=(const NumberWithUnits &a, const NumberWithUnits &b){
        return true;
    }
    //third part:
    NumberWithUnits operator--(const NumberWithUnits &a){
        return a;
    }
    NumberWithUnits operator++(const NumberWithUnits &a){
        return a;
    }
    //part four:
    NumberWithUnits operator*(const NumberWithUnits &a, double b){
        return NumberWithUnits(a.number*b,a.ans);
    }
    NumberWithUnits operator*( double b, const NumberWithUnits &a){
        return NumberWithUnits(a.number*b,a.ans);
    }
//    NumberWithUnits operator*=(){
//        return NumberWithUnits();
//    }
    ostream &operator<<(ostream &out, const NumberWithUnits &n){
        out <<"the number is:" << n.number << "the number type is:" << n.ans << endl;
        return out;
    }
    istream &operator>>(istream &in, NumberWithUnits &n){
        string s;
        return in >> n.number >> s >> n.ans;
    }
};