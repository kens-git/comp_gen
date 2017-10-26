#pragma once

class Instrument {
    public:
        Instrument() = defualt;
        Instrument(string name) : mName(name) { }

        void setName(const string& name) { mName = name; }
        string& getName() { return mName; }

    private:
        string mName;
};
