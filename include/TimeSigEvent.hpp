#pragma once

#include "CompositionEvent.hpp"

class TimeSigEvent : public CompositionEvent {
    public:
        TimeSigEvent(unsigned int beatsPerBar, float beatLength, float offset) {
                                                                                mBeatsPerBar = beatsPerBar;
                                                                                mBeatLength = beatLength;
                                                                                mOffset = offset; }

    private:
        unsigned int mBeatsPerBar;
        float mBeatLength;
};
