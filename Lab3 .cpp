#include<iostream>
#include<locale.h>
#include<iomanip>
#include<bitset>


int main()
{
	setlocale(LC_ALL, "Russian");

	//1.0 условные переходы
	//1.1 оператор if и if... else...
	int salary = 120000;
	bool has_education = true;
	if ((salary < 150000) && (salary < 100000)) //в скобках должа быть логическая переменная или условия выдающее true false
	{
		std::cout << "зашли под if" << std::endl;
		//все что внутри скобок if выполняется если условие в круглых скобках равно true
	}
	std::string name;
	std::cout << "Введите ваше имя:\t";
	std::cin >> name;
	if (name == "Ivan")// =false если имя не равно "Иван")
	{
		std::cout << "Зашли под второй if!" << std::endl;
	}
	else
	{
		std::cout << "Зашли ";
	}

	//1.2 оператор switch...case...default
	int type_of_creditor;
	/*1 = "physical"
	2 = "small_business"
	3 = "medium_business"
	4 = "large business"*/


	std::cout << "1.2. switch...case... . Введите int type_of_credit \t";
	std::cin >> type_of_creditor;
	switch (type_of_creditor/*переменная которая подлежит сравнению*/)
	{
	case 1/*значение 1*/:
		std::cout << "Тип Аллаха - \"physical\"" << std::endl;
		break;
	case 2/*значение 2*/:
		std::cout << "Тип Аллаха - \"small_business\"" << std::endl;
		break;
	case 3/*зачение 3*/:
		std::cout << "Тип Аллаха - \"medium_business\"" << std::endl;
		break;
	case 4/*зачение 4*/:
		std::cout << "Тип Аллаха - \"large_business\"" << std::endl;
		break;
	default: //действия которые выполняются во всех прочих случаях

		break;

	}
	//1.3 тернарный оператор
	int c = 10;
	//кратко условный переход помжно записать в одну строку if (c < 5) {} else {}
	//или в виде тернарного оператора (условие)?(ветка есть условие == true):(ветка если false)
	(c < 5)
		? (std::cout << "Тернарный оператор true" << std::endl/*оператор если true*/)
		: (std::cout << "Тернарный оператор false" << std::endl/*оператор если false*/);
	//1.4 оператор безусловного перехода goto
	//в современной разработке старается не применять,так как это как минимум уменьшается читаемость кода
	//синтаксис
	//в нужном месте программы создается т.н. метка
lbl_1: //идентификатор (название) и двоеточие - это объявление метки
/*???*/
	c++;
	std::cout << "1.4. демонстрация goto. c=" << c << std::endl;
	if (c == 15) { goto lbl_exit; }
	goto lbl_1;

lbl_exit:



	//2.0 кострукция цикла
	//цикл for
	for (int i = 0;/*начальное значение переменное-счетчика*/
		i < 7; /*условие продолжения пока оно true цикл продолжается*/
		i++/*повторяющийся оператор чаще всего - умешьнение или увеличение счетчика*/)
	{

		// код который нужно повторять пока длится цикл (пока длится условие продолжения)
		//заполнить самостоятятельно распечаткой к 15 октября
	}



	//2.1 счетный цикл for и операторы continue и break
	//2.2. цикл с пред-условием while
	int primer_1 = 0;

	while (primer_1 < 15)/*задание придумать и прописать условие чтоб код запускался | условие, пока оно == true, цикл выполняется*/
	{

		primer_1++;
		std::cout << " конец" << primer_1 << std::endl;

	}




	int allah;

	std::cout << "Выберите Вариант оплаты: 1 - Наличными 2 - Перевод 3 - Карта 4 - Обещаниями \t";
	std::cin >> allah;
	switch (allah)
	{
	case 1:
		std::cout << "Тип оплаты - \"Наличными\"" << std::endl;
		break;
	case 2:
		std::cout << "Тип оплаты - \"Перевод\"" << std::endl;
		break;
	case 3:
		std::cout << "Тип оплаты - \"Карта\"" << std::endl;
		break;
	case 4:
		std::cout << "Тип оплаты - \"Обещаниями\"" << std::endl;
		break;
	default:

		break;

	}











	/*2.3. цикл с пост-условием do...while
	//самый первый заход в цикл выполняется всегда так как проверка выполняется после тела цикла
	/*do {
	// код который нужно повторять пока длится цикл (пока длится условие продолжения)
	//заполнить самостоятятельно распечаткой к 15 октября
	} while (задание: придумать и прописать условие условие пока оно == true, цикл выполняется)
	//заполнить циклы соответствующим выводом на консоли по аналогии с прочими
	//конструкторами и операторами чтобы было максимально очевидно что как и в каком порядке работает
	//в конфе большинства пользовательских программ которые работают продолжительное время и не завершаются сами по себе как лаб. программы
	//включен бесконечный цикл именно поэтому они работают продолжительное время
	//git - система контроля версий при длительной разработке сохранять старые версии,промежуточные версии просто
	//необходимо особенно при работе в команде чтоб вручную не создавать большое количество копий папок и файлов
	//разработаны система контроля версия помимо git: git, mercurial, svn и др
	//если кратко: как только разработчику необходимо сделать "снимок" текущих файлов своего проекта
	//(версию) он вводит в git команду и git вместо копирования файлов и папок определяет изменения текущих файлов относительно предыдущей версии
	//и записывает только разницу таким образом git ведет историю версий всех файлов в очень компактном виде
	//сейчас помимо просто хранения версий гит используется также для командной работы над одной и той же кодовой базой, хранения резервной копии
	//для публикации открытого кода и тд
	//для проекта вместе со служебными файлами гит называются репозиторием
	//если репозиторий размещен на локальной машине он называется локальным
	//если репозиторий размещен в сети он называется удаленным
	сначала сохздается локальный репозиторий, с ним проволится работа по добавлению файлов, фиксированию версий, созданию и слиянию веток
	затем результаты можно отправить (синхронизировать) с удаленным репозиторием
	1)чтобы завести репозиторий в каталоге необходимо открыть консоль в корневом каталоге проекта
	для этого с зажатым шифтом правой кнопкой нажать и открыть в powershell, в конcоли ввести команду git init
	2)создан пустой репозиторий ни один файл не отслеживается и версии не могут быть созданы необходимо добавить файлы в список отслеживания git
	для этого в той же самой консоли необходимо ввести команды git add *.cpp
	//скачай git*/
	system("pause");
	return 0;
}