#include <stdio.h>
int main(){
    int s[100][100],n,m,min=100000000,max=0,min_mun,max_num;
    scanf("%d %d",&n,&m);
    for (int i = 0; i < n; i++)//Считываем двумерный массив
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&s[i][j]);
        }
    }
    for (int i = 0; i < n; i++)//Находим миксимальный столбец 
    {
        int summ=0;
        for (int j = 0; j <m ; j++)//Считаем сумму столбца
        {summ +=s[j][i];}
        if (max<summ)//Проверяем мексимальный ли это стлбец
        {max=summ;
         max_num=i;} }//Теперь присваем переменной max_num номер этого столбца
    for (int i = 0; i < n; i++)//То же самое с минимальным столбцом
    {
        int summ=0;
        for (int j = 0; j < m; j++)
        {
            summ+=s[j][i];
        }
        if (min>summ)
        {
            min=summ;
            min_mun=i;

        }
        
    }

    for (int i = 0; i < n; i++)
    { int l=s[i][min_mun];//сохраняем значение из минимального столбца
        s[i][min_mun]=s[i][max_num];//Меняяем значение из минимального столбца на значение из максимльного
        s[i][max_num]=l;}//А теперь меняем значение из макс столбца на сохранённое значение их мин
    for (int i = 0; i < n; i++)//Ввыводи массив
    {for (int j = 0; j < m; j++)
        {
            printf("%d ",s[i][j]);
        }
        printf("\n");}
    
}