#include <iostream>
using namespace std;

void calc(int **sum, int *mul, int *div)
{
    int a, b;
    cout << "enter a";
    cin >> a;
    cout << "enter b";
    cin >> b;
    **sum = (a + b);
    *mul = (a * b);
    *div = (a / b);
}

int main()
{
    int sum = -1, mul = -1, div = -1;
    cout << sum << " " << mul << endl;
    calc(&sum, &mul, &div);
    cout << sum << " " << mul << " " << div << endl;

    return 0;
}