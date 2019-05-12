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
	char name[10];
	int age;
	bool man;
	char phone[10];
};

void Person::Print()
{
	cout << endl;
	cout << "Name:" << endl;
	cout << name << endl;
	cout << "Aage:" << endl;
	cout << age << endl;
	cout << "Man-1, or woman-0:" << endl;
	cout << man << endl;
	cout << "Phone number:" << endl;
	cout << phone << endl;
}

Person::Person()
{
	strcpy(name, "X");
	age = 0;
	man = true;
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



	system("pause>>NULL");
	return 0;
}
