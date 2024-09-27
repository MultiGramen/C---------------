#include <iostream>
using namespace std;

int main () {
    int zemlya, year;
    double result, input_youpiter_year;

    zemlya = 12; // Земные годы
    year = 1; // Юпитерские годы

    cout << "Введите юпитерские года: ";
    cin >> input_youpiter_year; // Вводимые даные юпитера

    result = input_youpiter_year * zemlya; // Получение юпитерских годов и преобразование их в земные

    cout << result << " земных лет"; // Преобразование юпитерских годов в земные

    return 0;
}