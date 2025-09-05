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
	Car(const char *ml, const char *cntr, const char *clr, int yr, double prc)
	{
		model = new char[strlen(ml) + 1];
		strcpy_s(model, strlen(ml) + 1, ml);

		country = new char[strlen(cntr) + 1];
		strcpy_s(country, strlen(cntr) + 1, cntr);

		color = new char[strlen(clr) + 1];
		strcpy_s(color, strlen(clr) + 1, clr);

		year = yr;
		price = prc;
	}
	~Car()
	{
		if (model != nullptr)
		{
			delete[] model;
		}
		if (country != nullptr)
		{
			delete[] country;
		}
		if (color != nullptr)
		{
			delete[] color;
		}
	}
	void Init(const char* ml, const char* cntr, const char* clr, int yr, double prc)
	{
		if (model != nullptr)
		{
			delete[] model;
		}
		model = new char[strlen(ml) + 1];
		strcpy_s(model, strlen(ml) + 1, ml);

		if (country != nullptr)
		{
			delete[] country;
		}
		country = new char[strlen(cntr) + 1];
		strcpy_s(country, strlen(cntr) + 1, cntr);

		if (color != nullptr)
		{
			delete[] color;
		}
		color = new char[strlen(clr) + 1];
		strcpy_s(color, strlen(clr) + 1, clr);

		year = yr;
		price = prc;
	}
	void EnterInfo()
	{

	}
	void Print()
	{
		cout << "______________________" << "\nCar: " << model << "\nCountry: " << country << "\nColor: " << color << "\nYear: " << year << "\nPrice: " << price << "\n______________________" << endl;
	}
};

int main()
{
	Car car1;
	car1.
}