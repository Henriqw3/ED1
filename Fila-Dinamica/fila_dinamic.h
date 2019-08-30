#define SUCCESS 0
#define INVALID_NULL_POINTER -1
#define OUT_OF_MEMORY -2
#define OUT_OF_RANGE -3
#define ELEM_NOT_FOUND -4


struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3;
};

typedef struct elem_queue Elem;

typedef struct queue Queue;

Queue *queue_create();
void queue_free(Queue *qu);

// query operations
int queue_front(Queue *qu, struct aluno *al);

// insert/delete operations
int queue_push(Queue *qu, struct aluno al);
int queue_pop(Queue *qu);

// size operations 
int queue_size(Queue *qu);
int queue_empty(Queue *qu);
int queue_full(Queue *qu);

