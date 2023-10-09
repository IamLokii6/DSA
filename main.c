#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "./stack/stack.h"

int main()
{
    int option;
    int size;
    while (1)
    {
        printf("Enter:\n1)Stack ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
        {
            stack *s = createStack();
            int element;
            do
            {
                printf("1)Push \n2)Pop \n3)Peek \n4)Print stack \n5)Exit to exit\n");
                scanf("%d", &option);
                switch (option)
                {
                case 1:
                {
                    fflush(stdin);
                    printf("Enter the element to push:");
                    scanf("%d", &element);
                    push(s, element);
                    break;
                }

                 case 2:
                {
                    int data = pop(s);
                    if (data)
                    {
                        printf("The poped element is:%d\n", data);
                    }
                    break;
                }
                case 3:
                {
                    printf("The element at stack top:%c\n", peek(s));
                    break;
                }

                case 4:
                {
                    printStack(s);
                    break;
                }

                case 5:
                    break;

                default:
                    printf("Invalid input\n");
                }
            } while (option != 5);
            break;
        }
        }
    }
}