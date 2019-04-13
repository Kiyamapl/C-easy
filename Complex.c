#include <stdlib.h>
#include <stdio.h>
struct Complex { float re, im; };
struct Complex mul(struct Complex c1, struct Complex c2) {
    struct Complex c;
    c.re = c1.re*c2.re - c1.im*c2.im;
    c.im = c1.re*c2.im + c1.im*c2.re;
    return c;
}
int main(void) {
    struct Complex* c1 = malloc(sizeof(struct Complex));
    c1->re = 10.0f;
    c1->im = 3.0f;
    struct Complex* c2 = malloc(sizeof(struct Complex));
    c2->re = 0.2f;
    c2->im = 0.3f;
    struct Complex c = mul(*c1, *c2);
    printf("%f + i%f", c.re, c.im);
    free(c1);
    free(c2);
    return 0;
}
