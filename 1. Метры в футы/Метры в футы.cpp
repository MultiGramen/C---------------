#include <iostream>
using namespace std;

int main() {

int m;
double r, f;
m = 1;
f = 3.2808398950131;

cout << "Введите метры: ";
cin >> m;

r = m * f;
cout << m << " Метров составляют " << r << " футов";

return 0;
}