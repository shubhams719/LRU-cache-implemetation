#include<iostream>
#include<list>
#include<unordered_map>
#include "LRU.h"

LRU::LRU(int size) :size(size)
{
}
void LRU::push(int data)
{
	if(ma.find(data) == ma.end())
	{
		if(q.size() == size)
		{
			int last = q.back();
			q.pop_back();
			ma.erase(last);
		}
	}
	else
		q.erase(ma[data]);

	q.push_front(data);
	ma[data]  = q.begin();
}

void LRU::Display()
{
	std::list<int>::iterator it;

	for(it = q.begin();it != q.end();it++)
		std::cout << (*it) << " ";
}

