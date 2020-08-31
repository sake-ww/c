#define _CRT_SECURE_NO_WARNINGS 1

//2. 用队列实现栈。
//使用队列实现栈的下列操作：
//push(x) --元素 x 入栈
//pop() --移除栈顶元素
//top() --获取栈顶元素
//empty() --返回栈是否为空
//注意 :
//你只能使用队列的基本操作-- 也就是 push to back, peek / pop from front, size, 和 is empty 这些操作是合法的。
//你所使用的语言也许不支持队列。 你可以使用 list 或者 deque（双端队列）来模拟一个队列 , 只要是标准的队列操作即可。
//你可以假设所有操作都是有效的（例如, 对一个空的栈不会调用 pop 或者 top 操作）。
//
//入栈：那个队列非空，就将元素插入到那个队列中
//出栈：那个队列不为空，将那个队列中前n-1个元素搬移到另一个队列中，然后将该元素删除掉
//获取栈顶元素：那个队列非空，就直接获取队尾的元素
//
//
//typedef struct tagLinkNode
//{
//	struct tagLinkNode *next;
//	int val;
//}LinkNode;
//
//typedef struct
//{
//	LinkNode *top;
//} MyStack;
//
///** Initialize your data structure here.在此处初始化数据结构 */
//
//MyStack* myStackCreate() 
//{
//	MyStack *stk = calloc(1, sizeof(MyStack));
//	return stk;
//}
//
///** Push element x onto stack.将元素x推到堆栈上 */
//void myStackPush(MyStack* obj, int x)
//{
//	LinkNode *node = malloc(sizeof(LinkNode));
//	node->val = x;
//	node->next = obj->top;
//	obj->top = node;
//}
//
///** Removes the element on top of the stack and returns that element.移除堆栈顶部的元素并返回该元素 */
//int myStackPop(MyStack* obj)
//{
//	LinkNode *node = obj->top;
//	int val = node->val;
//	obj->top = node->next;
//	free(node);
//
//	return val;
//}
//
///** Get the top element. 找到最上面的元素。*/
//int myStackTop(MyStack* obj) 
//{
//	return obj->top->val;
//}
//
///** Returns whether the stack is empty.返回堆栈是否为空 */
//bool myStackEmpty(MyStack* obj)
//{
//	return (obj->top == NULL);
//}
//
//void myStackFree(MyStack* obj) 
//{
//	while (obj->top != NULL)
//	{
//		LinkNode *node = obj->top;
//		obj->top = obj->top->next;
//		free(node);
//	}
//	free(obj);
//}
///**
//* Your MyStack struct will be instantiated and called as such:   mystack结构将被实例化并按如下方式调用：
//* MyStack* obj = myStackCreate();
//* myStackPush(obj, x);
//
//* int param_2 = myStackPop(obj);
//
//* int param_3 = myStackTop(obj);
//
//* bool param_4 = myStackEmpty(obj);
//
//* myStackFree(obj);
//*/