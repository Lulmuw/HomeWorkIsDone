
#include <iostream>
#include "student.h"
#include <vector>

int main()
{
    setlocale(LC_ALL, "rus");
    vector <student> kartoteka;
    int vector_length;

    student buffer_student;

    cout << ">Сколько студентовы в хотите хранить в картотеке?:\n";
    cin >> vector_length;
    cout<< ">Начало заполнения картотеки:\n"
        << ">Вводите данные: Имя, Фамилия, Возраст, Номер зачётки, Номер группы студента\n"
        << ">Начало ввода:\n";
    for (int i = 0; i < vector_length; i++) {
        cin >> buffer_student;
        kartoteka.push_back(buffer_student);
    }

    cout << ">Начало вывода готовой картотеки" << endl;

    for (int i = 0; i < vector_length; i++) {
        cout << kartoteka[i] << endl;
    }


}