// use_tv.cpp -- using the Tv and Remote classes
#include <iostream>
#include "tv.h"

int main()
{
    using std::cout;

    Tv s42;
    Remote grey;
    cout << "Initial settings for 42\" TV:\n";
    s42.settings();
    s42.onoff();
    s42.chanup();
    grey.show_rmode();
    s42.set_rmode(grey);
    cout << "\nAdjusted settings for 42\" TV:\n";
    s42.settings();
    s42.set_rmode(grey);
    grey.set_chan(s42, 10);
    grey.volup(s42);
    grey.volup(s42);
    cout << "\n42\" settings after using remote:\n";
    s42.settings();
    s42.set_rmode(grey);

    Tv s58(Tv::On);
    s58.set_mode();
    grey.set_chan(s58, 28);
    cout << "\n58\" settings:\n";
    s58.settings();
    grey.show_rmode();
    s58.set_rmode(grey);

    system("pause");
    return 0;
}
