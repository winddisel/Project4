#include <iostream>
using namespace std;
class Phone
{

private:
	char FirstName[20];
	char LastName[20];
	int hometel;
	int worktel;
	char info[20];

public:
	Phone();
	void Show() {
		cout << LastName << endl;
		cout << FirstName<<endl;
		cout << worktel << endl;
		cout << hometel << endl;
		cout << info << endl;
	}

	void Read() {
		cout << "Please insert First Name - >" << endl;
		cin >> FirstName;
		cout << "Please insert Last Name - >" << endl;
		cin >> LastName;
	}
	~Phone();

};

Phone::Phone()
{
	FirstName[20] = 'Alex';
	LastName[20] = 'Usov';
	hometel = 80987720453;
	worktel = 80442203070;
	info[20] = '....';
}

Phone::~Phone()
{
}


int main()
{
	Phone abonent1, abonent2;
	abonent2.Read();
	abonent2.Show();
	system("pause>>NULL");
	return 0;
}