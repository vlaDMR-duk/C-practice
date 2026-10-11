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
    struct Rule rules[3];
    rules[0].min = 5;   rules[0].max = 25;    
    rules[1].min = 300; rules[1].max = 800;   
    rules[2].min = 6;   rules[2].max = 8;     

    double values[3] = {17.4, 950.0, 7.0};

    for (int i = 0; i < 3; i++) {
        int sonuc = check(&(rules[i]),values[i]);
        printf("kural %d: %d\n", i, sonuc);
    }
    return 0;
}