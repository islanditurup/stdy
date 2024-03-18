#include <cstdlib>
#include <clocale>
#include <iostream>
#include <time.h>
int main(){
    int n;
    char space = ' ';
    const char* const arr[7] = {"Понедельник", "Вторник", "Cреда", "Четверг", "Пятница", "Суббота", "Воскресенье"};

    std::srand(time(NULL));
    std::setlocale(LC_ALL, "Russian");

    std::cout << "Введите номер дня недели, начиная с 1 (Понедельник) до 7 (Воскресенье) - ";
    std::cin >> n;

    while (n < 1 || n > 7){
        std::cout << "Invalid input. Введите число от 1 до 7 - ";
        std::cin >> n;}
    for (int i = n; i < 7; i++){
        std::cout << arr[i] << space;}
    if (n == 7){
        std::cout << "Это последний день недели!";}
    return 0;
    }

