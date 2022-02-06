cmake_minimum_required(VERSION 3.14)
project(CodeWar)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(CodeWar
        rot13.cpp
        rot13.h
        MaxRotate.cpp
        MaxRotate.h
        CenturyFromYear.cpp
        CenturyFromYear.h
        convertFrac.cpp
        convertFrac.h
        Digitize.cpp
        Digitize.h
        findOdd.cpp
        FindOdd.h
        FindSmallest.cpp
        FindSmallest.h
        GetMiddle.cpp
        GetMiddle.h
        isValidWalk.cpp
        isValidWalk.h
        main.cpp
        main.h
        maxSequence.cpp
        maxSequence.h
        newfile.h
        NumberofPeopleinBus.cpp
        NumberofPeopleinBus.h
        StockList.cpp
        StockList.h
        sumTwoSmallestNumbers.cpp
        sumTwoSmallestNumbers.h
        TwoToOne.cpp
        TwoToOne.h
        Utility.cpp
        Utility.h)
