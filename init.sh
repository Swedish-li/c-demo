#!/bin/bash
BIN_DIR="bin"
BUILD_DIR="build"

if [ ! -d $BIN_DIR ] 
then 
    mkdir -p $BIN_DIR
fi

if [ ! -d $BUILD_DIR ]
then 
    mkdir -p $BUILD_DIR
fi