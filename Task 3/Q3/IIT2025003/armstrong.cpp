#include <iostream>
using namespace std;
int main()
{
    int n, num;
    cin >> n;
    num = n;
    int m = n % 10;
    int sum = 0;
    while (n != 0)
    {
        sum += m * m * m;
        n = n / 10;
        m = n % 10;
    }
    if (sum == num)
        cout << "Armstrong number" << endl;
    else
        cout << "Not Armstrong number" << endl;
}