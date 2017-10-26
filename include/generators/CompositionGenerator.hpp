#pragma once

#include "SectionGenerator.hpp"
#include "ProgressionGenerator.hpp"
#include "KeyGenerator.hpp"
#include "TimeSigGenerator.hpp"
#include "TempoGenerator.hpp"

#include "RhythmGenerator.hpp"
#include "ChordGenerator.hpp"
#include "MelodyGenerator.hpp"

#include "Section.hpp"

class Composition;
class CompositionConfig;

class CompositionGenerator {
    public:
        CompositionGenerator() = default;

        Composition generate(CompositionConfig compConfig);

    private:
        vector<Section> mSections;

        SectionGenerator mSectionGenerator;

        KeyGenerator mKeyGenerator;
        ProgressionGenerator mProgressionGenerator;
        TimeSigGenerator mTimeSigGenerator;
        TempoGenerator mTempoGenerator;

        RhythmGenerator mRhythmGenerator;
        ChordGenerator mChordGenerator;
        MelodyGenerator mMelodyGenerator;
};
