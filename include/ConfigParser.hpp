#pragma once

#include <string>

#include "CompositionConfig.hpp"

class ConfigParser {
    public:
        ConfigParser() = default;

        CompositionConfig parse(string configFilepath);
};
