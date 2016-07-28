QT       += core xml xmlpatterns
include(..\..\..\Qt.711.2016.common\lib\common\common.pri)

SOURCES +=  $$PWD\loadsaveprocessorxml.cpp \

HEADERS  += $$PWD\siloadsaveprocessor.h \
            $$PWD\loadsaveprocessorxml.h

INCLUDEPATH += $$PWD\

DISTFILES += \
    $$PWD\../../HISTORY.txt \
    $$PWD\../../README.txt
