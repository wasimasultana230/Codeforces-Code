#include <iostream>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    if (n == 0)
    {
        cout << 1 << endl;
    }
    else
    {
        int cycle[] = {8, 4, 2, 6};
        cout << cycle[(n - 1) % 4] << endl;
    }

    return 0;
}
