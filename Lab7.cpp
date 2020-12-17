#include <iostream>
#include <cstring> // здесь объявление strlen
#include <locale.h> // заголовочный файл для функции setlocale()

int main()
{
    setlocale(LC_ALL, "Russian");

    char string1[256] = { 0 };    // выделение буфера под строку
    printf("Введите строку 1: ");    // вывод строки в терминал
    gets(string1);            // С-функция для ввода строки по нажатию Enter

    char string_to_find[256] = { 0 };    // выделение буфера под строку
    printf("Введите строку 2 для поиска: ");    // вывод строки в терминал
    gets(string_to_find);            // С-функция для ввода строки по нажатию Enter

    char* substring = strstr(string1, string_to_find);    // поиск подстроки в строке
    long position = substring - string1;                    // определение позициии как разности адресов
    printf("Строка 2 найдена в строке 1 на позиции %li", position); // вывод строки с подстановкой числового параметра
    std::cout << "" << std::endl;
    char buffer[256] = { 0 }; // выделение буфера под строку
    printf("Введите строку: "); // вывод строки в терминал
    gets(buffer); // С-функция для ввода строки по нажатию Enter
    std::cout << "" << std::endl;
    int int_val;
    double dbl_val;

    printf("Выводимый текст: целое знаковое число %i, число с плавающей точкой %10.1f, строка %s\n",
        int_val, dbl_val, substring); // вывод строки с подстановкой числового параметра, заменяет cout в Си
    printf("Длина строки: %zu", strlen(buffer)); // вывод строки с подстановкой числового параметра
    system("pause");
    return 0;
}