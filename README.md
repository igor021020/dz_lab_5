# Домашнее задание к работе №4 (Задача 3)

## #1. Алгоритм

1. Начало
2. Задать исходные данные: x = 3.74×10⁻², y = -0.825, z = 0.16×10².
3. Вычислить значение v по формуле.
4. Вывести результат.
5. Конец

### Блок-схема
<img width="126" height="1072" alt="лаба 5 2 drawio" src="https://github.com/user-attachments/assets/580687f3-6658-4df1-a027-a0087ed1a29e" />


```mermarid
    Start((Начало)) --> Init[/Ввод x, y, z/]
    Init --> Calc1[Числитель]
    Calc1 --> Calc2[Знаменатель]
    Calc2 --> Calc3[Дробь]
    Calc3 --> Calc4[Степень]
    Calc4 --> Calc5[Косинус]
    Calc5 --> Calc6[Собрать формулу]
    Calc6 --> Output[/Вывод v/]
    Output --> End((Конец))
```
#2. Реализация программы
```c
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "RUS");

    double x = 3.74e-2;

    double y = -0.825;

    double z = 0.16e2;

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
```
#3. Результаты работы программы
Исходные данные:

x = 3.74e-02

y = -0.825

z = 1.60e+01

Вычисленное значение v = 1.0553

Ожидаемое значение v = 1.0553

#4. Информация о разработчике
Бакулин Игорь, БИЦТ-261
