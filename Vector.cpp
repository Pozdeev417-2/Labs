#include <iostream>
#include <string>


using namespace std;

class metod
{
public:
	double a[3];
	double b[3];
	double result[3];
	string name;
	void first()
	{
		cout << "Введите 3 координаты вектора a := " << endl;
		cout << "x1 := ";
		cin >> a[0];
		cout << "y1 := ";
		cin >> a[1];
		cout << "z1 := ";
		cin >> a[2];

	}
	void second()
	{
		cout << "Введите 3 координаты вектора b : = " << endl;
		cout << "x2 := ";
		cin >> b[0];
		cout << "y2 := ";
		cin >> b[1];
		cout << "z2 := ";
		cin >> b[2];
	}
	double coord()
	{
		coords[0] = (a[1] * b[2]) - (a[2] * b[1]);
		coords[1] = (a[2] * b[0]) - (a[0] * b[2]);
		coords[2] = (a[0] * b[1]) - (a[1] * b[0]);
		return 0;

	}
	double out()
	{
		cout << "Векторное произведение векторов a и b : = " << endl;
		cout << "x: " << coords[0] << endl;
		cout << "y: " << coords[1] << endl;
		cout << "z: " << coords[2] << endl;
		return 0;

	}


};

int main()
{
	setlocale(LC_ALL, "Russian");
	metod vector;
	vector.first();
	vector.second();
	vector.coord();
	vector.out();
	return 0;
	system("pause");
}
