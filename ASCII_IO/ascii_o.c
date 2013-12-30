
void pchar(char _inin)
{     
  asm("movb $0x0E, %ah\n\t"
      "movw $0x0000, %bx\n");
  asm("movb %0, %%al\n" : : "q"(_inin) : "memory", "%eax");
  asm("int $0x10\n");
}


void prints(char* _str)
{      
  int index = 0;
  while(_str[index] != 0)
  {
    pchar((char)*(_str+index));
	index++;
  }
}



