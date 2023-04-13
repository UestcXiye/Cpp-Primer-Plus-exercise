#include "queue.h"
#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

const int MIN_PER_HR = 60;

bool newcustomer(double x); // is there a new customer?

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios_base;
    // setting things up
    std::srand(std::time(0)); //  random initializing of rand()

    cout << "Case Study: Bank of Heather Automatic Teller\n";
    cout << "Enter maximum size of queue: ";
    int qs;
    cin >> qs;
    Queue line1(qs); // line queue holds up to qs people
    Queue line2(qs);

    cout << "The simulation hours: ";
    int hours = 100;
    // simulation will run 1 cycle per minute
    long cyclelimit = MIN_PER_HR * hours; // # of cycles

    cout << "The average number of customers per hour: ";
    double perhour = 1;
    double min_per_cust; //  average time between arrivals

    Item temp;          //  new customer data
    long turnaways = 0; //  turned away by full queue
    long customers = 0; //  joined the queue
    long served = 0;    //  served during the simulation
    long sum_line = 0;  //  cumulative line length
    int wait_time1 = 0; //  time until autoteller is free
    int wait_time2 = 0;
    int line1_size = 0;
    int line2_size = 0;
    long line_wait = 0; //  cumulative time in line
    double avetime = 0;

    // running the simulation
    while (avetime <= 1)
    {
        perhour++;
        while (!line1.isempty())
        {
            line1.dequeue(temp);
        }
        while (!line2.isempty())
        {
            line2.dequeue(temp);
        }
        min_per_cust = MIN_PER_HR / perhour;

        for (int cycle = 0; cycle < cyclelimit; cycle++)
        {
            if (newcustomer(min_per_cust)) // have newcomer
            {
                if (line1.isfull() && line2.isfull())
                    turnaways++;
                else if (line1_size < line2_size)
                {
                    customers++;
                    temp.set(cycle);     // cycle = time of arrival
                    line1.enqueue(temp); // add newcomer to line
                    line1_size++;
                }
                else
                {
                    customers++;
                    temp.set(cycle);     // cycle = time of arrival
                    line2.enqueue(temp); // add newcomer to line
                    line2_size++;
                }
            }
            if (wait_time1 <= 0 && !line1.isempty())
            {
                line1.dequeue(temp); // attend next customer
                line1_size--;
                wait_time1 = temp.ptime(); // for wait_time minutes
                line_wait += cycle - temp.when();
                served++;
            }
            if (wait_time2 <= 0 && !line2.isempty())
            {
                line2.dequeue(temp); // attend next customer
                line2_size--;
                wait_time2 = temp.ptime(); // for wait_time minutes
                line_wait += cycle - temp.when();
                served++;
            }
            if (wait_time1 > 0)
                wait_time1--;
            if (wait_time2 > 0)
                wait_time2--;
            sum_line += line1.queuecount();
            sum_line += line2.queuecount();
        }

        // reporting results
        if (customers > 0)
        {
            cout << "customers accepted: " << customers << endl;
            cout << "  customers served: " << served << endl;
            cout << "         turnaways: " << turnaways << endl;
            cout << "average queue size: ";
            cout.precision(2);
            cout.setf(ios_base::fixed, ios_base::floatfield);
            cout << (double)sum_line / cyclelimit << endl;
            cout << " average wait time: "
                 << (double)line_wait / served << " minutes\n";
        }
        else
            cout << "No customers!\n";
        avetime = (double)line_wait / served;
    }
    cout << "When there comes " << perhour
         << " people per hour, the average wait time will be about 1 minute.\n";
    cout << "Done!\n";

    system("pause");
    return 0;
}

//  x = average time, in minutes, between customers
//  return value is true if customer shows up this minute
bool newcustomer(double x)
{
    return (std::rand() * x / RAND_MAX < 1);
}