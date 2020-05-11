typedef struct {
        void *elems;
        int elemSize;
        int logicLen;
        int allocLen;
} stack;
void StackNew(stack *s);
void StackDispose(stack *s);
void StackPush(stack *s, void* vp);
void* StackPop(stack *s);


