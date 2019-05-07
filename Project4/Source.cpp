#include <iostream>
using namespace std;

struct phone
{
	int code_mista;
	int n_station;
	int n_obonent;
};
void print(phone a);

int k = 0;
struct employee
{
	int tab_nom;
	float zp;
	int num_sutr;
};
employee	insert();
employee insert()
{
	employee sotr;
	k++;
	sotr.num_sutr = k;
	cout << "Please insert tab number of employee->" << endl;
	cin >> sotr.tab_nom;
	cout << "Please insert dollar per month of employee->";
	cin >> sotr.zp;
	return sotr;
}
void print(employee a)
{
	cout << "Employee Number " << a.num_sutr << endl;
	cout << "Tab number " << a.tab_nom << endl;
	cout << "Dollar per month " << a.zp << endl;
	cout << endl;
}



void main()
{
	phone one = { 212,767,8900 };
	phone You;
	print(one);
	cout << "Please insert code mista, number of telephone station, number obonet" << endl;
	cin >> You.code_mista;
	cin >> You.n_station;
	cin >> You.n_obonent;
	print(You);

	employee	Vasya, Petya, Kolya;
	Vasya = insert();
	Petya = insert();
	Kolya = insert();
	print(Vasya);
	print(Petya);
	print(Kolya);

	system("pause>>NULL");

}

void print(phone a)
{
	cout << "New Number in base-> " << "(" << a.code_mista << ") " << a.n_station << "-" << a.n_obonent << endl;
}
