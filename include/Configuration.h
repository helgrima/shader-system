#ifndef CONFIGURATION_H
#define CONFIGURATION_H
#include <string>
#include <json.h>
#include <fstream>
#include <list>
#include "sync.h"

namespace DemoSystem  {
    struct Demo {
        bool release;
        std::string name;
        std::string group;
        std::string icon;
        bool log;
    };

    struct Screen {
        int width;
        int height;
        int FPS;
    };

    struct Tune {
        std::string file;
        double BPM;
        int RPB;
        int frequency;
    };

    struct Sync {
        int RPB;
        std::string host;
    };

    struct Shaders {
        std::string vertex;
        std::string fragment;
        int majorVersion;
        int minorVersion;
    };

    struct Track {
        enum TrackType {
            FLOAT1,
            FLOAT2,
            FLOAT3
        };
        
        TrackType type;
        std::string trackName;
        std::string variableName;
    };

    struct Asset {
        enum AssetType {
            STATIC_TEXTURE,
            DYNAMIC_TEXTURE
        };

        //Common for all types
        AssetType type;
        std::string file;
        std::string name;

        //For dynamic texture
        std::list<std::string> variables;
    };

    class Configuration {
        public:
            Configuration();
            ~Configuration();
            bool read(std::string file);
            Demo demo;
            Screen screen;
            Tune tune;   
            Sync sync;
            Shaders shaders;
            std::list<DemoSystem::Track> tracks;
            std::list<DemoSystem::Asset> assets;
    };

}

#endif