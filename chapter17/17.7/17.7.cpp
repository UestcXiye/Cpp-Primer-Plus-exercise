#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Store
{
private:
    ostream &os;

public:
    Store(ostream &fout) : os(fout) {}
    void operator()(const string &str)
    {
        size_t len = str.size(); // 使用size_t而不使用int是为了移植性好

        os.write((char *)&len, sizeof(size_t)); // store length
        os.write(str.data(), len);              // store characters
        // data()成员函数返回一个指针，该指针指向一个其中存储了字符串的字符数组
        // 它与c_str()区别是，它不会在该数组末尾加上一个空字符，而c_str()方法会
    }
};

void ShowStr(const string &str);
void GetStrs(ifstream &fin, vector<string> &vistr);

int main()
{

    vector<string> vostr;
    string temp;

    // acquire strings
    cout << "Enter strings (empty line to quit):\n";
    while (getline(cin, temp) && temp.size() > 0)
        vostr.push_back(temp);
    cout << "Here is your input.\n";
    for_each(vostr.begin(), vostr.end(), ShowStr);

    // store in a file
    ofstream fout("strings.dat", ios_base::out | ios_base::binary);
    for_each(vostr.begin(), vostr.end(), Store(fout));
    // for_each会自动调用Store(fout)(string & str)函数，过程如下：
    // Store(fout)调用构造函数Store(ostream & fout)创建对象，将fout对象赋给os，因为是引用，所以指向相同的内存区
    //然后for_each通过迭代器每次从容器vostr拿出一个string对象，然后调用operator()(const string & str)函数进行将数据写入文件
    fout.close();
    // recover file contents
    vector<string> vistr;
    ifstream fin("strings.dat", ios_base::in | ios_base::binary);
    if (!fin.is_open())
    {
        cerr << "Could not open file for input.\n";
        exit(EXIT_FAILURE);
    }
    GetStrs(fin, vistr);
    cout << "\nHere are the strings read from the file:\n";
    for_each(vistr.begin(), vistr.end(), ShowStr);

    return 0;
}

void ShowStr(const string &str)
{
    cout << str << endl;
}

void GetStrs(ifstream &fin, vector<string> &vistr)
{
    size_t len;

    while (fin.read((char *)&len, sizeof(size_t)))
    {
        char *str = new char[len + 1];
        fin.read(str, len);
        str[len] = '\0';
        vistr.push_back(str);
        delete[] str;
    }
}