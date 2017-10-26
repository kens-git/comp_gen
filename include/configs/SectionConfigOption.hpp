#pragma once

#include <string>
#include <utility>

using std::string;
using std::pair;

class SectionConfigOption {
    public:
        SectionConfigOption(const string& name, unsigned int minLength, unsigned int maxLength,
                            const vector<pair<string, unsigned char>>& nextSections);

        string& getName();
        unsigned int getMinLength();
        unsigned int getMaxLength();
        string& getNext();

    private:
        string mName;
        unsigned int mMinLength;
        unsigned int mMaxLength;
        vector<pair<string, unsigned char>> mNextSections;
};
