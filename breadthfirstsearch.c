#include<stdio.h>
#define max 50
int front=0,rear=0,queue[max],visited[7]={0};
void enqueue(int n){
queue[rear]=n;
rear++;
}
void  dequeue(){
    queue[front]=0;
    front++;
}
/*bool empty(){
if(front==-1){
    return true;
}
else{
    return false;
}
}*/
void bfs(){
int n=5;
int graph[5][5] = {{0,1,1,0,0},
                    {1,0,1,1,0},{1,1,0,0,1},{0,1,0,0,1},{0,0,1,1,0}};
enqueue(1);
visited[0]=1;
while(front!=rear){
    int current=queue[front];

    printf("%d",current);
    dequeue();
    for(int i=0;i<6;i++){
        if((graph[current-1][i]==1)&&(visited[i]==0)){
            visited[i]=1;
            enqueue(i+1);
        }
    }
}

}
 void main(){
bfs();

 }
