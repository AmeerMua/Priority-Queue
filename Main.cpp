
#include <iostream>
#include <conio.h>
#include "Queue.h"
using namespace std;

int main() {
    Queue queue;

    cout << "elements into the priority queue:" << endl;
    queue.enQueue(10, 2);  
    queue.enQueue(20, 1);  
    queue.enQueue(30, 3);  
    queue.enQueue(40, 0);  

    cout << "\nPriority queue after enqueuing elements:" << endl;
    queue.print();

    cout << "\nDequeuing the highest priority element..." << endl;
    queue.deQueue();
    queue.print();

    cout << "\nDequeuing another element..." << endl;
    queue.deQueue();
    queue.print();

    cout << "\nFinal state of the priority queue:" << endl;
    queue.print();
	getch();
    return 0;
}
