void parse(char* instr)
{     
  pchar(10);
  pchar(13);      
  if(findfatfile(instr) && ( slen(instr) <= 8 ))
  {        
     if(strcmpci("SPB",ext(instr)))
     {
        fatexec(instr);        
     }else{     
        prints("PiCI Error: Not an SPB executable");             
     }
  }else{
     if(strcmpci(instr,"CLR"))
     {
        clear();        
     }else{
        if(strcmpci(instr,"CHPROMPT"))
        {
           chprompt();        
        }else{
           if(strcmpci(instr,"HELP"))
           {
              help();           
           }else{
              prints("PiCI Error: PEBKAC");        
           }
        }
     }
  }
  pchar(10);
  pchar(13);
}
