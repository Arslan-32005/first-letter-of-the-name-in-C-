#include <iostream>
using namespace std;
int main()
{
    for (int i = 0;i <= 6;i++)
    {
        for (int j = 0;j <= 6;j++)
        {
            if (i == 0 || j == 0 || j == 6||i == 4)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
