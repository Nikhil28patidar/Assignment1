#include<stdio.h>
int main()
{
 int a,b,c;

 printf("\"DD/MM/YYYY\"");
 scanf("(%d/%d/%d)",&a,&b,&c);

printf("\"Day-DD Month-MM Year-YYYY (Day=%d Month=0%d Year=%d)\"",a,b,c);
return 0;

}
