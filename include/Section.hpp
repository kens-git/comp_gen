#pragma once

#include <vector>
#include <string>

#include "Bar.hpp"

using std::vector;
using std::string;

class Section {
    public:
        Section() = default;

        void addBar(const Bar& bar);

    private:
        vector<Bar> mBars;
        string mName;
};
