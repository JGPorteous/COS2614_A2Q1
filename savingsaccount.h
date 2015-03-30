/*
    Author : Justin Porteous
    Student : 51565579
    Assignment 2 Question 1
    Unique assignment no: 576441
    GitHub: https://github.com/JGPorteous/COS2614_A2Q1
 */

#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include <QtCore>
#include "transaction.h"
#include "deposit.h"
#include "balanceenquiry.h"
#include "withdrawal.h"

class SavingsAccount
{
public:
    SavingsAccount(QString name, QString num);
    void addTransaction(Transaction* t);
    double totalTransactionCost();
    QString frequentTransactionType();
    QList<Transaction*> transactionOnAdate(QDate date);
    QString toString();

private:
    QString m_CustomerName;
    QString m_AccountNumber;
    QList<Transaction*> m_TransactionList;

};

#endif // SAVINGSACCOUNT_H
