#include<iostream>
#include<list>
#include<unordered_map>
class LRU
{
	int size;
	std::list<int> q;
	std::unordered_map<int,std::list<int>::iterator> ma;
	public:
	LRU(int size);
	void push(int data);
	void Display();
};

