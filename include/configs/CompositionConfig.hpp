// CompositionConfig is the holder/manager of the  configuration objects. The role of the
// configuration objects is to hold the parameters passed in from the configuration file. The configuration
// classes define the rules or boundaries that the generator classes will work within.

#pragma once

#include <vector>

#include "TrackConfig.hpp"
#include "SectionConfig.hpp"
#include "TempoConfig.hpp"
#include "TimeSigConfig.hpp"
#include "KeyConfig.hpp"
#include "ProgressionConfig.hpp"

using std::vector;


class CompositionConfig {
    public:
        CompositionConfig(vector<TrackConfig> trackConfigs,
                          SectionConfig sectionConfig,
                          TempoConfig tempoConfig,
                          TimeSigConfig timeSigConfig,
                          KeyConfig keyConfig,
                          ProgressionConfig progConfig)
                                :
                                mTrackConfigs(trackConfigs),
                                mSectionConfig(sectionConfig),
                                mTempoConfig(tempoConfig),
                                mTimeSigConfig(timeSigConfig),
                                mKeyConfig(keyConfig),
                                mProgressionConfig(progConfig) { }

        void setTrackConfigs(vector<TrackConfig>& trackConfigs) { mTrackConfigs = trackConfigs; }
        vector<TrackConfig> getTrackConfig() { return mTrackConfigs; }
        void setSectionConfig(SectionConfig& sectionConfig) { mSectionConfig = sectionConfig; }
        SectionConfig getSectionConfig() { return mSectionConfig; }

        void setTempoConfig(TempoConfig& tempoConfig) { mTempoConfig = tempoConfig; }
        TempoConfig getTempoConfig() { return mTempoConfig; }
        void setTimeSigConfig(TimeSigConfig& timeSigConfig) { mTimeSigConfig = timeSigConfig; }
        TimeSigConfig getTimeSigConfig() { return mTimeSigConfig; }
        void setKeyConfig(KeyConfig& keyConfig) { mKeyConfig = keyConfig; }
        KeyConfig getKeyConfig() { return mKeyConfig; }
        void setProgressionConfig(ProgressionConfig& pConfig) { mProgressionConfig = pConfig; }
        ProgressionConfig getProgressionConfig() { return mProgressionConfig; }

    private:
        // Instrument tracks and song structure configurations
        vector<TrackConfig> mTrackConfigs;
        SectionConfig mSectionConfig;

        // song property configurations
        TempoConfig mTempoConfig;
        TimeSigConfig mTimeSigConfig;
        KeyConfig mKeyConfig;
        ProgressionConfig mProgressionConfig;
};
