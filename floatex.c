#include <stdio.h>
#include <float.h>

int main() {
  float f = FLT_MAX; // Maximum value for a float
  printf("Initial value of f: %f\n", f);
  
  f = f * 10;

  printf("Value of f: %f\n", f);

  return 0;
}
