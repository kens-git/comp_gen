#pragma once

#include <vector>

#include "TimeSigEvent.hpp"

using std::vector;

class TimeSigConfig {
    public:
        TimeSigConfig(unsigned int beatsPerBar, float beatLength) {
            mTimeSigEvents.push_back(TimeSigEvent(beatsPerBar, beatLength, 0.0f)); }
        TimeSigConfig(vector<TimeSigEvent> events) : mTimeSigEvents(events) { }

        void addTimeSigEvent(unsigned int beatsPerBar, float beatLength, float offset) {
                                            mTimeSigEvents.push_back(TimeSigEvent(beatsPerBar, beatLength, offset)); }
        void addTimeSigEvent(TimeSigEvent event) { mTimeSigEvents.push_back(event); }

    private:
        vector<TimeSigEvent> mTimeSigEvents;
};
