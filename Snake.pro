#-------------------------------------------------
#
# Project created by QtCreator 2013-07-20T11:46:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Snake
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    field.cpp \
    tile.cpp \
    snake.cpp

HEADERS  += widget.h \
    field.h \
    tile.h \
    snake.h
