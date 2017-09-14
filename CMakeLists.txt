cmake_minimum_required(VERSION 3.8)
project(levitate)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp config/CConfig.cpp config/CConfig.h world/CVector3.cpp world/CVector3.h ConstsEnv.h network/ISocket.h network/CPackage.cpp network/CPackage.h network/CSocket.cpp network/CSocket.h network/protocol/Consts.h network/protocol/CPacket.cpp network/protocol/CPacket.h lang/CFormat.cpp lang/CFormat.h lang/BLanguage.h lang/lanpkg/zh-CN/CZh_CN.cpp lang/lanpkg/zh-CN/CZh_CN.h)
add_executable(levitate ${SOURCE_FILES})