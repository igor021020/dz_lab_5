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