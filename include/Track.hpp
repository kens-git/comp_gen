#pragma once

#include <vector>

#include "Section.hpp"

using std::vector;

class Track {
    public:
        Track() = default;

        void addSection(const Section& section);

        void removeSection(unsigned int index);

        unsigned int getNumSections() { return mSections.size(); }
        vector<Section> getSections() { return mSections; }

    private:
        vector<Section> mSections;
};
