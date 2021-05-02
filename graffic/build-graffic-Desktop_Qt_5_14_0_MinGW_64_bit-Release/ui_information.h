/********************************************************************************
** Form generated from reading UI file 'information.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATION_H
#define UI_INFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_information
{
public:
    QLabel *label;

    void setupUi(QDialog *information)
    {
        if (information->objectName().isEmpty())
            information->setObjectName(QString::fromUtf8("information"));
        information->resize(400, 300);
        label = new QLabel(information);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 20, 331, 251));

        retranslateUi(information);

        QMetaObject::connectSlotsByName(information);
    } // setupUi

    void retranslateUi(QDialog *information)
    {
        information->setWindowTitle(QCoreApplication::translate("information", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("information", "<html><head/><body><p align=\"center\">\320\237\321\200\320\260\320\262\320\270\320\273\320\260 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\320\275\320\270\321\217.</p><p>1)\320\243\321\200\320\260\320\262\320\275\320\265\320\275\320\270\321\217 \320\277\321\200\321\217\320\274\321\213\321\205 \321\201\320\273\320\265\320\264\321\203\320\265\321\202 \320\262\320\262\320\276\320\264\320\270\321\202 \321\201\320\273\320\265\320\264\321\203\321\216\321\211\320\270\320\274 \320\276\320\261\321\200\320\260\320\267\320\276\320\274</p><p align=\"center\">y=(-15)+3x;</p><p>2)\320\243\321\200\320\260\320\262\320\275\320\265\320\275\320\270\321\217 \320\277\320\260\321\200\320\260\320\261\320\276\320\273 :</p><p align=\"center\">y=12+(-3)x+x^2;</p><p align=\"center\">y=x^1/2+3x-9</p><p>3)\320\243\321\200\320\260\320\262\320\275\320\265\320\275\320\270\321\217 \321\201 \320\274\320\276\320\264\321\203\320\273\320\265\320\274 :</p><p align=\"center\">y=|-1x|+9</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class information: public Ui_information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATION_H
