#include "SectionConfigOption.hpp"

#include "Random.hpp"

SectionConfigOption::SectionConfigOption(const std::string &name, unsigned int minLength,
           unsigned int maxLength, const vector<pair<std::string, unsigned char> > &nextSections) {
    mName = name;
    mMinLength = minLength;
    mMaxLength = maxLength;
    mNextSections = nextSections;
}

string& SectionConfigOption::getName() {
    return mName;
}

unsigned int SectionConfigOption::getMinLength() {
    return mMinLength;
}

unsigned int SectionConfigOption::getMaxLength() {
    return mMaxLength;
}

string& SectionConfigOption::getNext() {
    Random rand;

    unsigned char randNum = rand.rand(1, 100);
    unsigned char runningTotal;
    string nextSectionName = "null";

    for (pair<string, unsigned char> nextSection : mNextSections) {
        // assign each pair a range (e.g., 1-5, 5-50, 51 - 100)
        // check if randNum is in one of the ranges
    }

    return nextSectionName;
}
