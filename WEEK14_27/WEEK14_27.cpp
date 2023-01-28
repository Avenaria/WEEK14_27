#include <iomanip>
#include<algorithm>
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
using namespace std;

#include <iostream>
int sizee=10;
int* ar = new int[sizee] {};
int* p = new int;
// печать, заполнение, удаление 
void f() { 
    for (int i = 0; i < 10; i++) {
        ar[i] = rand() % 69;
        cout << *(ar + i)<< " ";
    }
    delete[] ar;
 }
// в конец массива добавление 
void addElemet(int* mass, int sizee) //добавление элемента в конец массива
{
    int* temp = NULL;
    int numTemp = sizee + 1;
    int sum = 0;
    temp = ar; 
    for (int i = 0; i < sizee; i++)
    {
        temp[i] = i; 
        sum += mass[i];
    }
    temp[numTemp] = sum;      
    mass = temp; 
     delete[](mass);
    delete[](temp); 
}
//Функция вставки элемента по указанному индексу
void indicator  (int*& ar, int& Size, int sizee, int number)
{
    int* newArray = new int[++Size]; 
    for (int i = 0; i < sizee; ++i) 
        newArray[i] = ar[i];
    newArray[sizee] = number;
    for (int i = sizee; i < Size - 1; ++i) 
        newArray[i + 1] = ar[i];
    delete[]ar; 
    ar = newArray;
}
//Написать функцию, которая получает указатель на динамический массив и его размер. 
void f2(int* ar, int &sizee) {
    int* arr = new int[sizee];
    int size = 0;
    for (int i = 0; i < sizee; i++) {
        int temp = arr[i];
        for (int j = 0; j <= temp; j++) {
            if (j != temp && temp % j == 0) {
                arr[sizee++] = temp;
            }
        }
    }
    delete[]arr;
}

void f4(int* arr, int* size) {
    int* pozitiv = new int [10];
    int* negativ = new int[10];
    int* nul = new int[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 69;
        cout << *(arr + i) << " ";

        if (arr[i] > 0) {
            arr[i] = pozitiv[i];
            
        }
        else if (arr[i] < 0) {
            arr[i]= negativ[i];
        }
        else  arr[i]=nul[i];
    }
    cout << "Положительных  " << pozitiv << endl;
    cout << "Отрицательных  " << negativ << endl;
    cout << "равных 0  " << nul << endl;



    delete[]arr;
    delete[]pozitiv;
    delete[]negativ;
    delete[]nul;
     }


    






int main()
{
    f();
}
