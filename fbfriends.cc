#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "fbfriends.h"
using namespace std;

FBFriends::FBFriends()
{
    data = new Friend[5];
    capacity = 5;
    used = 0;
    current_index = 0;
}

FBFriends::~FBFriends()
{
    delete [] data;
}

FBFriends::FBFriends(const FBFriends& other)
{
    /*
    Friend *new_data;
    if(this == &other)
    {
        return;
    }

    if(capacity != other.capacity)
    {
        new_data = new Friend[other.capacity];
        data = new_data;
        capacity = other.capacity;
    }
    */

    capacity = other.capacity;
    used = other.used;
    current_index = other.current_index;
    data = new Friend[capacity];
    copy(other.data, other.data + used, data);
}

void FBFriends::operator = (const FBFriends& other)
{
    Friend *new_data;
    if(&other == this)
    {
        return;
    }

    if(capacity != other.capacity)
    {
        new_data = new Friend[other.capacity];
        data = new_data;
        capacity = other.capacity;
    }
    used = other.used;
    copy(other.data, other.data + used, data);
}

void FBFriends::start() 
{
    current_index = 0;
}

void FBFriends::advance()
{
    ++current_index;
}

bool FBFriends::is_item()
{
    current_index < used;
}

Friend FBFriends::current()
{
    return data[current_index];
}

void FBFriends::remove_current(const Friend& target)
{
    if(is_item())
    {
        for(int i = current_index; i < used; ++i)
        {
            data[i] = data[i + 1];
        }
        used--;
    }
}

void FBFriends::insert(const Friend& f)
{
    
    if(used < capacity)
    {
        data[used].set_name(f.get_name());
        data[used].set_bday(f.get_bday());
        ++used;
    }else{
        this->resize();
        this->insert(f);
    }
}

void FBFriends::attach(const Friend& f)
{
    if(used == capacity)
    {
        resize();
    }

    if(!is_item())
    {
        data[used] = f;
        used ++;
    }else{
        for(int i = used; i > current_index + 1; --i)
        {
            data[i] = data[i - 1];
        }
        data[current_index + 1] = f;
        current_index ++;
    }
}

void FBFriends::show_all(std::ostream& outs)const
{
    for(int i = 0; i < used; ++i)
    {
        outs << data[i].get_name() << endl;
    }
}

void FBFriends::bday_sort()
{
    bool done = false;
    int j;
    Friend myfriend;
    while(!done)
	{
		done = true;

		for(j = used -1; j > 0; --j)
		{
	    	if(data[j].get_bday() > data[j-1].get_bday())
			{
				done = false;
				myfriend = data[j];
				data[j] = data[j-1];
				data[j-1] = myfriend;
	   		}
		}
    }
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
    Friend myfriend;
    for(int i = 0; i < current_index; ++i)
    {
        
    }
}

void FBFriends::load(std::istream& ins)
{
    string line;
    Friend myfriend;
    while(!ins.eof())
    {
        myfriend.input(ins);        
        this->insert(myfriend);
    }
}

void FBFriends::save(std::ostream& outs)
{
    for(int current_index = 0; current_index < used; ++current_index)
    {
        this->data[current_index].output(outs);
    }
} 

void FBFriends::resize()
{
	Friend *tmp;
	tmp = new Friend[capacity+5];
	std::copy(data, data+used, tmp);
	delete [] data;
	capacity += 5;
	data = tmp;
}