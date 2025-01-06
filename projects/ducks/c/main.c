#include "duck.h"

#include <stdio.h>

int main(void) {
    Duck duck;
    Duck_ctor(&duck, 3);

    printf("Our duck is %d years old.", Duck_getAge(&duck));

    return 0;
}