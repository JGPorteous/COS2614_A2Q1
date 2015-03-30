/*
    Author : Justin Porteous
    Student : 51565579
    Assignment 2 Question 1
    Unique assignment no: 576441
    GitHub: https://github.com/JGPorteous/COS2614_A2Q1
 */

#include <QCoreApplication>
#include <QtCore>
#include "savingsaccount.h"

QTextStream out(stdout, QIODevice::WriteOnly);
QTextStream in(stdin, QIODevice::ReadOnly);

int main(int argc, char *argv[])
{
    QString input;

    QCoreApplication a(argc, argv);
    SavingsAccount s("Justin Porteous","178657856");

    out << "    Author : Justin Porteous" << endl;
    out << "    Student : 51565579" << endl;
    out << "    Assignment 2 Question 1" << endl;
    out << "    Unique assignment no: 576441" << endl;
    out << "    GitHub: https://github.com/JGPorteous/COS2614_A2Q1" << endl;
    out << "---------------------------------------------------------" << endl << endl;

    //Disaply Saving Account Details
    out << s.toString() << endl << endl;

    out << endl << "Checking Total costs so far R" << QString::number(s.totalTransactionCost()) << endl << endl;

    //Deposit - First Test
    Deposit d1(100);
    out << "Adding First Deposit" << endl;
    out << d1.toString() << endl;
    s.addTransaction(&d1);

    out << endl << "Checking Total costs so far R" << QString::number(s.totalTransactionCost()) << endl << endl;


    //Deposit - Second Test
    Deposit d2(5412);
    out << "Adding Second Deposit" << endl;
    out << d2.toString() << endl;
    s.addTransaction(&d2);

    //Deposit - Third Test
    Deposit d3(2648);
    out << "Adding Third Deposit" << endl;
    out << d3.toString() << endl;
    s.addTransaction(&d3);

    out.flush();

    //Chekcing Costs so far
    out << endl << "Checking Total costs so far R" << QString::number(s.totalTransactionCost()) << endl << endl;

    //Withdrawal - First Test
    Withdrawal w1(500);
    out << "Add First cash withdrawal" << endl;
    out << w1.toString() << endl;
    s.addTransaction(&w1);

    //Balance Enquiry - First Test
    BalanceEnquiry be1(QDate(2015,1,1),QDate(2015,1,1));
    out << endl << "Adding First Balance Enquiry" << endl;
    out << be1.toString() << endl;
    s.addTransaction(&be1);

    //Chekcing Costs so far
    out << endl << "Checking Total costs so far R" << QString::number(s.totalTransactionCost()) << endl << endl;

    //Withdrawal - Second Test
    Withdrawal w2(395);
    out << "Add Second cash withdrawal" << endl;
    out << w2.toString() << endl;
    s.addTransaction(&w2);

    //Chekcing Costs so far
    out << endl << "Checking Total costs so far R" << QString::number(s.totalTransactionCost()) << endl << endl;

    out << endl << endl;

    //Balance Enquiry - Second Test
    BalanceEnquiry be2(QDate(2015,1,2),QDate(2015,1,2));
    out << "Adding Second Balance Enquiry" << endl;
    out << be2.toString() << endl << endl;
    s.addTransaction(&be2);

    //Deposit - Forth Test
    Deposit d4(5412);
    out << "Adding Forth Deposit" << endl;
    out << d4.toString() << endl;
    s.addTransaction(&d4);

    //Disaply Saving Account Details
    out << endl << s.toString() << endl << endl;

    out << endl;
    out.flush();
    in << input;

    return 1; //a.exec();
}
