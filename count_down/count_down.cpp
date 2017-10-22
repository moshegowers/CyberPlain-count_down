#include <iostream>
#include <thread>
#include <stdlib.h>
#include <chrono>

using namespace std::chrono_literals;

void main()
{
	for (size_t i = 12; i > 0; i--)
	{
		system("cls");
		std::cout << "Time until takeoff: " << i << '\r' << std::flush;
		std::this_thread::sleep_for(1s);
	}

	system("cls");
	for (size_t i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			std::cout << "Takeoff" << '\r' << std::flush;
		}
		else
		{
			system("cls");
		}
		std::this_thread::sleep_for(0.5s);
	}
}