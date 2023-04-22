#include <iostream>
#include <vector>
#include <algorithm>
using std::vector;

vector<int> lotto(int, int);
void show(vector<int>);

int main()
{
    vector<int> winners;

    winners = lotto(51, 6);
    show(winners);

    system("pause");
    return 0;
}

vector<int> lotto(int m, int n)
{
    vector<int> temp;
    vector<int> result;

    for (int i = 0; i < m; i++)
        temp.push_back(i + 1);
    for (int i = 0; i < n; i++)
    {
        random_shuffle(temp.begin(), temp.end());
        result.push_back(temp[0]);
    }

    return result;
}

void show(vector<int> v)
{
    using std::cout;
    using std::endl;

    int len = v.size();
    
    for (int i = 0; i < len; i++)
        cout << v[i] << " ";
    cout << endl;
}