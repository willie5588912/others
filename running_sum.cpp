// Consolearrpplication1.cpp : 定義主控台應用程式的進入點。
//

/*running sum*/

#include "stdafx.h"
#include <iostream>


int main()
{
	int sum = 0, input;
	while (1)
	{
		std::cin >> input;
		if (input != 0)
			sum = sum + input;
		else
		{
			std::cout << "The running sum is: " << sum << std::endl;
			break;
		}
	}
}