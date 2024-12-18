#include<stdio.h>
#include<stdbool.h>
#define MAX 10

typedef struct
{
    int data[MAX];
    int top;
}Stack;

bool isEmpty(Stack *s){
    return s->top == -1;
}

bool isFull(Stack* s){
    return s->top == MAX-1;
}
void push(Stack* s, int val){
    if(isFull(s)){
        printf("The stack is full");
    }
    else{
        s->top = s->top+1;
        s->data[s->top] = val;
        printf("Push element : %d\n", val);
    }
}
void pop(Stack* s){
    if(isEmpty(s)){
        printf("Underflow");
    }else{
        s->top = s->top-1;
        printf("Pop element : %d\n", s->data[s->top]);
    }
}
int main(){
    Stack s;
    s.top = -1;
    push(&s,5);
    push(&s,8);
    pop(&s);
    return 0;
}