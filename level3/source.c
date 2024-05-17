#include <stdio.h>
#include <stdlib.h>

int m; // address of 0x0804988c

int v()
{
  int result;
  char s[520];

  fgets(s, 512, stdin); // fgets that uses a format given by the user: vulnerability!
  printf(s);
  result = m;
  if ( m == 64 ) 
  {
    fwrite("Wait what?!\n", 1u, 0xCu, stdout);
    return system("/bin/sh");
  }
  return result;
}

int main(void)
{
  return v();
}
