/*****************************************************
   This class is a container that holds Friends of the 
   class Friend. It uses an internal iterator to give the
   application the ability to order the container as well
   as access to the elements in the container.
   Because it uses dynamic memory it needs to have the Big3.
     John Dolan		Spring 2014	Ohio University
*********************************************************/
#include<ctime>
#include <iostream>
#include <string>
#include <fstream>
#include<iostream>
#include "friend.h"
using namespace std;
#ifndef FBFRIENDS_H
#define FBFRIENDS_H

class FBFriends
{
    public:

		FBFriends();													//done

		//The functions known as the Big 3
		~FBFriends();													//done
		FBFriends(const FBFriends& other);								//done
		void operator = (const FBFriends& other);

		// Functions for the internal iterator
		void start();
		void advance();
		bool is_item();
		Friend current();
		void remove_current(const Friend& target);
		void insert(const Friend& f);									//done
		void attach(const Friend& f);
		void show_all(std::ostream& outs)const;							//done
		void bday_sort();
		Friend find_friend(const std::string& name)const;				//done
		bool is_friend(const Friend& f) const;
		void load(std::istream& ins);									//done
		void save(std::ostream& outs);									//done

	private:
		void resize(); // increases the capacity of the container by 5
		Friend *data;
		int used;
		int capacity;
		int current_index;
};


#endif
