// As it currently stands, this doesn't do anything besides passing back a value
// that is in an object that is passed to it. SectionGenerator exists in case
// the design of the section configurations changes, and/or the algorithm
// to generate them changes. So, instead of refactoring the CompositionGenerator
// and adding a SectionGenerator class, the SectionConfig and SectionGenerator
// classes can easily be subclassed or replaced.

#pragma once

#include <vector>

#include "Section.hpp"

class SectionConfig;

using std::vector;

class SectionGenerator {
    public:
        SectionGenerator() = default;

        vector<Section> generate(SectionConfig sectionConfig);
};
