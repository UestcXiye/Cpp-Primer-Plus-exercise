#include <iostream>
using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void display_box(const box);
void cal_volume(box *);

int main()
{
    box example;

    cout << "Enter the name of maker:";
    cin.getline(example.maker, 40);
    cout << "Enter the height:";
    cin >> example.height;
    cout << "Enter the width:";
    cin >> example.width;
    cout << "Enter the length:";
    cin >> example.length;

    cal_volume(&example);
    display_box(example);

    system("pause");
    return 0;
}

void display_box(const box b)
{
    cout << "maker:  " << b.maker << endl;
    cout << "height:  " << b.height << endl;
    cout << "width:  " << b.width << endl;
    cout << "length:  " << b.length << endl;
    cout << "volume:  " << b.volume << endl;
}

void cal_volume(box *b)
{
    b->volume = b->length * b->width * b->height;
}