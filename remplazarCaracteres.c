/*
 ============================================================================
 Name        : remplazarCaracteres.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
      int c;



      while((c=getchar())!= EOF){

             if(c=='\t'){
                putchar('\\');
                putchar('t');
                }
             else
                {if(c=='\b')
                      {putchar('\\');
                       putchar('b');

                      }
                  else
                     {if (c=='\\')
                            {putchar('\\');
                              putchar('\\');

                            }
                        else
                            {putchar(c);}
                }
                }
                }


	return EXIT_SUCCESS;
}

