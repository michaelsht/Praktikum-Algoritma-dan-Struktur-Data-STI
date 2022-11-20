# include "tanpaBomb.h"

Queue tanpaBomb(Queue queue, ElType bomb)
{
    Queue Q;
    int val;
    CreateQueue(&Q);
    while(!isEmpty(queue))
    {
        if(HEAD(queue) == bomb){
            dequeue(&queue,&val);
        }
        else{
            dequeue(&queue,&val);
            enqueue(&Q, val);
        }
    }
    return Q;
}