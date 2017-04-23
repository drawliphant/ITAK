cmake_minimum_required(VERSION 3.7)
project(ITAK)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp
        Analyzer.cpp Analyzer.h Dictionary.cpp Dictionary.h
        KeyValue.cpp KeyValue.h
        Configuration.cpp Configuration.h
        ResultSet.cpp ResultSet.h
        DenialOfServiceAnalyzer.cpp DenialOfServiceAnalyzer.h
        PortScanAnalyzer.cpp PortScanAnalyzer.h)
add_executable(ITAK ${SOURCE_FILES})

set(TEST_FILES Testing/TestingMain.cpp
        Analyzer.cpp Analyzer.h Dictionary.cpp Dictionary.h
        KeyValue.cpp KeyValue.h
        Configuration.cpp Configuration.h
        ResultSet.cpp ResultSet.h
        DenialOfServiceAnalyzer.cpp DenialOfServiceAnalyzer.h
        Testing/ConfigurationTester.cpp Testing/ConfigurationTester.h
        Testing/ResultSetTester.cpp Testing/ResultSetTester.h)

add_executable(Test Testing/TestingMain.cpp ${TEST_FILES})