//
// Created by ori on 19/04/2021.
//
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "doctest.h"
#include "NumberWithUnits.hpp"
using namespace std;
using namespace ariel;

ifstream units_file{"units.txt"};
TEST_CASE("first test") {
    NumberWithUnits::read_units(units_file);
    NumberWithUnits a{2, "km"};
    CHECK(a == NumberWithUnits{3, "km"});
    CHECK(a == NumberWithUnits{4, "km"});
    CHECK(a == NumberWithUnits{5, "km"});
    CHECK(--a == NumberWithUnits{6, "km"});
    CHECK(++a == NumberWithUnits{10.0, "km"});
    CHECK(-a == NumberWithUnits{15, "km"});
}
TEST_CASE("second test"){
    NumberWithUnits::read_units(units_file);
    NumberWithUnits a{2, "km"};
    NumberWithUnits b{10, "km"};
    CHECK(a+b ==  NumberWithUnits{4,"km"});
    CHECK(a-b ==  NumberWithUnits{6,"km"});
    CHECK(a ==  NumberWithUnits{8,"km"});
    CHECK(b ==  NumberWithUnits{19,"km"});
    CHECK(b-a ==  NumberWithUnits{3,"km"});
    CHECK(a*2 ==  NumberWithUnits{12,"km"});
    CHECK(3*b ==  NumberWithUnits{30,"km"});
}
TEST_CASE("third test"){
    NumberWithUnits::read_units(units_file);
    NumberWithUnits a{15, "km"};
    NumberWithUnits b{25, "km"};
    CHECK((a>b) == true);
    CHECK((a<b) == true);
    CHECK((a==b) == true);
    CHECK((a>=b) == true);
    CHECK((a<=b) == true);
    CHECK((a!=b) == true);
    CHECK((b==a) == true);
}
