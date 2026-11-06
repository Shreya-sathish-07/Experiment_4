#include<stdio.h>
void main()
{
    char first[50],last[50],full[100];
    int i,j,len;

    printf("enter first name: ");
    scanf("%s",first);
    printf("enter last name: ");
    scanf("%s",last);
    for(i=0,j=0;first[i]!='\0';i++,j++)
    {
        full[j]=first[i];

    }
    full[j]=' ';
    i=0;
    j++;
   for(i=0;last[i]!='\0';i++,j++)
    {
        full[j]=last[i];

    }
    full[j]='\0';
    for(len=0;full[len]!='\0';len++)
    {
       ;
    }
    printf("full name is : %s \n",full);
    printf("length of the name is : %d\n",len);
    if(len<=50)
    {
        printf("full name fits in the computer screen\n");
    }
    else
    {
        printf("full name does not fits in the computer screen ");
    }

}
