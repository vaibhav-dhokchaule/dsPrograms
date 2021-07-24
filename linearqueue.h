#define max 10
struct queue
{
int data[max];
int front,rear;
};

struct queue pq;

void initqueue(struct queue *pq)
{
pq->rear=pq->front=-1;
}

void add(struct queue *pq,int x)
{
pq->rear++;
pq->data[pq->rear]=x;
}

int isfull(struct queue *pq)
{
if(pq->rear==max-1)
return 1;
else
return 0;
}

int remove1(struct queue *pq)
{
int x;
pq->front++;
x=pq->data[pq->front];
return x;
}

int isempty(struct queue *pq)
{
return(pq->front==pq->rear);
}

int peek(struct queue *pq)
{
return(pq->data[pq->rear]);
}
