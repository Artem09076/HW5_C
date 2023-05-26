#include <stdio.h>
int abs_arr(int arr[], int n){
    for (int i = 0; i < n; i++)//Вводим массив а +i это как arr[i], но это работает как указатель
    {
        scanf("%d",arr+i);
    }
    int *ptr=arr,count=0;
    for (int i = 0; i < n;ptr++, i++)//Мы проходимся по массиву с помощю указателя *ptr 
    {
        if (*ptr>=0)//Если число боьше нуля то всё хорошо и мы ввыводим значение если нет то умнажаем на -1 и выводим исправленное значение и +1 к count
        {
            printf("%d ", *ptr);
        }else
        {
            *ptr=*ptr * -1;
            printf("%d ", *ptr);
            count++;
        }
        
    }
    printf(" %d",count);//Ввыводим count как количество изменений
    printf("\n");

    return 0;
    
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[100];
    abs_arr(arr,n);
    return 0;
}