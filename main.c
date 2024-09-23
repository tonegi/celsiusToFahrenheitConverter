#include <stdio.h>

int main(void) {
  double celsius, fahrenheit;
  printf("Enter the temperature, in Celsius, that must be converted: ");
      scanf("%lf", &celsius);
  
    fahrenheit = (9 * celsius + 160)/5;
  
  printf("The temperature, in Fahrenheits, is: %.2f°F\n", fahrenheit);
  return 0;
}
