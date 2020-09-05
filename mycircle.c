#include<stdio.h>
int main()
{
float i, j;
for(i = -10.0; i < 10.0; i+=0.5)
{
for(j = -10.0; j < 10.0; j+=0.5)
{
if(i*i + j*j < 100)
printf(". ");
else
printf(" ");
}
printf("\n");
}
return 0;
}
