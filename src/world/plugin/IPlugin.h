//
// Created by axoford12 on 9/16/17.
//

#ifndef LEVITATE_IPLUGIN_H
#define LEVITATE_IPLUGIN_H

#include <string>
#include "../../config/CConfig.h"

class IPlugin {
    virtual void onLoad() = 0;

    virtual void onEnable() = 0;

    virtual bool isEnabled() = 0;

    virtual void onDisable() = 0;

    virtual bool isDisabled() = 0;

    virtual std::string getDataFolder() = 0;

    virtual void saveConfig() = 0;

    virtual void saveDefaultConfig() = 0;

    virtual void reloadConfig() = 0;
};


#endif //LEVITATE_IPLUGIN_H
