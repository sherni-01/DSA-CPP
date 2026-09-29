#include <iostream>
using namespace std;
#define MAX 100
class Stack
{
private:
    int stack[MAX];
    int top;
public:
    Stack()
    {
        top = -1;
    }
    // Push an element into the stack
    void push(int x)
    {
        if (top == MAX - 1)
        {
            cout << "Stack Overflow\n";
            return;
        }
        top++;
        stack[top] = x;
    }
    // Pop an element from the stack
    int pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow\n";
            return -1;
        }
        return stack[top--];
    }
    // Display the stack
    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Stack elements: ";

        for (int i = 0; i <= top; i++)
        {
            cout << stack[i] << " ";
        }

        cout << "\n";
    }
};

int main()
{
    Stack s;
    // Push elements
    for (int i = 0; i < MAX; i++)
    {
        s.push(i);
    }
    s.display();
    // Pop two elements
    cout << "Popped: " << s.pop() << "\n";
    cout << "Popped: " << s.pop() << "\n";
    s.display();
    return 0;
}
