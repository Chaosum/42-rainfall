#include <stdio.h>

char *p()
{
  char s[64];
  const void *v2;

  fflush(stdout); // empty stdout
  gets(s);
  v2 = get_return_address();
  if ( (v2 & 0xB0000000) == 0xb0000000 ) // check if the return address points to the stack
  {
    printf("(%p)\n", v2); // print the return address that was injected
    exit(1);
  }
  puts(s);
  return strdup(s);
}

int main(void)
{
  return (int)p();
}