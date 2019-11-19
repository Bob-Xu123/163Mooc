#include <stdio.h>
#include <stdlib.h>

struct QueueNode {
	int value;
	struct QueueNode* next;
};
typedef struct QueueNode QNode;
typedef QNode Queue;


Queue CreatQueue() {
	Queue Q = (Queue)malloc(sizeof(struct QueueNode));
	Q->next = NULL;
	return Q;
}

bool isEmpty(Queue Q) {
	return (Q == NULL);
}

void Push(Queue Q, int E) {
	/*未编写*/
}