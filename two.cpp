#include "two.h"


Two::Two()
{
	cell_value = 0;
}

void Two::exercise_two()
{
	const int row = 10;
	const int string = 10;
	int pole[row][string];
	for (int i = 0; i < string; i++)
	{
		for (int j = 0; j < row; j++)
		{
			cell_value++;
			pole[i][j] = cell_value;
			if (cell_value == 1 || cell_value == 2 || cell_value == 3)
			{
				std::cout << i << " " << j << "-" << cell_value << std::endl;
			}
			else
			{
				scan(i, j);
			}
		}
	}

}

void Two::scan(int i, int j)
{
	int index = 2;
	
		if (checking_for_composite_number(index, cell_value) == std::nullopt)
		{
			std::cout << i << " " << j << " - " << cell_value << std::endl;
		}
		index++;
}

std::optional<std::string> Two::checking_for_composite_number(int index, int cell_value)
{
	while (index <= (cell_value / 2))
	{
		if ((cell_value % index) == 0)
		{
			return "composite_number";
		}
	}
	return std::nullopt;
}
