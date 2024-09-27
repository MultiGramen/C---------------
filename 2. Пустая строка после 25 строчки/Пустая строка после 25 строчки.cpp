#include <iostream>
using namespace std;

int main () {
    double f; // Длина в футах
    double m; // результат
    int counter;

    counter = 0;
    for (f = 1.0; f <= 100.0; f++) {
        m = f / 3.28;
        cout << f << " футов составляет " << m << " метров.\n";

        counter++;
        if (counter == 25) {
            cout << "\n"; // вывод пустой строки
            counter = 0; // сброс счетчика строк
        }
    }
    return 0;
}