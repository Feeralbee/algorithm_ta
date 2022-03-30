#include "exercise.h"


Exersice::Exersice()
{
	std::cout << "Enter exercise number: ";
	std::cin >> exercise_numder;

}

std::optional<int> Exersice::exercise_selection()
{
	if (exercise_numder == 1 || exercise_numder == 2)
		return exercise_numder;
	else
		return std::nullopt;

}
