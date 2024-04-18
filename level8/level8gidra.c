#include "out.h"



int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  __gmon_start__();
  frame_dummy();
  iVar1 = __do_global_ctors_aux();
  return iVar1;
}



void FUN_08048400(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strdup(char *__s)

{
  char *pcVar1;
  
  pcVar1 = strdup(__s);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = fgets(__s,__n,__stream);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = fwrite(__ptr,__size,__n,__s);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = strcpy(__dest,__src);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int system(char *__command)

{
  int iVar1;
  
  iVar1 = system(__command);
  return iVar1;
}



void __gmon_start__(void)

{
  __gmon_start__();
  return;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



void _start(void)

{
  __libc_start_main(main);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x0804850a)
// WARNING: Removing unreachable block (ram,0x08048510)

void __do_global_dtors_aux(void)

{
  if (completed_6159 == '\0') {
    completed_6159 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x08048558)

void frame_dummy(void)

{
  return;
}



undefined4 main(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  undefined uVar8;
  undefined uVar9;
  bool bVar10;
  undefined uVar11;
  byte bVar12;
  byte local_90 [5];
  char local_8b [2];
  char acStack_89 [125];
  
  bVar12 = 0;
  do {
    printf("%p, %p \n",auth,service);
    pcVar2 = fgets((char *)local_90,0x80,stdin);
    bVar7 = false;
    bVar10 = pcVar2 == (char *)0x0;
    if (bVar10) {
      return 0;
    }
    iVar3 = 5;
    pbVar5 = local_90;
    pbVar6 = (byte *)"auth ";
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar7 = *pbVar5 < *pbVar6;
      bVar10 = *pbVar5 == *pbVar6;
      pbVar5 = pbVar5 + (uint)bVar12 * -2 + 1;
      pbVar6 = pbVar6 + (uint)bVar12 * -2 + 1;
    } while (bVar10);
    uVar8 = 0;
    uVar11 = (!bVar7 && !bVar10) == bVar7;
    if ((bool)uVar11) {
      auth = (undefined4 *)malloc(4);
      *auth = 0;
      uVar4 = 0xffffffff;
      pcVar2 = local_8b;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + (uint)bVar12 * -2 + 1;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4 - 1;
      uVar8 = uVar4 < 0x1e;
      uVar11 = uVar4 == 0x1e;
      if (uVar4 < 0x1f) {
        strcpy((char *)auth,local_8b);
      }
    }
    iVar3 = 5;
    pbVar5 = local_90;
    pbVar6 = (byte *)"reset";
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      uVar8 = *pbVar5 < *pbVar6;
      uVar11 = *pbVar5 == *pbVar6;
      pbVar5 = pbVar5 + (uint)bVar12 * -2 + 1;
      pbVar6 = pbVar6 + (uint)bVar12 * -2 + 1;
    } while ((bool)uVar11);
    uVar9 = 0;
    uVar8 = (!(bool)uVar8 && !(bool)uVar11) == (bool)uVar8;
    if ((bool)uVar8) {
      free(auth);
    }
    iVar3 = 6;
    pbVar5 = local_90;
    pbVar6 = (byte *)"service";
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      uVar9 = *pbVar5 < *pbVar6;
      uVar8 = *pbVar5 == *pbVar6;
      pbVar5 = pbVar5 + (uint)bVar12 * -2 + 1;
      pbVar6 = pbVar6 + (uint)bVar12 * -2 + 1;
    } while ((bool)uVar8);
    uVar11 = 0;
    uVar8 = (!(bool)uVar9 && !(bool)uVar8) == (bool)uVar9;
    if ((bool)uVar8) {
      uVar11 = (byte *)0xfffffff8 < local_90;
      uVar8 = acStack_89 == (char *)0x0;
      service = strdup(acStack_89);
    }
    iVar3 = 5;
    pbVar5 = local_90;
    pbVar6 = (byte *)"login";
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      uVar11 = *pbVar5 < *pbVar6;
      uVar8 = *pbVar5 == *pbVar6;
      pbVar5 = pbVar5 + (uint)bVar12 * -2 + 1;
      pbVar6 = pbVar6 + (uint)bVar12 * -2 + 1;
    } while ((bool)uVar8);
    if ((!(bool)uVar11 && !(bool)uVar8) == (bool)uVar11) {
      if (auth[8] == 0) {
        fwrite("Password:\n",1,10,stdout);
      }
      else {
        system("/bin/sh");
      }
    }
  } while( true );
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx
// WARNING: Removing unreachable block (ram,0x08048770)
// WARNING: Removing unreachable block (ram,0x08048778)

void __libc_csu_init(void)

{
  EVP_PKEY_CTX *in_stack_ffffffd4;
  
  _init(in_stack_ffffffd4);
  return;
}



void __libc_csu_fini(void)

{
  return;
}



// WARNING: This is an inlined function

void __i686_get_pc_thunk_bx(void)

{
  return;
}



void __do_global_ctors_aux(void)

{
  code *pcVar1;
  code **ppcVar2;
  
  if (__CTOR_LIST__ != (code *)0xffffffff) {
    ppcVar2 = &__CTOR_LIST__;
    pcVar1 = __CTOR_LIST__;
    do {
      ppcVar2 = ppcVar2 + -1;
      (*pcVar1)();
      pcVar1 = *ppcVar2;
    } while (pcVar1 != (code *)0xffffffff);
  }
  return;
}



void _fini(void)

{
  __do_global_dtors_aux();
  return;
}