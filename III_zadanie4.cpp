﻿
#include <iostream>
using namespace std;

int main()
{
    int N, M;
    setlocale(LC_ALL, "");
    cout << "ВВЕДИТЕ ЧИСЛО M: ";
    cin >> M;
    cout << "ВВЕДИТЕ ЧИСЛО N: ";
    cin >> N;
    (M % N == 0)?cout<<"ЧАСТНОЕ ОТ ДЕЛЕНИЯ " << M <<" НА "<< N<<": "<< M / N:cout << "M на N нацело не делится";
}

//ТЕСТЫ
//M=100, N=10, частное 10
//M=2,N=1, частное 2
//M=10,N=3, M на N нацело не делится

