#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "friend.h"

using namespace std;

Friend::Friend()
{

}

void Friend::set_name(const std::string& sn)
{
    this->name = sn;
}

std::string Friend::get_name()const
{
    return this->name;
}


Date Friend::get_bday()const
{
    return this->bday;
}


bool Friend::operator == (const Friend& other)const
{
    return (*this == other);
}


bool Friend::operator != (const Friend& other)const
{
    return !(*this == other);
}


void Friend::input(std::istream& ins)
{
    string line;

    getline(ins, line);
        this->name = line;

}


void Friend::output(std::ostream& outs)const
{
    outs << get_name() << endl;
    outs << get_bday() << endl;
}


std::istream& operator >> (std::istream& ins, Friend& f)
{
    string line;

    cout << "-Please enter in friend's name: ";
    getline(ins, line);
        f.set_name(line);

    return ins;
}


std::ostream& operator << (std::ostream& outs, const Friend& f)
{
    outs << f.get_name() << endl;
    outs << f.get_bday() << endl;

    return outs;
}
