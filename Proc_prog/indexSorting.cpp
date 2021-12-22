#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    system("cls");

    bool log = false;

    string unsorted = "unsorted.txt", sorted = "sorted.txt";

    fstream fUnsort, fSort;

    int len, max = 0;

    do
    {
        cout << "This is indexSorting Exmple.\nEnter count of sorting numbers\n> ";
        cin >> len;
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        if (len <= 0) 
            cout << "Error! count must be greater than 0!\n";
        system("pause");
        system("cls");
    } while (len <= 0);

    int* a = new int[len];

    // using files because printing is slow
    fUnsort.open(unsorted, ios::out);
    if (fUnsort.is_open())
    {
        for (int i = 0; i < len; i++)
        {
            a[i] = rand() % 1000000;
            if (a[i] > max) max = a[i];
            fUnsort << a[i] << ' ';
        }
        fUnsort << '\n';
    }
    else
        cout << "No file at path \"" << unsorted << "\"!\n";
    fUnsort.close();
    if (log) cout << "File1:\tComlete\n";

    bool* b = new bool[max+1];
    for (int i = 0; i < max + 1; i++)
        b[i] = false;
    if (log) cout << "boolB:\tComlete\n";

    for (int i = 0; i < len; i++)
        b[a[i]] = true;
    
    delete[] a;

    if (log) cout << "Sorting:\tComlete\n";

    // using files because printing is slow
    fSort.open(sorted, ios::out);
    if (fSort.is_open())
    {
        for (int i = 0; i < max + 1; i++)
            if (b[i])
                fSort << i << ' ';
        fSort << '\n';
    }
    else
        cout << "No file at path \"" << sorted << "\"!\n";
    fSort.close();
    if (log) cout << "File2:\tComlete\n";

    delete[] b;

    if (log)
    {
        string s;

        cout << "Unsorted file:\n";
        fUnsort.open(unsorted, ios::in);
        if (fUnsort.is_open())
            while (getline(fUnsort, s))
                cout << s << '\n';
        else 
            cout << "Error! No file at path \"" << unsorted << "\"!\n";
        fUnsort.close();

        system("pause");

        cout << "Sorted file:\n";
        fSort.open(sorted, ios::in);
        if (fSort.is_open())
            while (getline(fSort, s))
                cout << s << '\n';
        else
            cout << "Error! No file at path \"" << sorted << "\"!\n";
        fSort.close();
    }

    cout << "Complete! See you next time\n";
    system("pause");
    system("cls");
}