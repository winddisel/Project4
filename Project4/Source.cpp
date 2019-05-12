#include <iostream>
using namespace std;
class Phone
{

private:
	const char* FIO[100];
	char htel;
	char wtel;
	char info;

public:
	Phone();
	void Show() {
		cout << FIO[100]<<'\n';
	}
	~Phone();

};

Phone::Phone()
{
	FIO[100] = "Ivanov Ivan Ivanovich";

}

Phone::~Phone()
{
}


int main()
{
	Phone abonent1, abonent2;
	abonent1.Show();
	abonent2.Show();
	system("pause>>NULL");
	return 0;
}