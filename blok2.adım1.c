#include <stdio.h>

struct Rule {
    double min;
    double max;
};

int main()
{
    struct Rule r;
    r.min = 5;
    r.max = 25;
    printf("min = %.1f, max = %.1f\n", r.min, r.max);

    struct Rule *p = &r;
    p->max = 30;
    printf("max = %.1f\n", r.max);
}