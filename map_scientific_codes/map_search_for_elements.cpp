#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long longas
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Поиск элементов в std::map

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    map <string, int> scores;

    // Вставка элементов
    scores["Alice"] = 90;
    scores["Bob"] = 80;
    scores["Charlie"] = 95;

    // Поиск элемента
    string name = "Bob";
    auto it = scores.find(name);
    if (it != scores.end()) {
        cout << "Score of " << name << ": " << it->second << endl;
    } else {
        cout << name << " not found!" << endl;
    }





  return 0;
}



