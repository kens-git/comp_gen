#include "CompositionGenerator.hpp"

#include "CompositionConfig.hpp"
#include "Composition.hpp"

Composition CompositionGenerator::generate(CompositionConfig compConfig) {
    Composition theComp;

    vector<Section> sections = mSectionGenerator.generate(compConfig.getSectionConfig());
    // fill sections with bars

    // generate time signature(s)

    // generate tempo(s)

    // generate chord progression

    for (TrackConfig trackConfig : compConfig.getTrackConfig()) {
        // generate track
        // clone mSections

        // generate rhythm

        // generate chords

        // generate melody
    }

    return theComp;
}
