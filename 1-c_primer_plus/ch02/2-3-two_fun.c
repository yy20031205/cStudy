#include <stdio.h>


void butler(void);

int main(void)
{
  printf("print butler function\n");
  butler();

  return 0;
}

void butler(void)
{
  printf("This is butler function!\n");
}