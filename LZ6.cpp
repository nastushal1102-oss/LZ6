#include <iostream>
#include <windows.h>
using namespace std;

int const n = 5;
int a[n];
int i, j, dop, maxim;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Введення елементів масиву
    for (i = 0; i < n; i++)
    {
        cout << "Введіть a[" << i << "] = ";
        cin >> a[i];
    }

    // Підрахунок кількості додатних елементів
    int k = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] > 0)
            k++;
    }

    cout << "\nКількість додатних елементів: " << k << endl;

    cout << "\nСортування масиву методом екстремальних елементів (за спаданням):" << endl;

    // Сортування за спаданням методом екстремальних (максимальних) елементів
    for (j = 0; j < n - 1; j++)
    {
        maxim = j;
        for (i = j + 1; i < n; i++)
        {
            if (a[i] > a[maxim])
                maxim = i;
        }
        dop = a[maxim];
        a[maxim] = a[j];
        a[j] = dop;
    }

    cout << "\nМасив після сортування за спаданням:" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;
    return 0;
}
