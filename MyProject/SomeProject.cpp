#include <iostream>
using namespace std;

class Car
{
private:
	char* model;
	char* country;
	char* color;
	int year;
	double price;

public:
	Car()
	{

	}
	~Car()
	{
		if (model != nullptr)
		{
			delete[] model;
		}

	}

};

int main()
{

}