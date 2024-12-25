#include <iostream>
using namespace std;
double f(double x) {
    return (x - 2) * (x - 2);
}
void Kurt(double a, double b, double e) {
    double x = a;
    double min = f(a);
    double xm = a;
    while (x <= b) {
        double g = f(x);
        if (g < min) {
            min = g;
            xm = x; 
        }
        x += e;
    }
    cout << "Минимум функции f(x) найден в x = " << xm << " с значением f(x) = " << min << endl;
}
int main() {
    setlocale(LC_ALL, "Russian");
    double a, b, e;
    cout << "Введите начальное значение a: " << endl;
    cin >> a;
    cout << "Введите конечное значение b: " << endl;
    cin >> b;
    cout << "Введите значение e: " << endl;
    cin >> e;
    Kurt(a, b, e);
    return 0;
}