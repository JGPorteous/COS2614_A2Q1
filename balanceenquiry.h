/*
    Author : Justin Porteous
    Student : 51565579
    Assignment 2 Question 1
    Unique assignment no: 576441
    GitHub: https://github.com/JGPorteous/COS2614_A2Q1
 */

#ifndef BALANCEENQUIRY_H
#define BALANCEENQUIRY_H

#include <QtCore>
#include "transaction.h"

class BalanceEnquiry : public Transaction
{
public:
    BalanceEnquiry(QDate fDate, QDate tDate);
    ~BalanceEnquiry();
    QString toString();
    double computeCost();

private:
    QDate m_FromDate;
    QDate m_ToDate;
};

#endif // BALANCEENQUIRY_H
