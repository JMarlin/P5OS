
void scans(unsigned int length, char* outstr)
{      
  int index = 0;
  for(index = 0 ; index < length-1 ; index++)
  {
    outstr[index] = getch();
	pchar(outstr[index]);
	if(outstr[index] == 13)
	{
	outstr[index] = 0;
	break;
	}
  } 
  outstr[index+1] = 0;
}



char getch(void)
{     
  char let = 0;
  asm("movb $0x00, %%ah\n\t"
      "int $0x16\n\t"
      "movb %%al, %0\n" : "=g" (let) : : "%eax");
  return let;
}


int strcmpci(char* in1, char* in2)
{
    int index = 0;
    while(in1[index] != 0 && in2[index] != 0)
    {
       if(in1[index] > 64 && in1[index] < 91)
          in1[index] += 32;
       if(in2[index] > 64 && in2[index] < 91)
          in2[index] += 32;              
       if(in1[index] != in2[index])
       return 0;
       index++;
    }
    return 1;
}

int slen(char* ins)
{
   int index = 0;
   while(ins[index] != 0)
   {
      index++;        
   }
   return index;
}
