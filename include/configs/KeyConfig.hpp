#pragma once

#include "Key.hpp"
#include "KeyEvent.hpp"
#include "Scale.hpp"

class KeyConfig {
    public:
        KeyConfig(Key key, Scale scale) { mKeyEvents.push_back(KeyEvent(key, scale, 0.0f)); }
        KeyConfig(vector<KeyEvent> keyEvents) : mKeyEvents(keyEvents) { }

        void addKeyEvent(KeyEvent event) { mKeyEvents.push_back(event); }
        void addKeyEvent(Key key, Scale scale, float offset) { mKeyEvents.push_back(KeyEvent(key, scale, offset)); }

    private:
        vector<KeyEvent> mKeyEvents;
};
