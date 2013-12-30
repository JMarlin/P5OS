#include "../ASCII_IO/ascii_i.h"
#include "../ASCII_IO/ascii_o.h"
#include "cicomp.h"
#include "../FAT12/hiinter.h"
#include "commands.h"




int main(void)
{   
  asm(".code16gcc");  
  char prompt[] = "P5-> ";
  char inbuf[50];      
  clear();
  while(1)
  {
    pchar(10);
    pchar(13);
	prints(prompt);
	scans(50, inbuf);
	parse(inbuf);
  }
  return 0;
}

#include "commands.c"
#include "../ASCII_IO/ascii_i.c"
#include "../ASCII_IO/ascii_o.c"
#include "cicomp.c"
#include "../FAT12/hiinter.c"

