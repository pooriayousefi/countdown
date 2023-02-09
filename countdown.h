
#pragma once
#include <iostream>
#include <chrono>
#include <thread>

namespace
{
	auto countdown(size_t nsec) -> void
	{
		for (int i = nsec; i >= 0; --i)
		{
			std::this_thread::sleep_for(std::chrono::seconds(1));
			std::cout << ' ' << i;
		}
	}
}
