#include <iostream>
#include <cstring>
#include "workermi.h"
#include "QueueTP.h"

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::strchr;

    QueueTp<Worker *> queue_worker;

    int ct;
    while (!queue_worker.isFull())
    {
        char choice;
        cout << "Enter the employee category:\n"
             << "w: waiter  s:singer  "
             << "t: singing waiter  q: quit\n";
        cin >> choice;
        while (strchr("wstq", choice) == NULL)
        {
            cout << "Please enter a w, s, t, or q: ";
            cin >> choice;
        }
        if (choice == 'q')
            break;
        switch (choice)
        {
        case 'w':
            queue_worker.enQueue(new Waiter);
            break;
        case 's':
            queue_worker.enQueue(new Singer);
            break;
        case 't':
            queue_worker.enQueue(new SingingWaiter);
            break;
        }
        cin.get();
        queue_worker.newQueue()->Set();
    }

    cout << "\nHere is your staff:\n";
    Worker *wrk;
    while (!queue_worker.isEmpty())
    {
        queue_worker.deQueue(wrk);
        cout << endl;
        wrk->Show();
        delete wrk;
    }
    cout << "Bye.\n";
    return 0;
}
