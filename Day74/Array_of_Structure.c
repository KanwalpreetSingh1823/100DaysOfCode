#include<stdio.h>
#include<string.h>
int main(){
    typedef struct Pokemon{
        int hp;
        int attack;
        int speed;
        char tier;
        char name[15];
    } Pokemon;

    Pokemon arr[2];
    int c = 1;
    for(int i=0;i<2; i++){
        printf("Enter attributes of pokemon : %d\n",c);
        scanf("%s",arr[i].name);
        scanf("%d",&arr[i].attack);
        scanf("%d",&arr[i].speed);
        scanf(" %c",&arr[i].tier);
        scanf("%d",&arr[i].hp);
        c++;
    }

    for(int i=0;i<2; i++){
        printf("\nAttributes of pokemon : %d\n",c);
        printf("Name = %s\n",arr[i].name);
        printf("Attack = %d\n",arr[i].attack);
        printf("Speed = %d\n",arr[i].speed);
        printf("Tier %c\n",arr[i].tier);
        printf("Hp = %d\n",arr[i].hp);
        c++;
    }
    return 0;
}