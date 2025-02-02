QT       += core gui xml widgets

CONFIG += optimize_full c++11

TARGET = uconfig_gui
TEMPLATE = app
DESTDIR = "$$PWD/../../bin"

SOURCES += \
        $$PWD/uconfig_gui.cpp \
        $$PWD/uconfigmainwindow.cpp \
        $$PWD/importer/pinlistimporter.cpp \
        $$PWD/importer/startwizardpage.cpp \
        $$PWD/importer/filepage.cpp \
        $$PWD/importer/pdffilepage.cpp \
        $$PWD/importer/resultspage.cpp \
        $$PWD/importer/datasheetprocesspage.cpp \
        $$PWD/importer/datasheetthread.cpp \
        $$PWD/importer/componentspage.cpp \
        $$PWD/project/uconfigproject.cpp \
        $$PWD/componentinfoseditor.cpp

HEADERS  += \
        $$PWD/uconfigmainwindow.h \
        $$PWD/importer/pinlistimporter.h \
        $$PWD/importer/startwizardpage.h \
        $$PWD/importer/filepage.h \
        $$PWD/importer/pdffilepage.h \
        $$PWD/importer/resultspage.h \
        $$PWD/importer/datasheetprocesspage.h \
        $$PWD/importer/datasheetthread.h \
        $$PWD/importer/componentspage.h \
        $$PWD/project/uconfigproject.h \
        $$PWD/componentinfoseditor.h

RESOURCES += \
        $$PWD/img.qrc

RESOURCES += $$PWD/../../contrib/QDarkStyleSheet/qdarkstyle/style.qrc

unix:{
    QMAKE_LFLAGS_RPATH=
    QMAKE_LFLAGS += "-Wl,-rpath,\'\$$ORIGIN\'"
}

LIBS += -L"$$PWD/../../bin"
LIBS += -lkicad -lpdf_extract
INCLUDEPATH += $$PWD/../kicad
DEPENDPATH += $$PWD/../kicad

win32 : RC_FILE = uconfig_gui.rc
