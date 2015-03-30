/*
    Author : Justin Porteous
    Student : 51565579
    Assignment 2 Question 1
    Unique assignment no: 576441
    GitHub: https://github.com/JGPorteous/COS2614_A2Q1
 */


#include "balanceenquiry.h"

BalanceEnquiry::BalanceEnquiry(QDate fDate, QDate tDate): Transaction("Balance Enquiry",QDateTime::currentDateTime())
{
    m_FromDate = fDate;
    m_ToDate = tDate;
}

BalanceEnquiry::~BalanceEnquiry()
{}

QString BalanceEnquiry::toString()
{
    return Transaction::toString() + " Balance with date range from: " + m_FromDate.toString() + " to: " + m_ToDate.toString();
}

double BalanceEnquiry::computeCost()
{
    return 0; //No cost to client
}
