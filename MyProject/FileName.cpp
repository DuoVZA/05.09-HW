#include <iostream>
using namespace std;

class Human // янгдюмхе мнбнцн рхою
{
private:
	char name[20];
	int age;
public:
	void Init(char n[20], int a) // Ivan, 19
	{
		strcpy_s(name, strlen(n) + 1, n);
		age = a;
	}
	void Print()
	{
		cout << "Name: " << name << "\nAge: " << age << "\n" << endl;
	}
};

int main()
{
	Human obj1;
	Human obj2;
	char name[] = "Ivan";
	char name1[] = "Alexandra";
	obj1.Init(name, 19);
	obj1.Print();
	obj2.Init(name1, 25);
	obj2.Print();
}