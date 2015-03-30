/*
    Author : Justin Porteous
    Student : 51565579
    Assignment 2 Question 1
    Unique assignment no: 576441
    GitHub: https://github.com/JGPorteous/COS2614_A2Q1
 */

#include "transaction.h"

Transaction::Transaction(QString type, QDateTime datetime)
{
    m_Type = type;
    m_DateTime = datetime;
}

Transaction::~Transaction()
{

}

QString Transaction::getType()
{
    return m_Type;
}

QString Transaction::toString()
{
    return "Transaction Type: " + m_Type + ", Date of Transaction " + m_DateTime.toString() + "\r\n";
}

QDateTime Transaction::getDateTime()
{
    return m_DateTime;
}

double Transaction::computeCost()
{
    return 0; // Dummy value as this function will be overwritten by classes inheriting Transaction class
}
