#include <stdio.h>
#include <stdlib.h>


int run()
{
  fwrite("Good... Wait what?\n", 1, 19, stdout);
  return system("/bin/sh");
}

int main(void)
{
  char s[64];

  return (int)gets(s);
}