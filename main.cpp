/*---------------------------------------------------------------------
                  Driver program to test the Queue class.
  ----------------------------------------------------------------------*/

#include <iostream>
using namespace std;

#include "Queue.h"

void print(Queue q)
{
    q.display(cout);
}

int main()
{
    Queue q1;
    cout << "Queue created.  Empty? " << boolalpha << q1.empty() << endl;

    //cout << "How many elements to add to the queue? ";
    //int numItems;
    //cin >> numItems;
    //for (int i = 1; i <= numItems; i++)
        //q1.enqueue(100 * i);

    q1.enqueue(70);
    q1.enqueue(80);
    q1.enqueue(50);
    q1.dequeue();
    q1.dequeue();
    q1.enqueue(90);
    q1.enqueue(60);
    q1.enqueue(10);
    cout << "Contents of queue q1 (via  print):\n";
    print(q1); cout << endl;
    cout << "Empty? " << boolalpha << q1.empty() << endl;
}