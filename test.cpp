
#include "countdown.h"

auto main() -> int
{
	try
	{
		countdown(7);
		countdown(13);
		return EXIT_SUCCESS;
	}
	catch (const std::exception& xxx)
	{
		std::cerr << xxx.what() << std::endl;
		return EXIT_FAILURE;
	}
}
