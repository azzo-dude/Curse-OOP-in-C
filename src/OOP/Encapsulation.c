#include <stdio.h>

#define class struct

typedef class cat {
    char *name;
    int  age;  
} Cat;

int main() {
  Cat cat = {.name = "NYAN", .age= 7};
  printf("This my cat : %s, he is now %d year old.", cat.name, cat.age);
  return 0;
}
