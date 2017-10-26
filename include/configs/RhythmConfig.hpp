#pragma once

#include <vector>
#include <tuple>

using std::vector;
using std::pair;

class RhythmConfig {
    public:
        RhythmConfig() = default;

        void setMinMotif(float minMotifLength);
        void setMaxMotif(float maxMotifLength);

        void addNoteLength(pair<float, unsigned int> length);
        void addRestLength(pair<float, unsigned int> rest);

        float getMinMotifLength();
        float getMaxMotifLength();

        vector<pair<float, unsigned int>>& getNoteLengths();
        vector<pair<float, unsigned int>>& getRestLengths();

    private:
        float mMinMotifLength;
        // if the maximum motif is 0, then there are no motifs
        float mMaxMotifLength;

        vector<pair<float, unsigned int>> mNoteLengths;
        vector<pair<float, unsigned int>> mRestLengths;
};
