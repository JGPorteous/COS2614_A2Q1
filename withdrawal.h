/*
    Author : Justin Porteous
    Student : 51565579
    Assignment 2 Question 1
    Unique assignment no: 576441
    GitHub: https://github.com/JGPorteous/COS2614_A2Q1
 */

#ifndef WITHDRAWAL_H
#define WITHDRAWAL_H

#include <QtCore>
#include "transaction.h"

class Withdrawal : public Transaction
{
public:
    // Original Function as per spec, where assumed QDateTime is Current Date/Time when transaction is added
    Withdrawal(double amount);

    // Function for testing
    //Withdrawal(double amount, QDateTime transactionDate);

    ~Withdrawal();
    QString toString();
    double computeCost();

private:
    double m_Amount;
    double m_Percentage;

};

#endif // WITHDRAWAL_H
