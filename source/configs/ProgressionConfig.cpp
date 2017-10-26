#include "ProgressionConfig.hpp"

ProgressionConfig::ProgressionConfig() {

}

void ProgressionConfig::addProgression(unsigned int scaleDegree, pair<unsigned int, unsigned int> nextChords) {
    switch(scaleDegree) {
        case 1:
            I.push_back(nextChords);
            break;
        case 2:
            II.push_back(nextChords);
            break;
        case 3:
            III.push_back(nextChords);
            break;
        case 4:
            IV.push_back(nextChords);
            break;
        case 5:
            V.push_back(nextChords);
            break;
        case 6:
            VI.push_back(nextChords);
            break;
        case 7:
            VII.push_back(nextChords);
            break;
        default:
            // Out of bounds
            break;
    }
}

vector<pair<unsigned int, unsigned int>> ProgressionConfig::getNextChords(unsigned int scaleDegree) {
    switch(scaleDegree) {
        case 1:
            return I;
        case 2:
            return II;
        case 3:
            return III;
        case 4:
            return IV;
        case 5:
            return V;
        case 6:
            return VI;
        case 7:
            return VII;
        default:
            // out of bounds
            break;
    }
}
