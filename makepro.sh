#!/bin/bash

qmake -spec macx-xcode $1
open `find . -name '*.xcodeproj'|head -n 1`