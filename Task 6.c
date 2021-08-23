#include <stdio.h>
#include <stdlib.h>

void Read(char *Sic[])
{
    FILE *f = fopen("Sic.txt" , "r");
    
    printf("File opened successfully. \n ");
    printf("\nString input from file:");

    while(!feof(f))
    {
    	
        fgets(Sic, 100, f);
        puts(Sic);
        
    }
}

void reverse(char Sic[])
{
    Read(Sic);
    int i;
    printf("\nReversed string: ");
    for(i=12 ; i>=0 ; i--)
    {
    	
       printf("%c",Sic[i]);
       
    }
}

void Write(char Sic[])

{
    reverse(Sic);
    FILE *f = fopen("Sic.txt" , "w");
    int i;
    for(i =0; i<=12 ;i++)
    {
      fprintf(f, "%c", Sic[i]);
    }

    for(i =12; i>=0 ;i--)
    {
      fprintf(f, "%c", Sic[i]);
    }
    
    printf("\n The Reversed string is added to the file successfully\n");
    
}

int main()
{
    FILE *f = fopen("Sic.txt" , "r");
    char *Sic[12] = {0};
    Write(Sic);
    fclose(f);
    
    return 0;
}

