#include <iostream>
using namespace std;

// complete the functions
class Queue
{
    int A[100000];
    int start;
    int end;

public:
    // constructor is called whenever an object of the class is declared
    Queue()
    {
        cout << "constructor is Called\n";
        start = 0;
        end = 0;
    }

    // push the value at the back
    void push(int val)
    {
        cout << "pushing the val: " << val << " at the back of queue\n";
        A[end] = val;
        end++;
    }
    int front()
    {
        cout << "returning the value at front\n";
        return A[start];
    }

    void pop()
    {
        cout << "removing the first element\n";
        start++;
    }

    int size()
    {
        cout << "return the size of the queue\n";
        return end - start;
    }

    bool isEmpty()
    {
        cout << "returning if the queue is empty or not\n";
        return start == end;
    }
};

int main()
{
    Queue q; // constructor is called on this line
    q.push(4);
    cout << "front: " << q.front() << "\n";
    q.pop();
    cout << "size: " << q.size() << "\n";
    cout << "empty: " << q.isEmpty() << "\n";

    q.push(5);
    q.push(3);
    cout << "front: " << q.front() << "\n";
    q.pop();
    cout << "size: " << q.size() << "\n";
    cout << "empty: " << q.isEmpty() << "\n";

    cout << "front: " << q.front() << "\n";
    q.pop();
    cout << "size: " << q.size() << "\n";
    cout << "empty: " << q.isEmpty() << "\n";
    return 0;
}
