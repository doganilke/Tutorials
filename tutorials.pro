QT +=core gui sql
TEMPLATE = app
CONFIG += c++11 console
CONFIG -= app_bundle


SOURCES += \
        main.cpp \
    jsonparser.cpp

HEADERS += \
    functors.h \
    logger.h \
    json.hpp \
    jsonparser.h

QMAKE_CXXFLAGS += -std=c++17

INCLUDEPATH +=  $(boost_DIR)
LIBS += -L $(boost_lib)

-libboost_filesystem-mgw82-mt-d-x32-1_70
-libboost_filesystem-mgw82-mt-x32-1_70

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
