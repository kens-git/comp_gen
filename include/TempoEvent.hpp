#pragma once

#include "CompositionEvent.hpp"

class TempoEvent : public CompositionEvent {
    public:
        TempoEvent(unsigned int tempo, float offset) { mTempo = tempo; mOffset = offset; }

    private:
        unsigned int mTempo;
};
