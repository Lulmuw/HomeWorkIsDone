// FuncPointer.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

const int ARRAY_LENGTH = 10;

void arrInv(int arr[], int arrLength);
void arrAsc(int arr[], int arrLength);
void arrDecs(int arr[], int arrLength);
void (*arrScan(int arr[], int arrLength))(int arr[], int arrLength);

int main()
{
    int array[ARRAY_LENGTH];
    for (int i = 0; i < ARRAY_LENGTH; i++) {
        array[i] = rand() % 21 - 10;
        std::cout << array[i] << " ";
    }

    std::cout << std::endl;
    void (*func)(int arr[], int arrLength) = arrScan(array, ARRAY_LENGTH);
    func(array, ARRAY_LENGTH);

    for (int i = 0; i < ARRAY_LENGTH; i++) {
        std::cout << array[i] << " ";
    }

    return 0;
}

void arrInv(int arr[],int arrLength)
{
    for (int i = 0; i < arrLength/2; i++) {
        int buffer = arr[i];
        arr[i] = arr[arrLength - i - 1];
        arr[arrLength - i - 1] = buffer;
    }
}

void arrAsc(int arr[], int arrLength)
{
    bool bubbleSort = true;
    while (bubbleSort) {
        bubbleSort = false;
        for (int i = 0; i < arrLength - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                int buffer = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = buffer;
                bubbleSort = true;
            }
        }
    }
}

void arrDecs(int arr[], int arrLength)
{
    bool bubbleSort = true;
    while (bubbleSort) {
        bubbleSort = false;
        for (int i = 0; i < arrLength - 1; i++) {
            if (arr[i] < arr[i + 1]) {
                int buffer = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = buffer;
                bubbleSort = true;
            }
        }
    }
}

void (*arrScan(int arr[], int arrLength))(int arr[], int arrLength)
{
    int sum = 0;
    for (int i = 0; i < arrLength; i++) {
        sum += arr[i];
    }
    if (sum == arr[0]) return arrInv;
    else if (sum > arr[0]) return arrAsc;
    return arrDecs;
}
