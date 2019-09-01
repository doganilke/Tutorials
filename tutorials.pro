TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

HEADERS += \
    functors.h \
    logger.h

QMAKE_CXXFLAGS += -std=c++17

DESTDIR = $$(boost_DIR)
message(The project will be installed in $$DESTDIR)

INCLUDEPATH +=  $(boost_DIR)
LIBS += -L $(boost_lib)

-libboost_filesystem-mgw82-mt-d-x32-1_70
-libboost_filesystem-mgw82-mt-x32-1_70

