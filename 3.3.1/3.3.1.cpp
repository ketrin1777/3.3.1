#include <iostream>
#include <clocale>
#include <Windows.h>

class Calculator
{
private:
    double num1, num2;

public:

    Calculator() {
    }

 //   Calculator(double& setNum1, double& setNum2) {
 //       this->num1 = setNum1;
 //       this->num2 = setNum2;
 //   }

    bool set_num1(double& setNum1) {
        if (setNum1 != 0){
            this->num1 = setNum1;
            return 1;
        }
        else
        {
            return 0;
        }

    }

    bool set_num2(double& setNum2) {
        if (setNum2 != 0) {
            this->num2 = setNum2;
            return 1;
        }
        else
        {
            return 0;
        }
    }

    double add() {
        return num1 + num2;
    }

    double subtract_1_2() {
        return num1 - num2;
    }

    double subtract_2_1() {
        return num2 - num1;
    }

    double divide_1_2() {
        return num1 / num2;
    }

    double divide_2_1() {
        return num2 / num1;
    }
};


int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Calculator calc;



    while (true)
    {
        double num1, num2;
        bool inp = false;

        while (!inp) {
            std::cout << "Введите num1: ";
            std::cin >> num1;
            inp = calc.set_num1(num1);
            if (!inp)
            {
                 std::cout << "Неверный ввод!" << std::endl;
            }
        }
        inp = false;
        
        while (!inp) {
            std::cout << "Введите num2: ";
            std::cin >> num2;
            inp = calc.set_num2(num2);
            if (!inp)
            {
                std::cout << "Неверный ввод!" << std::endl;
            }
        }
        

        std::cout << "num1 + num2 = " << calc.add();
        std::cout << "\nnum1 - num2 = " << calc.subtract_1_2();
        std::cout << "\nnum2 - num1 = " << calc.subtract_2_1();
        std::cout << "\nnum1 / num2 = " << calc.divide_1_2();
        std::cout << "\nnum2 / num1 = " << calc.divide_2_1() << std::endl;
    } 
}
