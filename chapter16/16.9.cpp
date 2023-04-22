#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <ctime>

const int num = 100000;

int main()
{
    using std::cout;
    using std::endl;
    using std::list;
    using std::vector;

    vector<int> vi0;
    vector<int> vi;
    list<int> li;

    srand(time(0));
    for (int i = 0; i < num; i++)
    {
        int temp = rand();
        vi0.push_back(temp);
        vi.push_back(temp);
        li.push_back(temp);
    }

    clock_t start1 = clock();
    sort(vi.begin(), vi.end());
    clock_t end1 = clock();
    cout << "The time of sort() by STL: " << (double)(end1 - start1) / CLOCKS_PER_SEC << "s" << endl;

    clock_t start2 = clock();
    li.sort();
    clock_t end2 = clock();
    cout << "The time of sort() by list: " << (double)(end2 - start2) / CLOCKS_PER_SEC << "s" << endl;

    copy(vi0.begin(), vi0.end(), li.begin());
    clock_t start3 = clock();
    copy(li.begin(), li.end(), vi.begin());
    sort(vi.begin(), vi.end());
    copy(vi.begin(), vi.end(), li.begin());
    clock_t end3 = clock();
    cout << "The time of sort() by copy: " << (double)(end3 - start3) / CLOCKS_PER_SEC << "s" << endl;

    system("pause");
    return 0;
}
