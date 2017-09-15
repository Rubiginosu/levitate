cmake_minimum_required(VERSION 3.8)
project(levitate)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp config/CConfig.cpp config/CConfig.h world/CVector3.cpp world/CVector3.h ConstsEnv.h network/ISocket.h network/CSocket.cpp network/CSocket.h network/protocol/Consts.h lang/CFormat.cpp lang/CFormat.h lang/BLanguage.h lang/lanpkg/zh-CN/CZh_CN.cpp lang/lanpkg/zh-CN/CZh_CN.h network/CPacket.cpp network/CPacket.h world/IMetadata.cpp world/IMetadata.h world/CMetadataStore.cpp world/CMetadataStore.h world/CMetadataValue.cpp world/CMetadataValue.h world/plugin/IPlugin.cpp world/plugin/IPlugin.h world/plugin/APluginBase.cpp world/plugin/APluginBase.h world/exception/IException.h world/exception/CNullPointerException.cpp world/exception/CNullPointerException.h)
add_executable(levitate ${SOURCE_FILES})