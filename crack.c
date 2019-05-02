#define _XOPEN_SOURCE
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int index;

int main(int argc,char* argv[])
{
if (argc!=2)
{
    printf("use crack\n");

    return 1;
}
char password [9]= {};
char test[9] = {};
char salt[3];
salt[0] =  argv[1][0];
salt[1] = argv[1][1];

char arr[95];
for(int i = 0; i< 95; i++)arr[i] = (char) (i+ 32);
{
    printf("trying to hack the hash \n");
}
for(int a= 0; a < 95; a++)
for(int b= 0; b < 95; b++)
for(int c= 0; c < 95; c++)
for(int d= 0; d < 95; d++)
for(int e= 0; e < 95; e++)
for(int f= 0; f < 95; f++)
for(int g= 0; g < 95; g++)
for(int h= 0; h < 95; h++)
{
    password[0] = arr[a];
     password[1] = arr[b];
      password[2] = arr[c];
        password[3] = arr[d];
          password[4] = arr[e];
            password[5] = arr[f];
              password[6] = arr[g];
                password[7] = arr[h];

  for(int j = 0, x= 8; j<= 7; j++, x--)
  {
      test[x] = '\0';

      if(strcmp(crypt(test,salt),argv[1])==0)
      {
          printf("password found!\n %s", test);
          return 0;

      }
  }

}

printf("nothing found:(\n)");
return 0;
}