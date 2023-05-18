#include <bits/stdc++.h>
#include  <windows.h>
using namespace std;

#define ll long long
#define ar array

/// Функция для сортировки массива методом пузырька
void bubbleSort(int arr[], int n) {
   for(int i = 0; i < n - 1; i++) { /// Проходим по массиву n-1 раз
     for(int j = 0; j < n - i - 1; j++) { /// Проходим по массиву от 0 до n-i-1
        if(arr[j] > arr[j + 1]) { /// Если текущий элемент больше следующего элемента
            swap(arr[j], arr[j + 1]); /// Меняем их местами
        }

     }
   }
}

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n; /// Переменная для хранения размера массива
    cout << "Введите размер массива: "; /// Просим пользователя ввести элементы массива
    cin >> n; /// Считываем размер массива
    int arr[n]; /// Объявляем массив с размером n

    cout << "Введите содержимое массива" << endl; /// Просим пользователя ввести элементы массива
    for(int i = 0; i < n; i++) {
        cout << "Введите " << i << " элемент: ";
        cin >> arr[i]; /// Считываем элементы массива
    }

    bubbleSort(arr, n); /// Вызываем функцию для сортировки массива методом пузырька

    cout << "Отсортированный массив: "; /// Выводим отсортированный массив
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }




   return 0;
}