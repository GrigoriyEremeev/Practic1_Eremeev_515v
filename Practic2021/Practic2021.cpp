﻿/*
Файл: Practice1.cpp
Практическая работа №1
Автор: Еремеев Г. С.
Дата создания: 30.06.2021
*/
#include <stdio.h>//библиотеки языка си
#include <locale.h>
int a[400];//массив
int main()
{   //переменные
    int i, n, t, m, j;
    setlocale(LC_ALL, "Rus");//русский язык
    printf("Программа считает 2^n и сумму цифр полученного числа\n");
    printf("Введите n:");
    scanf_s("%d", &n);//ввод данных
    m = 1;
    a[0] = 1;
    for (j = 0;j < n;j++)
    {   // возведение в степень
        for (i = 0;i < m;i++)
            a[i] *= 2;
        for (t = 0;t < m;t++)
            if (a[t] > 9)
                a[t] %= 10, ++a[t + 1];
        if (a[m])
            ++m;
    }
    m += 10;
    while (!a[m])
        --m;
    int sum = 0;//переменная сумма
    printf("Результат:\n");
    printf("2^%d=", n);
    for (i = m;i >= 0;i--) {
        //вывод результата
        printf("%d", a[i]);
        sum += a[i];
    }
    printf("\n");//ввывод суммы
    printf("Cумма цифр полученного числа:%i", sum);
    return 0;
}