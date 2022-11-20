#include <iostream>
using namespace std;

struct DoublyNode
{
    int data;
    DoublyNode *next;
    DoublyNode *prev;
};

DoublyNode *createNode(int val)
{
    DoublyNode *temp = new DoublyNode;
    temp->data = val;
    return temp;
}

// complete the functions
class Stack
{
    DoublyNode *tail;
    int s;

public:
    // constructor is called whenever an object of the class is declared
    Stack()
    {
        cout << "constructor is Called\n";
        tail = NULL;
        s = 0;
    }

    // push the value at the back
    void push(int val)
    {
        cout << "pushing the val: " << val << " at the back of queue\n";
        DoublyNode *temp = createNode(val);
        if (tail == NULL)
        {
            tail = temp;
            tail->next = tail;
            tail->prev = tail;
        }
        else
        {
            temp->next = tail->next;
            temp->prev = tail;
            tail->next->prev = temp;
            tail->next = temp;
            tail = temp;
        }
        s++;
    }

    int top()
    {
        cout << "returning the value at top or last\n";
        if (tail == NULL)
        {
            return -1;
        }
        else
        {
            return tail->data;
        }
    }

    void pop()
    {
        cout << "removing the last element\n";
        if (tail == NULL)
        {
            return;
        }
        else if (tail->next == tail)
        {
            tail = NULL;
            s--;
        }
        else
        {
            DoublyNode *temp = tail->next;
            tail->next = temp->next;
            temp->next->prev = tail;
            delete temp;
            s--;
        }
    }

    int size()
    {
        cout << "return the size of the queue\n";
        return s;
    }

    bool isEmpty()
    {
        cout << "returning if the stack is empty\n";
        if (tail == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
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
