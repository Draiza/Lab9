#include <iostream>
using namespace std;


int main()
{
    //1
    int n,s;
    cin >> n;
    while (n>=3600)
    {
        n -= 3600;
    }
    while (n >= 60)
    {
        n -= 60;
    }
    std::cout << n << endl;

    //2
    cin >> n;
    while (n > 7)
    {
        n -= 7;
    }
    if (n == 7)
    {
        n = 0;
    }
    cout << n << endl;

    //3
    cin >> n >> s;
    while (n > 7)
    {
        n -= 7;
    }
    cout << n << endl;

    //4

    //5
    cin >> n;
    n = n / 100 + 1;
    cout << n << endl;
}
