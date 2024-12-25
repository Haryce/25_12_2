#include <iostream>
using namespace std;
//dy/dx = f(x, y)
double f(double x, double y) {
    // Пример: dy/dx = x + y
    return x + y;
}
void RungeKutt(double x0, double y0, double h, double b) {
    double x = x0;
    double y = y0;
    cout << "x\t\ty" << endl;
    cout << x << "\t\t" << y << endl;
    while (x < b) {
        double k1 = h * f(x, y);
        double k2 = h * f(x + h / 2, y + k1 / 2);
        double k3 = h * f(x + h / 2, y + k2 / 2);
        double k4 = h * f(x + h, y + k3);
        y += (k1 + 2 * k2 + 2 * k3 + k4) / 6; 
        x += h;
        cout << x << "\t\t" << y << endl;
    }
}
int main() {
    setlocale(LC_ALL, "Russian");
    double x0, y0, h, b;
    cout << "Введите начальное значение x: " << endl;
    cin >> x0;
    cout << "Введите начальное значение y: " << endl;
    cin >> y0;
    cout << "Введите шаг h: " << endl;
    cin >> h;
    cout << "Введите конечное значение b: " << endl;
    cin >> b;
    RungeKutt(x0, y0, h, b);
    return 0;
}