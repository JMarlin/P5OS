void clear(void)
{         
  int i = 0;
  for(i = 0; i < 2041; i++)
  pchar(0);  
  asm("movw $0x0000, %ax\n\t"
       "movw $0x0000, %bx\n\t"
       "movw $0x0000, %cx\n\t"
       "movw $0x0000, %dx\n\t"
       "movb $0x02, %ah\n\t"
       "int $0x10\n");
}

void chprompt(void)
{
   prints("Sorry, not yet implemented.");        
}

void help(void)
{
   clear();
   
   prints("Protical5 PinkCI command interpreter               ");pchar(10);pchar(13);
   prints("version R0                                         ");pchar(10);pchar(13);
   prints("Written by Joseph Marlin (stithyoshi@sbcglobal.net)");pchar(10);pchar(13);
   prints("---------------------------------------------------");pchar(10);pchar(13);
   prints("   Commands are:                                   ");pchar(10);pchar(13);
   prints("                                                   ");pchar(10);pchar(13);
   prints("        CLR..................Clear the screen.     ");pchar(10);pchar(13);
   prints("        CHPROMPT.............Not yet implemented.  ");pchar(10);pchar(13);
   prints("        HELP.................Print this message.   ");pchar(10);pchar(13);
   prints("                                                   ");pchar(10);pchar(13);
           
}
