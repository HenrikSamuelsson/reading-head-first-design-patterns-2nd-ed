#include "duck.h"

void Duck_ctor(Duck* const self, unsigned age) {
    self->age = age;
}

unsigned Duck_getAge(Duck* const self) {
    return self->age;
}
