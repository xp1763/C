#include <stdio.h>
#include <unistd.h>

int call()
{
    return 0;
}
void printf_star()
{
    int i=0;
    while (1){
        if (i%2==0){
            printf(" *** *** \n");
            printf("*********\n");
            printf(" *******\n");
            printf(" ****\n");
            printf(" **\n");
        } else{
            printf("\n");
            printf(" *** *** \n");
            printf("*********\n");
            printf(" *******\n");
            printf(" ****\n");
            printf(" **\n");
        }
        sleep(1);
        i++;
        system("cls");
    }
}
int main() {
    //call();
    //printf("Hello, World!\n");
    //printf_star();
    int number;
    int value;
    number=22;
    value=66;
    printf("&number=%p\n",&number);
    printf("&value=%p",&value);
    return 0;
}
