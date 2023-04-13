#include <iostream>
using namespace std;

#define ArrSize 10

int elem = 0;

void input_score(double *);
void display_score(double *);
double cal_mean_score(double *);

int main()
{
    double golfScore[ArrSize];

    cout << "Enter golf scores(enter non number to quit)\n";
    input_score(golfScore);
    cout << "All golf score:\n";
    display_score(golfScore);
    cout << "Average golf score:" << cal_mean_score(golfScore) << endl;

    system("pause");
    return 0;
}
void input_score(double *arr)
{
    for (int i = 0; i < ArrSize; i++)
    {
        cout << "Input the " << i + 1
             << "-th golf score: ";
        if (cin >> arr[i])
        {
        }
        else
        {
            elem = i;
            break;
        }
        elem = i;
    }
}
void display_score(double *arr)
{
    for (int i = 0; i < elem; i++)
        cout << arr[i] << " ";
    cout << endl;
}
double cal_mean_score(double *arr)
{
    double average = 0.0;

    for (int i = 0; i < elem; i++)
        average += arr[i];

    return average / (double)elem;
}