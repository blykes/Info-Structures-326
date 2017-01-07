// file Stack.h
// array stack implementation
#ifndef Stackh
#define Stackh
#include <cstdlib>

template<class StackType>
class Stack {
	// LIFO objects

public:
	Stack(int MaxStackSize = 10);
	~Stack() { delete[] stack; }
	bool IsEmpty() const { return top == -1; }
	bool IsFull() const { return top == MaxTop; }
	StackType Top() const;
	void push(StackType x);
	void pop();
	bool Finder(StackType x);

private:
	int top;    // current top of stack
	int MaxTop; // max value for top
	StackType *stack;   // element array
};

template<class StackType>
Stack<StackType>::Stack(int MaxStackSize)
{
	//Pre: none'
	//Post: Array of size MaxStackSize to implement stack
	// Stack constructor.
	MaxTop = MaxStackSize - 1;
	stack = new StackType[MaxStackSize];
	top = -1;
}

template<class StackType>
StackType Stack<StackType>::Top() const
{
	//Pre: stack is not empty
	// Post:  Returns top element.
	if (IsEmpty())
		throw logic_error("Top fails: Stack is empty");// Top fails
	return stack[top];
}

template<class StackType>
void Stack<StackType>::push(StackType x)
{
	//Pre: Stack is not full
	//Post: Push x to stack.
	//		Stack has one more element
	if (IsFull()) throw logic_error("Push fails: full stack"); // Push fails
	stack[++top] = x;
}

template<class StackType>
void Stack<StackType>::pop()
{
	//Pre: Stack is not Empty
	//Post: Stack has one less element
	if (IsEmpty()) {
		throw logic_error("Pop fails: Stack is empty");
		exit(1);
	}; // Pop fails
	top--;
}

template<class StackType>
bool Stack<StackType>::Finder(StackType x)
{
	for (int i = 0; i <= top; i++)
	{
		if (stack[i].PlateID == x.PlateID)
			return true;
	}
	return false;

}

#endif