/*
    Author : Justin Porteous
    Student : 51565579
    Assignment 2 Question 1
    Unique assignment no: 576441
    GitHub: https://github.com/JGPorteous/COS2614_A2Q1
 */

#include "deposit.h"


//Function signature for testing and specifying a date
//Deposit::Deposit(double amount, QDateTime transactionDateTime) : Transaction("Deposit", transactionDateTime)

// Original Function as per spec, where assumed QDateTime is Current Date/Time when transaction is added
Deposit::Deposit(double amount) : Transaction("Deposit", QDateTime::currentDateTime())
{
    m_Amount = amount;
    m_Fee = 2.5;
}

Deposit::~Deposit()
{

}

QString Deposit::toString()
{
    return Transaction::toString() + " Deposit amount R" + QString::number(m_Amount) + ", Service Fee R" + QString::number(this->computeCost());
}

double Deposit::computeCost()
{
    return m_Fee;
}
