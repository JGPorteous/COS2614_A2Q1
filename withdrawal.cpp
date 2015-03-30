/*
    Author : Justin Porteous
    Student : 51565579
    Assignment 2 Question 1
    Unique assignment no: 576441
    GitHub: https://github.com/JGPorteous/COS2614_A2Q1
 */


#include "withdrawal.h"

//Function signature for testing
//Withdrawal::Withdrawal(double amount, QDateTime transactionDateTime) : Transaction("Withdrawal", transactionDateTime)

// Original Function as per spec, where assumed QDateTime is Current Date/Time when transaction is added
Withdrawal::Withdrawal(double amount) : Transaction("Withdrawal", QDateTime::currentDateTime())
{
    m_Amount = amount;
    m_Percentage = 1.5; //I chose 1.5% for the Fee's Percentage
}

Withdrawal::~Withdrawal()
{

}

QString Withdrawal::toString()
{
    return Transaction::toString() + " Withdrawal of R" + QString::number(m_Amount) + ", Service fee R" + QString::number(this->computeCost());
}

double Withdrawal::computeCost()
{
    return m_Amount * (m_Percentage/100);
}
