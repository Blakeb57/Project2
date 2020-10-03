#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "fbfriends.h"
using namespace std;

FBFriends::FBFriends()
{

}

FBFriends::~FBFriends()
{
    delete [] data;
}

FBFriends::FBFriends(const FBFriends& other)
{

}

void FBFriends::operator = (const FBFriends& other)
{

}

void FBFriends::start()
{

}

void FBFriends::advance();
{

}

bool FBFrieends::is_item()
{

}

Friend FBFriends::current()
{

}

void FBFriends::remove_current()
{

}

void FBFriends::insert(const Friend& f)
{
    if(used < capacity)
    {
                                            //fill in the rest of this if statement
    }
}

void FBFriends::attach(const Friend& f)
{

}

void FBFriends::show_all(std::ostream& outs)const
{
    for(int i = 0; i < used; ++i)
    {
        outs << Friend *data << endl;
    }
    
}

void FBFriends::bday_sort()
{

}

Friend FBFriends::find_friend(const std::string& name)const
{
    Friend myfriend;
    for(int i = 0; i < used; ++i)
    {
        if(name == Friend *data.get_name())
        {
            cout << Friend *data:
            //return Friend *data;
        }
    }
    cout << "-Friend could not be found. " << endl;
    return myfriend;
}

bool FBFriends::is_friend(const Friend& f)const
{

}

void FBFriends::load(std::istream& ins)
{
    string line;
    Friend myfriend;
    while(!ins.eof())
    {
        myfriend.input(ins);        //finsih inside of the while loop

    }
}

void FBFriends::save(std::ostream& outs)
{
    return;
}

void FBFriends::resize()
{

}