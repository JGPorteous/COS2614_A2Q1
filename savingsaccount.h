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
