#include<stdio.h>
#include<stdbool.h>
#define size 4
int queue[size];
int t = 0; ///total item in queue
int front = 0,rear = -1;
bool isempty()
{
    if(t==0) return true;
    else
        return false;
 }
 bool isfull()
 {
     if(t==size)
        return true;
     else
        return false;
 }
 void enqueue(int a)
 {
     if(isfull())
     {
         printf("cannot store the queue is full\n");
         return;
     }
     else
     {
         rear = (rear+1)%size;
         queue[rear] = a;
         t++;
     }
 }
 int dequeue()
 {
     if(isempty())
     {
         printf("no item to return\n");
         return;
     }
     else
     {
         int c;
         c = queue[front];
         queue[front] = 0;
         front = (front+1)%size;
         t--;
         printf("return and remove the %d from queue\n",c);
         return c;
     }

 }
 void print()
 {
     for(int i = 0;i<size;i++)
     {
         printf("%d ",queue[i]);
     }
     printf("\n");
 }
int main()
{
    dequeue();
    print();
    enqueue(10);
    print();
    enqueue(20);
    print();
    dequeue();
    print();
    enqueue(30);
    print();
    enqueue(40);
    print();
    enqueue(50);
    print();
    enqueue(60);
    print();
    dequeue();
    print();
    dequeue();
    print();
    enqueue(100);
    print();
    return 0;
}
