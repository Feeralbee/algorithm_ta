#include "one.h"

One::One()
{
	m = rand() % 100;
}

void One::input_limit()
{
	std::cout << "Enter value p: ";
	std::cin >> p;
	std::cout << "You can pull from 1 to " << p << " matches" << std::endl;
}

void One::exercise_one()
{
	input_limit();
	for (;;)
	{
		int user_matches;
		for (;;)
		{
			std::cout << "Enter value: ";
			std::cin >> user_matches;
			if (user_matches <= p)
				break;
			std::cout << "Enter invalid value. Repeat: ";
		}
		m = m - user_matches;
		if (m <= 0)
		{
			std::cout << "You lose!";
			break;
		}
		m -= ((m - 1) % 4);
		if (m <= 0)
		{
			std::cout << "You win!";
			break;
		}
	}
}
