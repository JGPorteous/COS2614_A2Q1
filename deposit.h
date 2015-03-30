/*
    Author : Justin Porteous
    Student : 51565579
    Assignment 2 Question 1
    Unique assignment no: 576441
    GitHub: https://github.com/JGPorteous/COS2614_A2Q1
 */

#ifndef DEPOSIT_H
#define DEPOSIT_H

#include <QtCore>
#include "transaction.h"

class Deposit : public Transaction {
public:
    // Original Function as per spec, where I assumed that QDateTime is Current Date/Time when transaction is added
    Deposit(double amount);

    // I used the below for testing purposes
    //Deposit(double amount, QDateTime transactionDateTime);

    ~Deposit();
    QString toString();
    virtual double computeCost();

private:
    double m_Amount;
    double m_Fee;
};

#endif // DEPOSIT_H
