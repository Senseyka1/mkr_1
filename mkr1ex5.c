#include <stdio.h>
#include <math.h>

int main() {
  //Оголошення змінних
  float a, b, z;

  // Введення
  printf("\nВведіть число a: "); scanf("%f", &a);
  printf("Введіть число b: ");   scanf("%f", &b);

  // Обчислення
  z = ((pow(a,2) - pow(b,2)) / (pow(a,2) + 2 * a * b + 3 * pow(b,2) + a + b));

  // Виведення
  printf("\nРезультат: %f", z);

  return 0;
}
