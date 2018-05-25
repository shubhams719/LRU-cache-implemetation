#include "LRU.h"
int main()
{
	LRU l(3);
	l.push(1);
	l.push(2);
	l.push(3);
	l.push(4);
	l.Display();
	return 0;
}
