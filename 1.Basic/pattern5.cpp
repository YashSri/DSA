#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int j = 1;
        int r = i;
        while (j <= i)
        {
            cout << r << " ";
            r = r - 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}