#pragma once
#include <optional>
#include <iostream>


class Exersice
{
private:
	int exercise_numder;
public:
	Exersice();
	std::optional<int> exercise_selection();
};
