// TODO: fix everything wrong with this

#pragma once

#include <vector>
#include <utility>

using std::vector;
using std::pair;

class ProgressionConfig {
    public:
        ProgressionConfig();

        void addProgression(unsigned int scaleDegree, pair<unsigned int, unsigned int> nextChords);
        vector<pair<unsigned int, unsigned int>> getNextChords(unsigned int scaleDegree);

    private:
        // first value in pair is the scale degree
        // second value is the random weighting
        vector<pair<unsigned int, unsigned int>> I;
        vector<pair<unsigned int, unsigned int>> II;
        vector<pair<unsigned int, unsigned int>> III;
        vector<pair<unsigned int, unsigned int>> IV;
        vector<pair<unsigned int, unsigned int>> V;
        vector<pair<unsigned int, unsigned int>> VI;
        vector<pair<unsigned int, unsigned int>> VII;
};
