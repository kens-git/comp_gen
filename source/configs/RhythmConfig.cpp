#include "RhythmConfig.hpp"

void RhythmConfig::setMinMotif(float minMotifLength) {
    mMinMotifLength = minMotifLength;
}

void RhythmConfig::setMaxMotif(float maxMotifLength) {
    mMaxMotifLength = maxMotifLength;
}

void RhythmConfig::addNoteLength(pair<float, unsigned int> length) {
    mNoteLengths.push_back(length);
}

void RhythmConfig::addRestLength(pair<float, unsigned int> rest) {
    mRestLengths.push_back(rest);
}

float RhythmConfig::getMinMotifLength() {
    return mMinMotifLength;
}

float RhythmConfig::getMaxMotifLength() {
    return mMaxMotifLength;
}

vector<pair<float, unsigned int>>& RhythmConfig::getNoteLengths() {
    return mNoteLengths;
}

vector<pair<float, unsigned int>>& RhythmConfig::getRestLengths() {
    return mRestLengths;
}
