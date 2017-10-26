#include "TrackConfig.hpp"

TrackConfig::TrackConfig(const std::string &name, const TrackType &trackType, const RhythmConfig &rhythmConfig,
                         const ChordConfig &chordConfig, const MelodyConfig &melodyConfig) {
    mName = name;
    mTrackType = trackType;
    mRhythmConfig = rhythmConfig;
    mChordConfig = chordConfig;
    mMelodyConfig = melodyConfig;
}

string& TrackConfig::getName() {
    return mName;
}

TrackType& TrackConfig::getTrackType() {
    return mTrackType;
}

RhythmConfig& TrackConfig::getRhythmConfig() {
    return mRhythmConfig;
}

ChordConfig& TrackConfig::getChordConfig() {
    return mChordConfig;
}

MelodyConfig& TrackConfig::getMelodyConfig() {
    return mMelodyConfig;
}
