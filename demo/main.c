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
void printf_style()
{
    int a=10;
    int b=-10;
    float c = 6.6f;
    double d =3.1415926;
    double e =10.10;
    char f = 'a';
    //有符号整数（可以输出负数）
    printf("a=%d\n",a);
    printf("a=%i\n",a);

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
