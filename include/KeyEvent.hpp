// It's a misnomer, but both key and scale events are stored in a KeyEvent

#pragma once

#include "CompositionEvent.hpp"
#include "Key.hpp"
#include "Scale.hpp"

class KeyEvent : public CompositionEvent {
    public:
        KeyEvent(Key key, Scale scale, float offset) { mKey = key; mScale = scale; mOffset = offset; }

    private:
        Key mKey;
        Scale mScale;
};
