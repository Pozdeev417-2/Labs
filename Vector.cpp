#include <iostream>
#include <string>


using namespace std;

class metod
{
public:
	double a[3]; // Первый массив
	double b[3]; // Второй массив
	double result[3]; // Третий массив (результат)
	
	string name;
	void first() // Ввод элементов первого массива
	{
		cout << "Введите 3 координаты вектора a : = ";
		for (i=0; i<3; i++) cin >> a[i];
	}
	
	void second() // Ввод элементов второго массива
	{
		cout << "Введите 3 координаты вектора b : = ";
		for (i=0; i<3; i++) cin >> b[i];
	}
	
	double coord() // Вычисление результата
	{
		for (i=0; i<3; i++)
		 c[i]=a[(i+1)%3]*b[(i+2)%3]-a[(i+2)%3]*b[(i+1)%3];
	}
	
	double out() // Отображение результата
	{
		cout << "Векторное произведение векторов a и b : = ";
		for (i=0; i<3; i++)
		 cout << " " << c[i];
		cout << endl;
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
