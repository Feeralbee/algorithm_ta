#pragma once
#include <iostream>
#include <string>
#include <optional>

class Two
{
private:
	int cell_value;
public:
	Two();
	void scan(int i, int j);
	void exercise_two();
	std::optional<std::string> checking_for_composite_number(int index, int cell_value);

};