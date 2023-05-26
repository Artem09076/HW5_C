#include <stdio.h>
struct Person
{
	int age; // возраст
	char name[30]; // имя
};
float averageAge(struct Person arr[], int n){
    int age=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i].age);//Вводим возраст в массив
        age+=arr[i].age;//Суммируем возраст
        scanf("%s",&arr[i].name);//Вводим имя(но эта штука бесполезна)
    }
    float k=(float)age/n;//Делим сумму лет на количество людей
    return k;
}
int main(){
    struct Person agname[100];
    int n;
    scanf("%d", &n);
    float result=averageAge(agname,n);//Присваиваем переменной result то что выводит функция averageAge
    printf("%f\n",result);
    
}