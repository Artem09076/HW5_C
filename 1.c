#include <stdio.h>
#include <ctype.h>

int main() {
    int n, arr[100], k, arr1[100];//Мы создаём два массива
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {//Вводим первый массив
        scanf("%d", &arr[i]);
    }

    k = n / 2;
    for (int i = 0; i < n - k; i++) {//Здесь мы во второй массив добовляем вторую половину первого массива
        arr1[i] = arr[k + i];
    }

    for (int i = n - k, k1 = 0; i < n; i++, k1++) {//Здесь мы во вторую половину второго массива первую половину массва 
        arr1[i] = arr[k1];
    }
    for (int i = 0; i < n; i++) {//Ввыводим второй массив 
        printf("%d ", arr1[i]);
    }
    printf("\n");

    return 0;
}
