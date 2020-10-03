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

std::string get_name()const
{
    return name;
}


Date Friend::get_bday()const
{
    return Date;
}


bool Friend::operator == (const Friend& other)const
{
    return 1;
}


bool Friend::operator != (const Friend& other)const
{
    return 1;
}


void Friend::input(std::istream& ins)
{
    string line;

    getline(ins, line);
        set_name(line);

    return ins;
}


void Friend::output(std::ostream& outs)
{
    outs << get_name() << endl;
    outs << get_bday() << endl;
}


std::istream& operator >> (std::istream& ins, Friend& f)
{
    string line

    cout << "-Please enter in friend's name: ";
    getline(ins, line);
        f.set_name(line);

    return ins;
}


std::ostream& operator << (std::ostream& outs, const Friends& f)
{
    outs << f.get_name() << endl;
    outs << f.get_bday() << endl;

    return outs;
}
