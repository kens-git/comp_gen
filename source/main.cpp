#include <string>
#include <vector>
#include <utility>

#include "ConfigParser.hpp"
#include "TrackConfig.hpp"
#include "SectionConfig.hpp"
#include "CompositionConfig.hpp"
#include "CompositionGenerator.hpp"
#include "Composition.hpp"

#include "Key.hpp"
#include "Scale.hpp"

using std::string;
using std::vector;
using std::pair;

int main(int argc, char** argv) {
    //ConfigParser configParser;

    //CompositionConfig compConfig = configParser.parse(string("configs/arv"));

    TrackConfig leadPiano;
    TrackConfig acousticGuitar;

    // Fill in TrackConfigs




    vector<TrackConfig> trackConfigs;

    SectionConfig sectionConfig;


    TempoConfig tempoConfig(120);

    TimeSigConfig timeSigConfig(4, 0.25f);

    KeyConfig keyConfig(Key::C, Scale::MAJOR);

    ProgressionConfig progConfig;
    progConfig.addProgression(1, pair<unsigned int, unsigned int>(2, 1));
    progConfig.addProgression(1, pair<unsigned int, unsigned int>(3, 1));
    progConfig.addProgression(2, pair<unsigned int, unsigned int>(1, 1));
    progConfig.addProgression(2, pair<unsigned int, unsigned int>(4, 1));
    progConfig.addProgression(3, pair<unsigned int, unsigned int>(4, 1));
    progConfig.addProgression(3, pair<unsigned int, unsigned int>(1, 1));
    progConfig.addProgression(4, pair<unsigned int, unsigned int>(2, 1));
    progConfig.addProgression(4, pair<unsigned int, unsigned int>(5, 1));
    progConfig.addProgression(5, pair<unsigned int, unsigned int>(4, 1));
    progConfig.addProgression(5, pair<unsigned int, unsigned int>(1, 1));



    CompositionConfig compConfig(
                trackConfigs,
                sectionConfig,
                tempoConfig,
                timeSigConfig,
                keyConfig,
                progConfig);

    Composition theComp = CompositionGenerator().generate(compConfig);



    return 0;
}
