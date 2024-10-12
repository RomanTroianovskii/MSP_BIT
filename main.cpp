// MSHP_SB_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define __end_s "\n"
#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    set<int> c1, c2;
    vector<int> colors, v1, v2;


    for (int i = 0; i < n; ++i) {
        int color;
        cin >> color;
        c1.insert(color);
    }


    for (int i = 0; i < m; ++i) {
        int color;
        cin >> color;
        c2.insert(color);
    }

    for (const int& color : c1) {
        if (c2.count(color)) {
            colors.push_back(color);
        }
        else {
            v1.push_back(color);
        }
    }

    for (const int& color : c2) {
        if (!c1.count(color)) {
            v2.push_back(color);
        }
    }


    cout << colors.size() << __end_s;


    for (const int& color : colors) {
        cout << color << " ";
    }
    cout << __end_s;



    cout << v1.size() << __end_s;
    for (const int& color : v1) {
        cout << color << " ";
    }
    cout << __end_s;


    cout << v2.size() << __end_s;
    for (const int& color : v2) {
        cout << color << " ";
    }
    cout << __end_s;


    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
