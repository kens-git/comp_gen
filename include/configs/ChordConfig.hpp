// TODO: fix everything wrong with this

#pragma once

#include <vector>
#include <string>
#include <tuple>

using std::vector;
using std::string;
using std::pair;

class ChordConfig {
    public:
        ChordConfig() = default;

        void addVoicing(unsigned int scaleDegree, pair<vector<string>, unsigned int> nextChords);

    private:
        // the vector holds the chord voicings for each scale degree
        // the pair is the collection of chord voicings,
        // the nested vector holds the voicings
        // the integer is the weighting
        vector<pair<vector<string>, unsigned int>> I;
        vector<pair<vector<string>, unsigned int>> II;
        vector<pair<vector<string>, unsigned int>> III;
        vector<pair<vector<string>, unsigned int>> IV;
        vector<pair<vector<string>, unsigned int>> V;
        vector<pair<vector<string>, unsigned int>> VI;
        vector<pair<vector<string>, unsigned int>> VII;
};
