#include <stdio.h>

void reverse();
void display();

char name[10];
char temp;

int main()
{

    printf("enter your name : ");
    scanf("%s", &name);
    printf("the name is : %s", name);

    reverse();

    dispaly();

    return 0;
}

void reverse()
{
    for (int i = 0; i < 5; i++)
    {
        temp = name[i];
        name[i] = name[9 - i];
        name[9 - i] = temp;
    }

    printf("\nthe reverse name is : %s", name);
}

void display()
{
    printf("This is kaushik");
}