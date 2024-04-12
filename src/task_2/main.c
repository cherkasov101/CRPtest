#include "task_2.h"

int main() {
    double radius;
    if (scanf("%lf", &radius) != 1) {
        printf("n/a");
        return 0;
    }

    double volume = (4.0 / 3.0) * M_PI * pow(radius, 3);
    double mass = DENSITY * volume;
    double result = round(mass);

    printf("%.0lf", result);

    return 0;
}
