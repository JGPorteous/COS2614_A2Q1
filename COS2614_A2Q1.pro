#/*
#    Author : Justin Porteous
#    Student : 51565579
#    Assignment 2 Question 1
#    Unique assignment no: 576441
#    GitHub: https://github.com/JGPorteous/COS2614_A2Q1
# */

#-------------------------------------------------
#
# Project created by QtCreator 2015-03-29T12:17:52
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = COS2614_A2Q1
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    deposit.cpp \
    withdrawal.cpp \
    balanceenquiry.cpp \
    transaction.cpp \
    savingsaccount.cpp

HEADERS += \
    deposit.h \
    withdrawal.h \
    balanceenquiry.h \
    transaction.h \
    savingsaccount.h
