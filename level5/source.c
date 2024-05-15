#include <stdio.h>
#include <stdlib.h>

asm(
Disassembly of section .plt:

08048370 <.plt>:
 8048370:	ff 35 1c 98 04 08    	push   0x804981c
 8048376:	ff 25 20 98 04 08    	jmp    *0x8049820
 804837c:	00 00                	add    %al,(%eax)
	...

08048380 <printf@plt>:
 8048380:	ff 25 24 98 04 08    	jmp    *0x8049824
 8048386:	68 00 00 00 00       	push   $0x0
 804838b:	e9 e0 ff ff ff       	jmp    8048370 <.plt>

08048390 <_exit@plt>:
 8048390:	ff 25 28 98 04 08    	jmp    *0x8049828
 8048396:	68 08 00 00 00       	push   $0x8
 804839b:	e9 d0 ff ff ff       	jmp    8048370 <.plt>

080483a0 <fgets@plt>:
 80483a0:	ff 25 2c 98 04 08    	jmp    *0x804982c
 80483a6:	68 10 00 00 00       	push   $0x10
 80483ab:	e9 c0 ff ff ff       	jmp    8048370 <.plt>

080483b0 <system@plt>:
 80483b0:	ff 25 30 98 04 08    	jmp    *0x8049830
 80483b6:	68 18 00 00 00       	push   $0x18
 80483bb:	e9 b0 ff ff ff       	jmp    8048370 <.plt>

080483c0 <__gmon_start__@plt>:
 80483c0:	ff 25 34 98 04 08    	jmp    *0x8049834
 80483c6:	68 20 00 00 00       	push   $0x20
 80483cb:	e9 a0 ff ff ff       	jmp    8048370 <.plt>

080483d0 <exit@plt>:
 80483d0:	ff 25 38 98 04 08    	jmp    *0x8049838
 80483d6:	68 28 00 00 00       	push   $0x28
 80483db:	e9 90 ff ff ff       	jmp    8048370 <.plt>

080483e0 <__libc_start_main@plt>:
 80483e0:	ff 25 3c 98 04 08    	jmp    *0x804983c
 80483e6:	68 30 00 00 00       	push   $0x30
 80483eb:	e9 80 ff ff ff       	jmp    8048370 <.plt>
)

void o()
{
  system("/bin/sh");
  exit(1);
}

void  n()
{
  char s[520];

  fgets(s, 512, stdin);
  printf(s);
  exit(1);
}

int  main(void)
{
  n();
}