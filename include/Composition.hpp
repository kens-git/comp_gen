#pragma once

#include <vector>
#include <string>

#include "Track.hpp"

using std::vector;
using std::string;

class Composition {
    public:
        Composition() = default;

        void addTrack(const Track& track);

        void removeTrack(unsigned int index);
        void removeTrack(const string& name);

        vector<Track>& getTracks();

    private:
        vector<Track> mTracks;
};
