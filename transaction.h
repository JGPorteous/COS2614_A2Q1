/*
    Author : Justin Porteous
    Student : 51565579
    Assignment 2 Question 1
    Unique assignment no: 576441
    GitHub: https://github.com/JGPorteous/COS2614_A2Q1
 */

#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <QtCore>

class Transaction
{
public:
    Transaction(QString type, QDateTime datetime);
    virtual ~Transaction();
    QString getType();
    QString toString();
    QDateTime getDateTime();
    virtual double computeCost();

protected:
    QString m_Type;
    QDateTime m_DateTime;


};

#endif // TRANSACTION_H
