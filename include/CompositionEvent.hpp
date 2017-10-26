// Base class for all 'composition events'. Composition events are how things like tempo changes,
// key modulations, and time signature changes are stored.
//
// The mOffset member is the 'place' in the bar that the event takes place, so, in 4/4 time
// if we wanted to signal a chord change on the third beat we would put the offset as 0.5
// If we wanted to set an event at the start of the bar the offset would be 0.0

#pragma once

class CompositionEvent {
    public:
        CompositionEvent() = default;
        CompositionEvent(float offset) { mOffset = offset; }

        void setOffset(float offset) { mOffset = offset; }
        float getOffset() { return mOffset; }

    protected:
        float mOffset;
};
