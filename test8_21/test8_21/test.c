#define _CRT_SECURE_NO_WARNINGS 1

//3.栈和队列面试题
//1. 括号匹配问题。
//给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效。
//有效字符串需满足：
//左括号必须用相同类型的右括号闭合。
//左括号必须以正确的顺序闭合。
//注意空字符串可被认为是有效字符串。
//
//示例 1:
//输入 : "()"
//输出 : true
//示例 2 :
//输入 : "()[]{}"
//输出 : true
//示例 3 :
//输入 : "(]"
//输出 : false
//示例 4 :
//输入 : "([)]"
//输出 : false
//示例 5 :
//输入 : "{[]}"
//输出 : true


typedef char SDataType;
typedef struct Stack
{
	SDataType* array;
	int capacity;//容量
	int size;//栈中元素的个数   栈顶
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

//检测栈是否为空
int StackEmpty(Stack* ps)
{
	assert(ps);
	return ps->size == 0;
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



//销毁
void StackDestroy(Stack* ps)
{
	assert(ps);
	free(ps->array);
	ps->array = NULL;
	ps->capacity = 0;
	ps->size = 0;
}

bool isValid(char * s)
{
	Stack st;
	StackInit(&st);

	bool ret = true;

	int len = strlen(s);
	for (int i = 0; i < len; ++i)
	{
		//左括号入栈
		if ('(' == s[i] || '[' == s[i] || '{' == s[i])
			StackPush(&st, s[i]);
		else
		{
			//当前括号为右括号，当时栈是空的，说明：没有与之对应的左括号
			if (StackEmpty(&st))
			{
				ret = false;
				break;
			}

			//当前括号为右括号
			char ch = StackTop(&st);
			StackPop(&s);

			//用当前右括号检测是否与栈顶的左括号匹配
			if ((ch == '('&&')' == s[i]) || (ch == '{'&&'}' == s[i]) || (ch == '['&&']' == s[i]))
			{
				StackPop(&st);
				continue;
			}
			else
			{
				ret = false;
				break;
			}
		}
	}

	//左括号比右括号多
	if (!StackEmpty(&st))
		ret = false;

	StackDestroy(&st);
	return ret;
}
return false;//之所以没用这个，是因为：导致栈没有销毁而引起内存泄漏