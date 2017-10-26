#pragma once

#include <vector>
#include <utility>
#include <string>

using std::vector;
using std::pair;
using std::string;

class MelodyConfig {
    public:
        MelodyConfig() = default;

        // TODO: define these in MelodyConfig.cpp
        void setMinInterval(int minInterval) { mMinInterval = minInterval; }
        void setMaxInterval(int maxInterval) { mMaxInterval = maxInterval; }

        int getMinInterval() { return mMinInterval; }
        int getMaxInterval() { return mMaxInterval; }

        void setLowestNote(unsigned int lowestNote) { mLowestNote = lowestNote; }
        void setHighestNote(unsigned int highestNote) { mHighestNote = highestNote; }

        unsigned int getLowestNote() { return mLowestNote; }
        unsigned int getHighestNote() { return mHighestNote; }

        void setChordTonesOnly(bool onlyChordTones) { mChordTonesOnly = onlyChordTones; }
        void setUsehythmMotifs(bool useMotifs) { mUseRhythmMotifs = useMotifs; }

        bool chordTonesOnly() { return mChordTonesOnly; }
        bool getUseRhythmMotifs() { return mUseRhythmMotifs; }

        void setMinMotifLength(unsigned int length) { mMinMotifLength = length; }
        void setMaxMotifLength(unsigned int length) { mMaxMotifLength = length; }

        unsigned int getMinMotifLength() { return mMinMotifLength; }
        unsigned int getMaxMotifLength() { return mMaxMotifLength; }

    private:
        int mMinInterval;
        int mMaxInterval;
        int mLowestNote;
        int mHighestNote;

        bool mChordTonesOnly;

        // This is important! If the user decides to use the rhythm motifs then
        // the melodic motif will repeat the same intervals over the rhythmic
        // motif
        bool mUseRhythmMotifs;

        unsigned int mMinMotifLength;
        unsigned int mMaxMotifLength;
};
