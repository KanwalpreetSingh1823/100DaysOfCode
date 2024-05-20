#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>

long long solve (int N, int start, int finish, int* Ticket_cost) {    // HackerEarth Problem
    start -= 1; 
    finish -= 1;
    long long min_cost_1 = 0, min_cost_2 = 0;
    for(int i=start; i!=finish; i = (i+1)%N){      // ClockWise
        min_cost_1 += Ticket_cost[i];
    }
    for(int i=finish; i!=start; i = (i+1)%N){     // AntiClockWise
        min_cost_2 += Ticket_cost[i];
    }
    return min_cost_1 < min_cost_2 ? min_cost_1 : min_cost_2;
}

int main() {
    int N;
    scanf("%d", &N);
    int start;
    scanf("%d", &start);
    int finish;
    scanf("%d", &finish);
    int i_Ticket_cost;
    int *Ticket_cost = (int *)malloc(sizeof(int)*(N));
    for(i_Ticket_cost = 0; i_Ticket_cost < N; i_Ticket_cost++)
    	scanf("%d", &Ticket_cost[i_Ticket_cost]);

    long long out_ = solve(N, start, finish, Ticket_cost);
    printf("%lld", out_);
}