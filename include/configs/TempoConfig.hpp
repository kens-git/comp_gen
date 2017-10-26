#pragma once

#include <vector>

#include "TempoEvent.hpp"

using std::vector;

class TempoConfig {
    public:
        TempoConfig(unsigned int tempo) { mTempoEvents.push_back(TempoEvent(tempo, 0.0f)); }
        TempoConfig(vector<TempoEvent> events) : mTempoEvents(events) { }

        void addTempoEvent(unsigned int tempo, float offset) { mTempoEvents.push_back(TempoEvent(tempo, offset)); }
        void addTempoEvent(TempoEvent event) { mTempoEvents.push_back(event); }

    private:
        vector<TempoEvent> mTempoEvents;
};
