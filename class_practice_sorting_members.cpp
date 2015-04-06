// Consolearrpplication1.cpp : 定義主控台應用程式的進入點。
//

/*class practice: for sorting class member*/

#include "stdafx.h"
#include <iostream>

class myclass
{
public:
	void set_value(int x)
	{
		value = x;
	}
	int show_value()
	{
		return value;
	}
private:
	int value;
};


int main()
{
	myclass arr[8], temp;
	int n = sizeof(arr) / sizeof(myclass);

	for (int i = 0; i < n; i++)
	{
		arr[i].set_value(i);
	}

	temp = arr[3];
	arr[3] = arr[5];
	arr[5] = temp;

	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i].show_value() << " ";
	}
	std::cout << std::endl;

}