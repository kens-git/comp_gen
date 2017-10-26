#include "ChordConfig.hpp"

void ChordConfig::addVoicing(unsigned int scaleDegree, pair<vector<string>, unsigned int> voicing) {
    switch(scaleDegree) {
        case 1:
            I.push_back(voicing);
            break;
        case 2:
            II.push_back(voicing);
            break;
        case 3:
            III.push_back(voicing);
            break;
        case 4:
            IV.push_back(voicing);
            break;
        case 5:
            V.push_back(voicing);
            break;
        case 6:
            VI.push_back(voicing);
            break;
        case 7:
            VII.push_back(voicing);
            break;
        default:
            // Out of bounds
            // TODO: throw exception
            break;
    }
}
