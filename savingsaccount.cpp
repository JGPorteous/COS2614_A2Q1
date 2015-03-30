/*
    Author : Justin Porteous
    Student : 51565579
    Assignment 2 Question 1
    Unique assignment no: 576441
    GitHub: https://github.com/JGPorteous/COS2614_A2Q1
 */

#include "savingsaccount.h"

SavingsAccount::SavingsAccount(QString name, QString num)
{
    m_CustomerName = name;
    m_AccountNumber = num;
}

void SavingsAccount::addTransaction(Transaction* t)
{
    m_TransactionList.append(t);
    // could also use m_TransactionList << t;
}

double SavingsAccount::totalTransactionCost()
{
    double totalTransactionCost = 0;

    foreach(Transaction* currentT, m_TransactionList)
    {
        totalTransactionCost += currentT->computeCost();
    }

    return totalTransactionCost;
}

QString SavingsAccount::frequentTransactionType()
{
    QMap<QString, int> tMap;
    tMap.insert("Deposit",0);
    tMap.insert("Withdrawal",0);
    tMap.insert("BalanceEnquiry",0);

    QString freqTranType = "";

    //Count Transactions by Type
    foreach(Transaction* currentT, m_TransactionList)
    {
        QString currentType = currentT->getType();

        if (currentType == "Deposit")
            tMap["Deposit"]++;
        else if (currentType == "Withdrawal")
            tMap["Withdrawal"]++;
        else if (currentType == "BalanceEnquiry")
            tMap["BalanceEnquiry"]++;
    }

    if(tMap["Deposit"] > tMap["Withdrawal"] && tMap["Deposit"] > tMap["BalanceEnquiry"])
        freqTranType = "Deposit";
    else if(tMap["Withdrawal"] > tMap["BalanceEnquiry"] && tMap["Withdrawal"] > tMap["Deposit"])
        freqTranType = "Withdrawal";
    else if(tMap["BalanceEnquiry"] > tMap["Deposit"] && tMap["BalanceEnquiry"] > tMap["Withdrawal"])
        freqTranType = "Balance Enquiry";
    else
        freqTranType = "Couldn't determine most frequent transaction";

    return freqTranType;
}

QList<Transaction*> SavingsAccount::transactionOnAdate(QDate date)
{
    QList<Transaction*> resultingTransactions;

    foreach(Transaction* currentT, m_TransactionList)
    {
        if (currentT->getDateTime().date() == date)
            resultingTransactions.append(currentT);
    }
    return resultingTransactions;
}

QString SavingsAccount::toString()
{
    QString returnResult = "Savings Account:\r\n";
    returnResult += "\tCustomer Name: " + m_CustomerName + "\r\n";
    returnResult += "\tAccount Number: " + m_AccountNumber + "\r\n";
    returnResult += "\r\nTransaction Details:";
    foreach (Transaction* currentT, m_TransactionList)
            returnResult += "\r\n\t" + currentT->toString();
    returnResult += "\rTotal Transaction Cost: R" + QString::number(totalTransactionCost());
    returnResult += "\rMost Frequent Transaction Type: " + frequentTransactionType();

    return returnResult;
}
