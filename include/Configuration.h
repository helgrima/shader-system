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

    struct Music {
        std::string file;
        int BPM;
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
            Music music;   
            Shaders shaders;
    };

}

#endif