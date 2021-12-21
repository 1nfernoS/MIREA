#include <ctime>	
#include <iostream>
#include<signal.h>
#include <sstream>


using namespace std;

void reset(int errorCode) {
    fflush(stdout);
    signal(SIGINT, reset);
}

int main()
{
    signal(SIGINT, reset);

    setlocale(0, "Ru-ru"); //Yes, Russian language
    srand(time(0));

    cout << "Welcome to the Gaydenko's 12th practice work (variant 4). The task is:\n"
        << "2.4.Создать квадратную матрицу размера MxM, где M является целым числом из диапазона [2,5].\n"
        << "Конкретный размер матрицы задается пользователем.\n"
        << "Матрица содержит только целые числа из диапазона [1, 100], которые могут быть как случайными, так и вводиться пользователем.\n"
        << "Отсортировать по убыванию элементы, лежащие на побочной диагонали матрицы, остальные элементы умножить на минус один.\n"
        << "После сортировки найти N - ный минимум среди элементов на побочной диагонали, где N задается пользователем.\n"
        << "Результаты обработки матрицы вывести на экран.\n"
        << "\n";
    system("pause"); // Yes, no aliases
    system("cls");

    bool sorted = false;
    int m, n, a[5][5], d[5]; // Yes, no dynamic arrays
    char in;

    do // Input check pattern
    {
        cout << "Enter the size of matrix m [2-5]\n> ";
        cin >> m;
        cin.clear(); // No alias even for clearing cin
        cin.ignore(INT_MAX, '\n');
        if (m < 2 || m > 5)
        {
            cout << "Error! size of matrix must be in [2-5]\n";
            system("pause");
            system("cls");
        }
    } while (m < 2 || m > 5);
    system("cls");

    cout << "Do you want to generate matrix? [y/n]\n> ";

    cin >> in; // no checking because we have "yes" and not "yes"(any other)
    cin.clear();
    cin.ignore(INT_MAX, '\n');

    system("cls");

    for (int i = 0; i < m; i++)
    {
        if (in != 'y' && in != 'Y') cout << "Enter " << i + 1 << " row\n"; // If manual input
        for (int j = 0; j < m; j++)
        {
            if (in != 'y' && in != 'Y') 
                do // Input check pattern
                {
                    cout << "> ";
                    cin >> n;
                    cin.clear();
                    cin.ignore(INT_MAX, '\n');
                    if (n < 1 || n > 100)
                        cout << "Error! Number must be in [1-100]\n";
                } while (n < 1 || n > 100);
            else
                n = rand() % 99 + 1;
            if (i + j == m - 1) d[i] = n; // making secondary diagonal
            a[i][j] = n;
        }
    }

    if (in != 'y' && in != 'Y') system("cls"); // clear only if we input smth

    cout << "The matrix is:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
            a[i][j] < 10 ? cout << ' ' << a[i][j] << ' ' : cout << a[i][j] << ' '; // Prettify numbers output
        cout << "\n";
    }

    system("pause");
    system("cls");

    while (!sorted) // Baubble sort because fast code and not much data
    {
        sorted = true;
        for (int i = 0; i < m - 1; i++)
        {
            if (d[i] < d[i + 1])
            {
                sorted = false;
                swap(d[i],d[i + 1]); // Less string count
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
            if (i + j == m - 1) a[i][j] = d[i]; // Replace with sorted diagonal
            else a[i][j] *= -1; // Other elements of matrix
    }

    do // Input check pattern
    {
        cout << "Enter n [1-" << m << "]\n> ";
        cin >> n;
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        if (n > m || n < 1)
        {
            cout << "Error! The number must be in [1-" << m << "]\n";
            system("pause");
            system("cls");
        }
    } while (n > m || n < 1);
    system("cls");

    cout << "The result matrix is:\n"; // Output results
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
            a[i][j] > 0 ? (a[i][j] < 10 ? cout << ' ' << ' ' << a[i][j] << ' ' : cout << ' ' << a[i][j] << ' ') 
                        : (a[i][j] > -10 ? cout << ' ' << a[i][j] << ' ' : cout << a[i][j] << ' '); // Prettify with negative numbers
        cout << "\n";
    }
    cout << "\n The " << n << " element is " << d[n - 1] << "\n";
    system("pause");
    system("cls");

    return 0;
}
