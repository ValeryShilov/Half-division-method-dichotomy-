#include <iostream>
#include <cmath>
using namespace std;

double F(double n) {
    return pow(n, 3) + 47 * n - 15;
}


int main()
{
    setlocale(LC_ALL, "Rus");
    float a, b, x, e;
    int cnt = 0;
    cin >> a >> b >> e;
    while (abs(a - b) > e) {
        x = (a + b) / 2;
        if (F(b) * F(x) < 0)
            a = x;
        else
            b = x;
        cnt++;
    }
    //(a + b) / 2;
    cout <<"x = " << x << endl;
    cout << "Количество итераций = " << cnt << endl;
    return 0;

}


