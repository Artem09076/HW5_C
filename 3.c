#include <stdio.h>
//Как я правильно понял задачу начальные координаты 0,0
struct Move {
    int x;
    int y;
};

void getFinishPoint(struct Move arr[], int n,int* a,int* b) {
    *a=0;
    *b=0;
    for (int i = 0; i < n; i++)
    {
        *a+=arr[i].x;//Здесь мы суммируем перемищение по x 
        *b+=arr[i].y;//Здесь по y
    }
    
}

int main() {
    int n;
    scanf("%d", &n);

    struct Move moves[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &moves[i].x, &moves[i].y);//Мы вводим массив для x и y
    }
    int a,b;
    getFinishPoint(moves,n,&a,&b);
    printf("%d %d\n",a,b);
    return 0;
}
