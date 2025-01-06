#ifndef DUCK_H
#define DUCK_H

typedef struct {
    unsigned age;
} Duck;

void Duck_ctor(Duck* const self, unsigned age);
void Duck_swim(Duck* const self);
void Duck_display(Duck* const self);
unsigned Duck_getAge(Duck* const self);
void Duck_setAge(Duck* const self, unsigned age);

#endif /* DUCK_H */