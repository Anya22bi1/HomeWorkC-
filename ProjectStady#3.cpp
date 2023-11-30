#include <iostream>
#define _USE_MATCH_DEFINES
#include <cmath>

float CreateSquareTrapeziod(int b1, int b2, int h)
{
    float square = ((b1 + b2) * h) / 2; /*формула площади трапеции*/
    return square;
}

float CalculateSquareCircle(int r)
{
    float pi = 3.14; /*Число Пи*/
    float Square = pi * pow(r, 2);  /*формула площади*/
    return Square;
}

float CalculateLongCircle(int r)
{
    float pi = 3.14; /*Число Пи*/
    float Long = 2 * pi * r; /*формула длины окружности (через радиус)*/
    return Long;
}

double CreateSquareTriangle(int a, int b)
{
    double SquareTriangle = (a * b) / 2; /*формулы площади прямоугольного треугольника*/
    return SquareTriangle;
}

double CreateHypotenuse(int a, int b)
{
    double Hypotenuse = sqrt(pow(a, 2) + pow(b, 2)); /*формула поиска гипотенузы*/
    return Hypotenuse;
}

double CreateIdealWeight(double h, double w)
{
    double IdealWeight = h - 100; //функция для расчёта идеального веса
    return IdealWeight;
}


int main()
{
    {
        /*Task #1*/
        std::cout << "Task 1" << std::endl;
        /*вводим переменные для считывания: b1, b2 - основания трапеции, h - высота*/
        int b1 = 0;
        int b2 = 0;
        int h = 0;
        std::cout << "Enter the bases of the trapezoid(b1, b2) and the height(h): " << std::endl;
        std::cin >> b1 >> b2 >> h; /*считываем перменные*/
        std::cout << "Result Task 1: Square = " << CreateSquareTrapeziod(b1, b2, h) << std::endl; /*используем функцию*/
    }
    {
        /*Task #2*/
        std::cout << "Task 2" << std::endl;
        int radius = 0; /*вводим переменную, в которую будем считывать вводимый радиус*/
        std::cout << "Enter radius: " << std::endl;
        std::cin >> radius; /*считываем введённое значение*/
        std::cout << "Result Task 2: Square = " << CalculateSquareCircle(radius) /*используем функцию*/
            << ", Long = " << CalculateLongCircle(radius)/*используем функцию*/ << std::endl;
    }
    {
        /*Task #3*/
        std::cout << "Task 3" << std::endl;
        /*вводим перменные, в которые загрузим введенные пользователем значения*/
        int cathet1 = 0;
        int cathet2 = 0;
        std::cout << "Enter cathet 1 and cathet 2: " << std::endl;
        std::cin >> cathet1 >> cathet2; /*считываем вводимые значения*/
        std::cout << "Result Task 3: Square = " << CreateSquareTriangle(cathet1, cathet2) /*используем функцию*/ << ", Hypotenuse = " <<
            CreateHypotenuse(cathet1, cathet2)/*используем функцию*/ << std::endl;
    }
    {
        /*Task #4*/
        std::cout << "Task 4" << std::endl;
        /*создаем и инициализируем переменные, в которые будем заносить вводимые пользователем данные*/
        int number = 0;
        int sum = 0; /*Создаём переменную для счёта суммы цифр*/
        std::cout << "Enter a four-digit number: " << std::endl;
        std::cin >> number; /*считываем вводимое значение*/
        int len = 0; /*Инициализируем переменную для  подсчёт длины числа*/
        int number2 = number; /*Дублируем значение в другую переменную для отработки ошибки*/
        while (number2 != 0)
        {
            number2 /= 10;
                len += 1;
        }
        if (len != 4)
        {
            std::cout << "Error: You make mistake" << std::endl;
        }
        else 
        {
            while (number != 0)
            {
                sum += number % 10; /*Используем метод остаточного деления на 10 (тк число десятичное)*/
                number /= 10; /*Делим само число на 10, чтобы рассмотреть следующую цифру числа*/
            }
            std::cout << "Result Task 4: Summa = " << sum << std::endl;
        }
        }
    {
        /*Task #5*/
        std::cout << "Task 5" << std::endl;
        /*создаём и инициализируем переменные для фиксации вводимых пользователем значений*/
        int x = 0;
        int y = 0;
        /*Инициализируем переменные для сохранения результата кода*/
        double radius = 0.;
        double corner = 0.;
        std::cout << "Enter coordinates x, y = " << std::endl;
        std::cin >> x >> y; /*считываем вводимые данные*/
        radius = sqrt(pow(x, 2) + pow(y, 2)); /*формула для расчёта полярного радиуса*/
        corner = atan(y / x); /*формула для расчёта полярного угла*/
        std::cout << "Result Task 5: polar radius = " << radius <<
            ", corner = " << corner << std::endl;
    }
    {
        /*Task #6*/
        std::cout << "Task 6" << std::endl;
        /*Создаём и инциализируем переменные*/
        double radius = 0.;
        double corner = 0.;
        /*Создаём и инициализируем переменные, в которых будем сохранять резльутат*/
        double x = 0.;
        double y = 0.;
        std::cout << "Enter polar radius, polar corner: " << std::endl;
        std::cin >> radius >> corner; /*считываем вводимые данные*/
        x = radius * cos(corner); /*Формула для расчёте координаты Х*/
        y = radius * sin(corner); /*Формула для расчёте координаты Y*/
        std::cout << "Result Task 6: Coordinates = " << x << ", " << y << std::endl;
    }
    {
        /*Task #7*/
        std::cout << "Task 7" << std::endl;
        /*Создаём и инциализируем переменные для сохранения вводимых пользователем данных*/
        /*исопльзуем для расчёт формулу квадратног уровнения ax^2 + bx + c = 0*/
        double a = 0.;
        double b = 0.;
        double c = 0.;
        /*Создаём и инициализируем переменные для расчёта и сохранения результатов*/
        double diskr = 0.; /*Перменная для дискриминанта*/
        double x1 = 0.; /*перменная для Корня 1*/
        double x2 = 0.; /*перменная для Корня 2*/
        std::cout << "Enter a, b, c in the equation: " << std::endl;
        std::cin >> a >> b >> c; /*считываем вводимые пользователем данные*/
        diskr = pow(b, 2) - (4 * a * c); /*формула для расчёта дискриминанта*/
        if (diskr < 0)
        {
            std::cout << "Result Task 7: There are no roots.." << std::endl;
        }
        if (diskr == 0)
        {
            x1 = (-b) / (2 * a);  /*формула для расчёта корня*/
            std::cout << "Result Task 7: There is one root: x = " << x1 << std::endl;
        }
        if (diskr > 0)
        {
            x1 = (-b + sqrt(diskr)) / (2 * a); /*формула для расчёта корня 1*/
            x2 = (-b - sqrt(diskr)) / (2 * a); /*формула для расчёта корня 2*/
            std::cout << "Result Task 7: There are two roots: x1 = " << x1 <<
                ", x2 = " << x2 << std::endl;
        }
    }
    {
        /*Task #8*/
        std::cout << "Task 8" << std::endl;
        //создаём и инциализируем переменные для сохранения вводимых пользователем данных
        int a = 0;
        int b = 0;
        int c = 0;
        //создаём и инциализируем переменные для сохранения и расчёта результатов
        double median11 = 0.; //медианы Исходного треугольника
        double median12 = 0.;
        double median13 = 0.;
        double median21 = 0.; //медианы треугольника, сторонами которого являются медианы исходного треугольника
        double median22 = 0.;
        double median23 = 0.;
        std::cout << "Enter the sides of the original triangle(a, b, c): " << std::endl;
        std::cin >> a >> b >> c;
        //найдём медианы исходного треугольника
        median11 = (sqrt(2 * (pow(b, 2) + pow(c, 2)) - pow(a, 2))) / 2;
        median12 = (sqrt(2 * (pow(c, 2) + pow(a, 2)) - pow(b, 2))) / 2;
        median13 = (sqrt(2 * (pow(b, 2) + pow(a, 2)) - pow(c, 2))) / 2;
        //считаем эти медианы сторонами нужного нам треугольника и ищем новые медианы
        double a2 = median11;
        double b2 = median12;
        double c2 = median13;
        median21 = (sqrt(2 * (pow(b2, 2) + pow(c2, 2)) - pow(a2, 2))) / 2;
        median22 = (sqrt(2 * (pow(c2, 2) + pow(a2, 2)) - pow(b2, 2))) / 2;
        median23 = (sqrt(2 * (pow(b2, 2) + pow(a2, 2)) - pow(c2, 2))) / 2;
        std::cout << "Result Task 8: mediane 1 = " << median21 << ", mediane 2 = " << median22 <<
            ", mediane 3 = " << median23 << std::endl;
    }
    {
        /*Task #9*/
        std::cout << "Task 9" << std::endl;
        //создаем и инициализируем переменные для сохранения вводимых пользователем данных
        int second = 0;
        std::cout << "Enter seconds: " << std::endl;
        std::cin >> second;
        int hour = second / 3600; //формула для расчёта целого количества часов 
        int minute = second / 60; //формула для расчёта целого количества минут 
        std::cout << "Result Task 9: hour =" << hour << ", minute = " << minute << std::endl;
    }
    {
        /*Task #10*/
        std::cout << "Task 10" << std::endl;
        //создаем и инициализируем переменные для сохранения вводимых пользователем данных
        int a = 0;
        int b = 0;
        int c = 0;
        std::cout << "Enter sides of the triangle(a, b, c): " << std::endl;
        std::cin >> a >> b >> c; //считываем данные, введённые пользователем
        if (a == b)
        {
            std::cout << "Result Tsk 10: Triangle - isosceles (a=b)" << std::endl;
        }
        if (a == c)
        {
            std::cout << "Result Tsk 10: Triangle - isosceles (a=c)" << std::endl;
        }
        if (b == c)
        {
            std::cout << "Result Tsk 10: Triangle - isosceles (b=c)" << std::endl;
        }
        if (a != b && a != c && b != c)
        {
            std::cout << "Result Tsk 10: Triangle doesn't isosceles" << std::endl;
        }
    }
    {
        /*Task #11*/
        std::cout << "Task 11" << std::endl;
        //Создаём и инциализируем переменную для сохранения вводимых пользователем данных
        double cost = 0.;
        std::cout << "Enter cost: " << std::endl;
        std::cin >> cost;
        if (cost > 1000)
        {
            double NewCost = cost - (cost * 0.1); //формула для стоимости со скидкой
            std::cout << "Result Task 11: discounted price = " << NewCost << std::endl;
        }
        else //вариант, когда стоимость меньше 1000
        {
            std::cout << "Result Task 11: cost less than 1000, cost = " << cost << std::endl;
        }
    }
    {
        /*Task #12*/
        std::cout << "Task 12" << std::endl;
        //создаём и инициализируем переменные для сохранения вводимых пользователем данных
        double height = 0.;
        double weight = 0.;
        std::cout << "Enter height and weight: " << std::endl;
        std::cin >> height >> weight; //считываем данные вводимые пользователем
        if (CreateIdealWeight(height, weight) != weight) //если иделальный вес и текущий НЕ равны
        {
            /*для упрощения создаём переменную и сохраняем в ней значение функции*/
            double IdealWeight = CreateIdealWeight(height, weight);
            if (IdealWeight > weight) //Если идеальной вес больше текущего
            {
                std::cout << "Result Task 12: we advise you to gain weight" << std::endl;
            }
            else //Если идеальной вес меньше текущего
            {
                std::cout << "Result Task 12: we advise you to lose weight" << std::endl;
            }
        }
        else // если иделальный вес и текущий равны
        {
            std::cout << "Result Task 12: Your weight is ideal weight!" << std::endl;
        }
    }
    {
        /*Task #13*/
        std::cout << "Task 13" << std::endl;
        std::srand(std::time(nullptr));
        std::cout << "Two random numbers [0, 9]: " << std::endl;
        int comp = 1; /*переменная для расчёта результата(в ней фиксируется правильный ответ)*/
        for (int n = 0; n != 2; ++n) /*идём дважды, тк нам нужно два рандомных числа*/
        {
            int x = 10;
            while (x > 9) /*промежуток от 0 до 9 (дан в задании)*/
                x = 1 + std::rand() / ((9 + 1u) / 6); /*создаём рандомное число*/
            std::cout << x << ' ';
            comp *= x; /*считаем правильное решение (произведение)*/
        }
        std::cout << std::endl;
        std::cout << "Enter composition these numbers: " << std::endl;
        int comp_used = 0; //задём переменную для фиксации введённого пользователем значания
        std::cin >> comp_used;
        if (comp_used == comp)
        {
            std::cout << "Result Task 13: WOW! You don't make mistake" << std::endl;
        }
        else
        {
            std::cout << "Result Task 13: You make mistake, true answer = " << comp << std::endl;
        }
    }
    {
        /*Task #14*/
        std::cout << "Task 14" << std::endl;
        //создадим и инциализируем переменные, необходимые для сохранения вводимых пользователем данных
        double Cost_Hour = 0.;
        double Long_Conversation = 0.;
        double Day_Week = 1;
        std::cout << "Enter cost conversation, long conversation(in hour), day week[1-7]: " << std::endl;
        std::cin >> Cost_Hour >> Long_Conversation >> Day_Week;
        double Cost_Conversation = Cost_Hour * Long_Conversation; /*Создаём переменную для подсчёта стоимости переговоров*/
        if (Day_Week == 6 || Day_Week == 7) /*Создаём условие для субботы и воскресенья(6 и 7 дни недели)*/
        {
            Cost_Conversation -= Cost_Conversation * 0.2; /*вычисляем стоимость со скидкой*/
            std::cout << "Result Task 14: Cost conversation = " << Cost_Conversation<< std::endl;
        }
        else
        {
            std::cout << "Result Task 14: Cost conversation = " << Cost_Conversation << std::endl;
        }
    }
    {
        /*Task #15*/
        std::cout << "task 15" << std::endl;
        int month = 0; //создаём и инициализируем переменную для записи в неё введённых пользователем данных
        std::cout << "enter the month number: " << std::endl;
        std::cin >> month; /*считываем данные*/
        switch (month) /*проверяем через условный оператор, создаём case на каждый месяц*/
        {
        case 1:
            std::cout << "resutl task 15: month - january, season - winter" << std::endl;
            break;
        case 2:
            std::cout << "resutl task 15: month - february, season - winter" << std::endl;
            break;
        case 3:
            std::cout << "resutl task 15: month - march, season - spring" << std::endl;
            break;
        case 4:
            std::cout << "resutl task 15: month - april, season - spring" << std::endl;
            break;
        case 5:
            std::cout << "resutl task 15: month - may, season - spring" << std::endl;
            break;
        case 6:
            std::cout << "resutl task 15: month - june, season - summer" << std::endl;
            break;
        case 7:
            std::cout << "resutl task 15: month - july, season - summer" << std::endl;
            break;
        case 8:
            std::cout << "resutl task 15: month - august, season - summer" << std::endl;
            break;
        case 9:
            std::cout << "resutl task 15: month - september, season - autumn" << std::endl;
            break;
        case 10:
            std::cout << "resutl task 15: month - october, season - autumn" << std::endl;
            break;
        case 11:
            std::cout << "resutl task 15: month - november, season - autumn" << std::endl;
            break;
        case 12:
            std::cout << "resutl task 15: month - december, season - winter" << std::endl;
            break;
        default: /*создаём ошибку, если пользователь ввёл не существующий номер месяца*/
            std::cout << "resutl task 15: error in recognizing the month" << std::endl;
            break;
        }
    }
    {
        /*Task #16*/
        std::cout << "Task 16" << std::endl;
        //создаём и инциализируем переменную, для сохранения вводимых пользователем данных
        int number = 0;
        std::cout << "Enter a six-digit number: " << std::endl;
        std::cin >> number;
        int len = 0; /*Переменнаяя для вычисления длины введённого числа*/
        int number2 = number; /*дублриуем значение для проверки длины введённого чила*/
        while (number2 != 0)
        {
            number2 /= 10;
            len += 1;
        }
        if (len != 6) /*создаём условия для вывода ошибки, в случае, когда число не 6-тизначное*/
        {
            std::cout << "Result Task 16: Error: you didn't enter a six-digit number" << std::endl;
        }
        else /*Проверяем число на "счастливость"*/
        {
            int Sum_right = 0; /*Создаём две переменные для подсчёта суммы цифр слева и справа*/
            int Sum_left = 0;
            for (int i = 0; i < len / 2; i++) /*повторяем цикло трижды, собираем остаток от деления на 10(три числа справа)*/
            {
                Sum_right += number % 10;
                number /= 10;
            }

            for (int i = 0; i < len / 2; i++) /*повторяем цикло трижды, собираем остаток от деления на 10(три числа слева)*/
            {
                Sum_left += number % 10;
                number /= 10; /*число должно дойти до 0*/
            }
            if (Sum_right == Sum_left) /*непосредственно условия на равенство суммы и вывод результата*/
            {
                std::cout << "Result Task 16: the number is LUCKY" << std::endl;
            }
            else
            {
                std::cout << "Result Task 16: the number is NOT LUCKY" << std::endl;
            }
        }
    }
    return 0;
}