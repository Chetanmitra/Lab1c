#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

//Author: Chetan Mitra czm5805@psu.edu
//Collaborator: Tyler Ciuca tmc6093@psu.edu
//Collaborator: Dymea Schippers dxs5940@psu.edu
//Collaborator: Jian Hong Weng jpw6087@psu.edu


int main(void) {
  char *Celsius = readline("Enter temperature in celsius: ");
  double Cel = atof(Celsius);
  double far = 1.8*Cel+32;
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n",Cel, far);
  return 0;
}