#pragma once

#include <vector>
#include <tuple>
#include <string>

#include "Section.hpp"
#include "SectionConfigOption.hpp"

using std::vector;
using std::tuple;
using std::string;

class SectionConfig {
    public:
        SectionConfig() = default;

        void addSection(const Section& section);
        vector<Section>& getSections();

    private:
        vector<SectionConfigOption> mConfig;
};
