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
    Friend *new_data;
    if(this == &other)
    {
        return;
    }

    if(capacity != other.capacity)
    {
        new_data = new Friend[other.capacity];
        delete [] data;
        data = new_data;
        capacity = other.capacity;
    }

    used = other.used;
    copy(other.data, other.data + used, data);
}

void FBFriends::operator = (const FBFriends& other)
{

}

void FBFriends::start() 
{

}

void FBFriends::advance()
{

}

bool FBFriends::is_item()
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
        myfriend.input(ins);        
        data[used] = myfriend;
        used++;
    }
}

void FBFriends::save(std::ostream& outs)
{
    return;
}

void FBFriends::resize()
{

}