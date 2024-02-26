#include<stdio.h>
int main()
{
    int age;
    printf("Enter an age:");//printing age
    scanf("%d",&age);//scanning age
    if(age>=18)//condition
    {
        printf("You are eligiable for vote");
    }
    else
    printf("You are not eligiable for vote");
    return 0;
}