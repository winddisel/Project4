#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person
{
public:
	
	void Print();
	Person();
	~Person();

	void write()
	{
		cout << "Please insert name->";
		cin >> name;
		cout << "Please insert age>";
		cin >> age;
		cout << "Please insert 1 for Man, or 0 for woman->";
		cin >> man;

		cout << "Please insert phone>";
		cin >> phone;
	}

private:
	char *name;
	int age;
	bool man;
	char *phone;
	int count;
};

void Person::Print()
{
	cout << endl;
	cout << "Name: " << name << endl;
	cout << "Aage: " << age << endl;
	cout << "Man: "<<man<<endl;
	cout << "Phone number: " << phone << endl;
}

Person::Person()
{
	name = new char[10];
	const char* iname;
	iname = __func__;
	name = strcpy(name, iname);
	age = 16;
	man = true;
	phone = new char[10];
	strcpy(phone, "0671234567");
}

Person::~Person()
{
}


int main()
{
	Person p1, p2;

	//редактируем и выводим на консоль
	p1.write();
	p1.Print();

	//р2 Создает конструктор
	//просто выводим на консоль
	p2.Print();

	//р3 Создает конструктор
	//просто выводим на консоль
	Person p3;
	p3.Print();

	system("pause>>NULL");
	return 0;
}
