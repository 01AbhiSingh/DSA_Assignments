#include <iostream>
using namespace std;

// complete the functions
class Stack
{
    int A[100000];
    int end;

public:
    // constructor is called whenever an object of the class is declared
    Stack()
    {
        cout << "constructor is Called\n";
        end = 0;
    }

    // push the value at the back
    void push(int val)
    {
        cout << "pushing the val: " << val << " at the back of queue\n";
        A[end] = val;
        end++;
    }

    int top()
    {
        cout << "returning the value at top or last\n";
        return A[end - 1];
    }

    void pop()
    {
        cout << "removing the last element\n";
        end--;
    }

    int size()
    {
        cout << "return the size of the queue\n";
        return end;
    }

    bool isEmpty()
    {
        cout << "returning if the stack is empty\n";
        if (end == 0)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Stack s; // constructor is called on this line
    s.push(4);
    cout << "top: " << s.top() << "\n";
    s.pop();
    cout << "size: " << s.size() << "\n";
    cout << "empty: " << s.isEmpty() << "\n";

    s.push(5);
    s.push(3);
    cout << "front: " << s.top() << "\n";
    s.pop();
    cout << "size: " << s.size() << "\n";
    cout << "empty: " << s.isEmpty() << "\n";

    cout << "top: " << s.top() << "\n";
    s.pop();
    cout << "size: " << s.size() << "\n";
    cout << "empty: " << s.isEmpty() << "\n";
    return 0;
}
