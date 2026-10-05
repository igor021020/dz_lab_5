# Домашнее задание к работе №4 (Задача 3)

## #1. Алгоритм

1. Начало
2. Задать исходные данные:
   * x = 3.74×10⁻²
   * y = -0.825
   * z = 0.16×10²
3. Вычислить значение `v` по формуле:
   v = (1 + sin²(x + y)) / |x - (2y) / (1 + x²y²)| * x^|y| + cos²(arctg(1 / z))
4. Вывести результат (значение `v`).
5. Конец

### Блок-схема


    Start((Начало)) --> Init[/x = 3.74e-2, y = -0.825, z = 0.16e2/]
    Init --> Calc1[Вычислить числитель: 1 + sin^2(x+y)]
    Calc1 --> Calc2[Вычислить знаменатель: |x - 2y / (1 + x^2*y^2)|]
    Calc2 --> Calc3[Вычислить дробь: числитель / знаменатель]
    Calc3 --> Calc4[Вычислить степень: x^|y|]
    Calc4 --> Calc5[Вычислить косинус: cos^2(atan(1/z))]
    Calc5 --> Calc6[Собрать формулу: v = дробь * степень + косинус]
    Calc6 --> Output[/Вывод v/]
    Output --> End((Конец))

    #2. Реализация программы
    #include <stdio.h>
#include <math.h>
#include <locale.h> 
int main() {
    setlocale(LC_ALL, "RUS");
    double x = 3.74e-2; // 3.74 * 10^-2
    double y = -0.825;
    double z = 0.16e2;  // 0.16 * 10^2
    double numerator = 1.0 + pow(sin(x + y), 2);
    double denominator = fabs(x - (2.0 * y) / (1.0 + pow(x, 2) * pow(y, 2)));
    double fraction = numerator / denominator;
    double power_part = pow(x, fabs(y));
    double cos_part = pow(cos(atan(1.0 / z)), 2);
    double v = fraction * power_part + cos_part;
    printf("Исходные данные:\n");
    printf("x = %.2e\n", x);
    printf("y = %.3f\n", y);
    printf("z = %.2e\n\n", z);
    printf("Вычисленное значение v = %.4f\n", v);
    printf("Ожидаемое значение   v = 1.0553\n");
    return 0;
}
#3. Результаты работы программы
Ниже представлен пример работы программы при заданных исходных значениях.
Исходные данные:
x = 3.74e-02
y = -0.825
z = 1.60e+01

Вычисленное значение v = 1.0553
Ожидаемое значение   v = 1.0553
#4. Информация о разработчике
Бакулин Игорь, БИЦТ-261


