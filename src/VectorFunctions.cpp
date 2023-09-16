#include "ft/ft.hpp" 
#include <vector>


std::vector<int> ReadIntVector()
{
  std::vector<int> v;
  int input;

  while (std::cin >> input)
    v.push_back(input);
  return v;
}

int GetMin(std::vector<int> v)
{
	int min = 2147483647;

    for (unsigned int i = 0; i < v.size(); i++)
	{
        if (v[i] < min)
            min = v[i];
    }
  return min; 
}

int GetMax(std::vector<int> v)
{
	int max = -2147483640;

    for (unsigned int i = 0; i < v.size(); i++)
	{
        if (v[i] > max)
            max = v[i];
    }
  return max; 

}

double GetAvg(std::vector<int> v)
{
	double average = 0.0;

	for (unsigned int i = 0; i < v.size(); i++)
	{
		average += v[i];
	}
	if (average != 0 && v.size() != 0)
		average = average / v.size();

	return average; 
}


void Printer(std::vector<std::string>& names)
{
	if (names.size() != 0)
	{
		for (unsigned int i = 0; i < names.size(); i++)
		{
			std::cout << names[i] << std::endl;
		}
	}
}

void Adder(std::vector<std::string>& names)
{
	std::string input;
  	std::cout << "Enter a name:" << std::endl;
	std::cin >> input;
	names.push_back(input);
	std::cout << "Number of names in the vector:" << std::endl;
	std::cout << names.size() << std::endl;
}

void Remover(std::vector<std::string>& names)
{
	std::cout << "Removing the last element:" << std::endl;
	std::cout << names[names.size() - 1] << std::endl;
	names.pop_back();

}
