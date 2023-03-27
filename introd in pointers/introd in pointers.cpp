// introd in pointers.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    setlocale(LC_ALL, "russian");
    double x, y;
    std::cout << "Введите занчения:\n";
    std::cin >> x >> y;
    double* px = &x;
    double* py = &y;
    double res = (*px + *py) / 2;
    std::cout << "среднее арифметическое: - >" << res << '\n';
        

    return 0;
}


