#pragma once

#include <string>
#include <vector>

#include "TrackType.hpp"
#include "RhythmConfig.hpp"
#include "ChordConfig.hpp"
#include "MelodyConfig.hpp"

using std::string;
using std::vector;


class TrackConfig {
    public:
        TrackConfig() = default;
        TrackConfig(const string& name, const TrackType& trackType, const RhythmConfig& rhythmConfig,
                    const ChordConfig& chordConfig, const MelodyConfig& melodyConfig);

        void setName(const string& name);
        string& getName();
        void setTrackType(TrackType trackType);
        TrackType& getTrackType();

        void setRhythmConfig(const RhythmConfig& rhythmConfig);
        RhythmConfig& getRhythmConfig();
        void setChordConfig(const ChordConfig& chordConfig);
        ChordConfig& getChordConfig();
        void setMelodyConfig(const MelodyConfig& melodyConfig);
        MelodyConfig& getMelodyConfig();

    private:
        string mName;
        TrackType mTrackType;

        RhythmConfig mRhythmConfig;
        ChordConfig mChordConfig;
        MelodyConfig mMelodyConfig;
};
