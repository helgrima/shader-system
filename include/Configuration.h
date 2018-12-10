#ifndef CONFIGURATION_H
#define CONFIGURATION_H
#include <string>
#include <json.h>
#include <fstream>

namespace DemoSystem  {
    struct Demo {
        std::string name;
        std::string group;
    };

    struct Screen {
        int width;
        int height;
        int FPS;
    };

    struct Tune {
        std::string file;
        int BPM;
        int frequency;
    };

    struct Shaders {
        std::string vertex;
        std::string fragment;
    };

    class Configuration {
        public:
            Configuration();
            ~Configuration();
            bool read(std::string file);
            Demo demo;
            Screen screen;
            Tune tune;   
            Shaders shaders;
    };

}

#endif