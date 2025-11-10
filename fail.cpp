#include <iostream>
#include <iomanip>  // для форматованого виводу
#include <string>

using namespace std;

int main() 
{
    int N; // Гідність карти (від 6 до 14)
    int M; // Масть карти (1-піки, 2-черви, 3-бубни, 4-хрести)

    cout << "Введіть гідність карти (N, 6-14): ";
    cin >> N;

    cout << "Введіть масть карти (M, 1-піки, 2-трефи, 3-бубни, 4-чирви): ";
    cin >> M;

    string cardName;
    string suitName;

    // Визначення назви гідності карти
    switch (N) 
    {
        case 6:cardName = "6";break;
        case 7:cardName = "7";break;
        case 8:cardName = "8";break;
        case 9:cardName = "9";break;
        case 10:cardName = "10";break;
        case 11:cardName = "валет";break;
        case 12:cardName = "дама";break;
        case 13:cardName = "король";break;
        case 14:cardName = "туз";break;
        default:cardName = "невідома гідність";break;
    }

    // Визначення назви масті карти
    switch (M) 
    {
        case 1:suitName = "піка";break;
        case 2:suitName = "трефа"; break;
        case 3:suitName = "бубна"; break;
        case 4:suitName = "чирва";break;
        default:suitName = "невідома масть";break;
    }

    // Виведення результату
    if (cardName != "невідома гідність" && suitName != "невідома масть") 
    {
        cout << "Назва карти: " << cardName << " " << suitName << endl;
    } else 
    {
        cout << "Введені некоректні дані." << endl;
    }

    return 0;
}