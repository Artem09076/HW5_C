#include <stdio.h>
int min(int a,int b){//Функция для выесления мин двух чисел 
    if (a>b)
    {
        return b;
    }else
    {
        return a;
    }
}
void reduce_fraction(int * a, int * b){
    scanf("%d",a);
    scanf("%d",b);
    for (int i = 2; i <=min(*a,*b); i++)//Пока i не будет больше мин числу из двух и он делится на оба без остатка делим на i
    {
        if ( *a%i==0 && *b%i==0)
        {
            *a/=i;
            *b/=i;

        }
        
    }
    
}
int main(){
    int result,result1;
    reduce_fraction(&result,&result1);//Мы присваем result переменную a и result1 переменную b
    printf("%d %d\n", result,result1);
}