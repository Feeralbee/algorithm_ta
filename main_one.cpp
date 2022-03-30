#include "one.h"
#include "two.h"
#include "exercise.h"


#include <iostream>
#include <cstdlib>



void output_notification_about_error()
{
	std::cout << "Enter invalid value!" << std::endl;
}

int main()
{
	Exersice obj;
	auto exercise_number = obj.exercise_selection();
	if (exercise_number == 1)
	{
		One data;
		data.exercise_one();
	}
	else if (exercise_number == 2)
	{
		Two data;
		data.exercise_two();
	}
	else if (exercise_number == std::nullopt)
		output_notification_about_error();
	return 0;
}