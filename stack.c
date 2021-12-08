#define STACK_SIZE 10

typedef int element;
element stack[STACK_SIZE];
int top = -1;


int* createStack(size);
bool isFull();
int* push(int);
bool isEmpty(int*);
int  pop(int*);
