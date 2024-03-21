#include <iostream>
#include <string>
#include <Windows.h>
#include <cstring>
#include <cmath>
#include <iomanip>

//SetConsoleCP(1251);
//SetConsoleOutputCP(1251);

int main() {

    setlocale(LC_ALL, "RUS");
    using namespace std;
    
    double x, y;
    while (true) {
        std::cout << "Введите первую координату фигуры: ";
        std::cin >> x;
        std::cout << "Введите вторую координату фигуры: ";
        std::cin >> y;

        if (x < 0.0 || x > 0.8 || y < 0.0 || y > 0.8) {
            std::cout << "Координаты за пределами доски. Попробуйте снова." << std::endl;
            continue;
        }

        int square_x = static_cast<int>(x * 10);
        int square_y = static_cast<int>(y * 10);

        double correction_x = (static_cast<double>(square_x) + 0.5) / 10 - x;
        double correction_y = (static_cast<double>(square_y) + 0.5) / 10 - y;

        std::cout << "Фигура находится в клетке (" << square_x << ", " << square_y << ")." << std::endl;
        std::cout << "Поправьте положение фигуры на (" << std::fixed << std::setprecision(3) << correction_x << ", " << correction_y << ")." << std::endl;
        break;
    }

    return 0;

}