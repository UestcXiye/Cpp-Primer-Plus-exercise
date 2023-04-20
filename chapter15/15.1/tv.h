#ifndef TV_H
#define TV_H

class Remote; // forward declaration

class Tv
{
private:
    int state;      // on or off
    int volume;     // assumed to be digitized
    int maxchannel; // maximum number of channels
    int channel;    // current channel setting
    int mode;       // broadcast or cable
    int input;      // TV or DVD

public:
    friend class Remote; // Remote can access Tv private parts
    enum
    {
        On,
        Off
    };
    enum
    {
        MinVal,
        MaxVal = 20
    };
    enum
    {
        Antenna,
        Cable
    };
    enum
    {
        TV,
        DVD
    };
    Tv(int s = Off, int mc = 125) : state(s), volume(5), maxchannel(mc), channel(2), mode(Cable), input(TV) {}
    void onoff() { state = (state == On) ? Off : On; }
    bool inon() const { return state == On; }
    bool volup();
    bool voldown();
    void chanup();
    void chandown();
    void set_mode() { mode = (mode == Antenna) ? Cable : Antenna; }
    void set_input() { input = (input == TV) ? DVD : TV; }
    void settings() const; // display all settings
    void set_rmode(Remote &r);
};

class Remote
{
private:
    int mode;  // control TV or DVD
    int rmode; // control Regular or Interact

public:
    friend class Tv;
    enum
    {
        Regular,
        Interact
    };
    Remote(int m = Tv::TV, int r = Regular) : mode(m), rmode(r) {}
    bool volup(Tv &t) { return t.volup(); }
    bool voldown(Tv &t) { return t.voldown(); }
    void onoff(Tv &t) { t.onoff(); }
    void chanup(Tv &t) { t.chanup(); }
    void chandown(Tv &t) { t.chandown(); }
    void set_chan(Tv &t, int c) { t.channel = c; }
    void set_mode(Tv &t) { t.set_mode(); }
    void set_input(Tv &t) { t.set_input(); }
    void show_rmode() const;
};

inline void Tv::set_rmode(Remote &r)
{
    using std::cout;

    if (state == On)
        r.rmode = (r.rmode == Remote::Regular) ? Remote::Interact : Remote::Regular;
    else
        cout << "The tv is off, please turn it on first.\n";
}

#endif