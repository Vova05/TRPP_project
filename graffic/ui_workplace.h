/********************************************************************************
** Form generated from reading UI file 'workplace.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKPLACE_H
#define UI_WORKPLACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <qchartview.h>

QT_BEGIN_NAMESPACE

class Ui_workplace
{
public:
    QWidget *centralwidget;
    QChartView *vchrt;
    QPushButton *Enter;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_6;
    QPushButton *pushButton_9;
    QPushButton *sin;
    QPushButton *cos;
    QPushButton *pow1;
    QPushButton *abs1;
    QPushButton *pow2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *workplace)
    {
        if (workplace->objectName().isEmpty())
            workplace->setObjectName(QString::fromUtf8("workplace"));
        workplace->resize(692, 395);
        centralwidget = new QWidget(workplace);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMaximumSize(QSize(692, 352));
        vchrt = new QChartView(centralwidget);
        vchrt->setObjectName(QString::fromUtf8("vchrt"));
        vchrt->setGeometry(QRect(310, 30, 351, 261));
        vchrt->setContextMenuPolicy(Qt::PreventContextMenu);
        vchrt->setToolTipDuration(-1);
        Enter = new QPushButton(centralwidget);
        Enter->setObjectName(QString::fromUtf8("Enter"));
        Enter->setGeometry(QRect(10, 250, 180, 50));
        Enter->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 200, 90, 50));
        pushButton_7->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(100, 200, 90, 50));
        pushButton_8->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(190, 200, 90, 50));
        pushButton_6->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(190, 150, 90, 50));
        pushButton_9->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));
        sin = new QPushButton(centralwidget);
        sin->setObjectName(QString::fromUtf8("sin"));
        sin->setGeometry(QRect(100, 150, 90, 50));
        sin->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));
        cos = new QPushButton(centralwidget);
        cos->setObjectName(QString::fromUtf8("cos"));
        cos->setGeometry(QRect(10, 150, 90, 50));
        cos->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));
        pow1 = new QPushButton(centralwidget);
        pow1->setObjectName(QString::fromUtf8("pow1"));
        pow1->setEnabled(true);
        pow1->setGeometry(QRect(10, 100, 90, 50));
        pow1->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));
        abs1 = new QPushButton(centralwidget);
        abs1->setObjectName(QString::fromUtf8("abs1"));
        abs1->setGeometry(QRect(190, 100, 90, 50));
        abs1->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));
        pow2 = new QPushButton(centralwidget);
        pow2->setObjectName(QString::fromUtf8("pow2"));
        pow2->setGeometry(QRect(100, 100, 90, 50));
        pow2->setContextMenuPolicy(Qt::NoContextMenu);
        pow2->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 30, 271, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(horizontalLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        workplace->setCentralWidget(centralwidget);
        menubar = new QMenuBar(workplace);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 692, 22));
        workplace->setMenuBar(menubar);
        statusbar = new QStatusBar(workplace);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        workplace->setStatusBar(statusbar);

        retranslateUi(workplace);

        QMetaObject::connectSlotsByName(workplace);
    } // setupUi

    void retranslateUi(QMainWindow *workplace)
    {
        workplace->setWindowTitle(QCoreApplication::translate("workplace", "MainWindow", nullptr));
        Enter->setText(QCoreApplication::translate("workplace", "\320\222\320\262\320\276\320\264", nullptr));
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        pushButton_6->setText(QString());
        pushButton_9->setText(QString());
        sin->setText(QCoreApplication::translate("workplace", "sin(x)", nullptr));
        cos->setText(QCoreApplication::translate("workplace", "cos(x)", nullptr));
        pow1->setText(QCoreApplication::translate("workplace", "x^2", nullptr));
        abs1->setText(QCoreApplication::translate("workplace", "|x|", nullptr));
        pow2->setText(QCoreApplication::translate("workplace", "x^1/2", nullptr));
        label_2->setText(QCoreApplication::translate("workplace", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\204\321\203\320\275\320\272\321\206\320\270\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class workplace: public Ui_workplace {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKPLACE_H
