#include <stdio.h>

struct Rule {
    double min;
    double max;
};

int check(struct Rule *r,double value){
    if (((r->max)>=value) && (r->min)<=value){
        return 1;
    }
    else {
        return 0;
    }
}

int main()
{
    struct Rule r;
    r.min = 5;
    r.max = 25;
    printf("%d\n", check(&r, 17.4));   // 1
    printf("%d\n", check(&r, 30.0));   // 0
    printf("%d\n", check(&r, 5.0));
}
