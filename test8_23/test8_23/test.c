#define _CRT_SECURE_NO_WARNINGS 1
//3. 用栈实现队列。
//使用栈实现队列的下列操作：
//push(x) --将一个元素放入队列的尾部。
//pop() --从队列首部移除元素。
//peek() --返回队列首部的元素。
//empty() --返回队列是否为空。
//示例 :
//MyQueue queue = new MyQueue();
//queue.push(1);
//queue.push(2);
//queue.peek();  // 返回 1
//queue.pop();   // 返回 1
//queue.empty(); // 返回 false
//说明:
//你只能使用标准的栈操作 -- 也就是只有 push to top, peek / pop from top, size, 和 is empty 操作是合法的。
//你所使用的语言也许不支持栈。你可以使用 list 或者 deque（双端队列）来模拟一个栈，只要是标准的栈操作即可。
//假设所有操作都是有效的 （例如，一个空的队列不会调用 pop 或者 peek 操作）。

typedef int DataType;
typedef struct Struck
{
	DataType* array;
	int capacity;
	int size;
}Stack;

//初始化
void StackInit(Stack* ps)
{
	assert(ps);
	ps->array = (SDataType*)malloc(sizeof(SDataType)* 10);
	if (NULL == ps->array)
	{
		assert(0);
		return;
	}

	ps->capacity = 10;
	ps->size = 0;
}

//扩容
void CheckCapacity(Stack* ps)
{
	assert(ps);
	if (ps->size == ps->capacity)
	{
		//1.开辟新空间
		SDataType* temp = (SDataType*)malloc(sizeof(SDataType)*ps->size * 2);
		if (temp == NULL)
		{
			assert(0);
			return;
		}
		//2.拷贝元素
		memcpy(temp, ps->array, sizeof(SDataType)*ps->size);
		//3.释放就空间
		free(ps->array);
		//4.使用新空间
		ps->array = temp;
		ps->capacity *= 2;
	}
}


//入栈：尾插
void StackPush(Stack* ps, SDataType data)
{
	assert(ps);
	CheckCapacity(ps);
	ps->array[ps->size++] = data;
}

//出栈：尾删
void StackPop(Stack* ps)
{
	if (StackEmpty(ps))
		return;

	ps->size--;
}

//获取栈顶的元素
SDataType StackTop(Stack* ps)
{
	assert(!StackEmpty(ps));
	return ps->array[ps->size - 1];
}

//获取栈中有效元素的个数
int StackSize(Stack* ps)
{
	assert(ps);
	return ps->size;
}

//检测栈是否为空
int StackEmpty(Stack* ps)
{
	assert(ps);
	return ps->size == 0;
}

//销毁
void StackDestroy(Stack* ps)
{
	assert(ps);
	free(ps->array);
	ps->array = NULL;
	ps->capacity = 0;
	ps->size = 0;
}

typedef struct 
{
	Stack s1;//模拟入队列
	Stack s2;//模拟出队列
} MyQueue;

/** Initialize your data structure here. */

MyQueue* myQueueCreate() 
{
	MyQueue* mq = (MyQueue*)malloc(sizeof(MyQueue));
	StackInit(&mq->s1);
	StackInit(&mq->s2);
	return mq;
}

/** Push element x to the back of queue. */
void myQueuePush(MyQueue* obj, int x) 
{
	StackPush(&obj->s1, x); 
}

/** Removes the element from in front of queue and returns that element. */
int myQueuePop(MyQueue* obj)
{
	if (StackEmpty(&obj->s2))
	{
		//将s1中的元素搬移到s2中
		while (!StackEmpty(&obj->s2))
		{
			StackPush(&obj->s2, StackTop(&obj->s1));
			StackPop(&obj->s1);
		}
	}
	int ret = StackTop(&obj->s2);
	StackPop(&obj->s2);
	return ret;
}

/** Get the front element. */
int myQueuePeek(MyQueue* obj) 
{
	if (StackEmpty(&obj->s2))
	{
		//将s1中的元素搬移到s2中
		while (!StackEmpty(&obj->s2))
		{
			StackPush(&obj->s2, StackTop(&obj->s1));
			StackPop(&obj->s1);
		}
	}

	return StackTop(&obj->s2);
}

/** Returns whether the queue is empty. */
bool myQueueEmpty(MyQueue* obj) 
{
	return StackEmpty(&obj->s1) && StackEmpty(&obj->s2);
}

void myQueueFree(MyQueue* obj) 
{
	StackDestroy(&obj->s1);
	StackDestroy(&obj->s2);
	free(obj);
}

/**
* Your MyQueue struct will be instantiated and called as such:
* MyQueue* obj = myQueueCreate();
* myQueuePush(obj, x);

* int param_2 = myQueuePop(obj);

* int param_3 = myQueuePeek(obj);

* bool param_4 = myQueueEmpty(obj);

* myQueueFree(obj);
*/