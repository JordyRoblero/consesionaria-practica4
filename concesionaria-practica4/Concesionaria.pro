TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
QT -= core gui

SOURCES += main.cpp \
           Vehiculo.cpp \
           Cliente.cpp \
           ControladorVehiculo.cpp \
           ControladorCliente.cpp

HEADERS += Vehiculo.h \
           Cliente.h \
           ControladorVehiculo.h \
           ControladorCliente.h
