#include "SectionConfig.hpp"

void SectionConfig::addSection(const Section& section) {
    mSections.push_back(section);
}

vector<Section>& SectionConfig::getSections() {
    return mSections;
}
