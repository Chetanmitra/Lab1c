#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

//Tyler Ciuca tmc6093@psu.edu
//Dymea Schippers dxs5940@psu.edu
//Chetan Mitra czm5805@psu.edu
//Jian Hong Weng jpw6087@psu.edu


int main(void) {
  char *Celsius = readline("Enter temperatures in Celsius: ");
  double Cel = atof(Celsius);
  double far = 1.8*Cel+32;
  printf("%f° in Celsius is equivalent to %f Fahrenheit°\n",Cel, far);
  return 0;
}