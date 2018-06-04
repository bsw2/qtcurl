/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *controlsLayout;
    QFormLayout *inputFieldsLayout;
    QLabel *urlLabel;
    QCheckBox *useUnixSocket;
    QLabel *unixSocketPathLabel;
    QLineEdit *unixSocketPath;
    QLabel *urlLabel1;
    QLineEdit *urlEdit;
    QLabel *fileNameLabel;
    QLineEdit *fileNameEdit;
    QPushButton *startStopButton;
    QProgressBar *progressBar;
    QGroupBox *transferLogBox;
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *transferLog;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(440, 300);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        controlsLayout = new QHBoxLayout();
        controlsLayout->setSpacing(6);
        controlsLayout->setObjectName(QStringLiteral("controlsLayout"));
        inputFieldsLayout = new QFormLayout();
        inputFieldsLayout->setSpacing(6);
        inputFieldsLayout->setObjectName(QStringLiteral("inputFieldsLayout"));
        inputFieldsLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        urlLabel = new QLabel(centralWidget);
        urlLabel->setObjectName(QStringLiteral("urlLabel"));

        inputFieldsLayout->setWidget(0, QFormLayout::LabelRole, urlLabel);

        useUnixSocket = new QCheckBox(centralWidget);
        useUnixSocket->setObjectName(QStringLiteral("useUnixSocket"));

        inputFieldsLayout->setWidget(0, QFormLayout::FieldRole, useUnixSocket);

        unixSocketPathLabel = new QLabel(centralWidget);
        unixSocketPathLabel->setObjectName(QStringLiteral("unixSocketPathLabel"));

        inputFieldsLayout->setWidget(1, QFormLayout::LabelRole, unixSocketPathLabel);

        unixSocketPath = new QLineEdit(centralWidget);
        unixSocketPath->setObjectName(QStringLiteral("unixSocketPath"));

        inputFieldsLayout->setWidget(1, QFormLayout::FieldRole, unixSocketPath);

        urlLabel1 = new QLabel(centralWidget);
        urlLabel1->setObjectName(QStringLiteral("urlLabel1"));

        inputFieldsLayout->setWidget(2, QFormLayout::LabelRole, urlLabel1);

        urlEdit = new QLineEdit(centralWidget);
        urlEdit->setObjectName(QStringLiteral("urlEdit"));

        inputFieldsLayout->setWidget(2, QFormLayout::FieldRole, urlEdit);

        fileNameLabel = new QLabel(centralWidget);
        fileNameLabel->setObjectName(QStringLiteral("fileNameLabel"));

        inputFieldsLayout->setWidget(3, QFormLayout::LabelRole, fileNameLabel);

        fileNameEdit = new QLineEdit(centralWidget);
        fileNameEdit->setObjectName(QStringLiteral("fileNameEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(fileNameEdit->sizePolicy().hasHeightForWidth());
        fileNameEdit->setSizePolicy(sizePolicy1);

        inputFieldsLayout->setWidget(3, QFormLayout::FieldRole, fileNameEdit);


        controlsLayout->addLayout(inputFieldsLayout);

        startStopButton = new QPushButton(centralWidget);
        startStopButton->setObjectName(QStringLiteral("startStopButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(startStopButton->sizePolicy().hasHeightForWidth());
        startStopButton->setSizePolicy(sizePolicy2);

        controlsLayout->addWidget(startStopButton);


        verticalLayout->addLayout(controlsLayout);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMaximum(1024);
        progressBar->setValue(0);

        verticalLayout->addWidget(progressBar);

        transferLogBox = new QGroupBox(centralWidget);
        transferLogBox->setObjectName(QStringLiteral("transferLogBox"));
        verticalLayout_2 = new QVBoxLayout(transferLogBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        transferLog = new QPlainTextEdit(transferLogBox);
        transferLog->setObjectName(QStringLiteral("transferLog"));

        verticalLayout_2->addWidget(transferLog);


        verticalLayout->addWidget(transferLogBox);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "qtcurl Downloader Example", 0));
        urlLabel->setText(QApplication::translate("MainWindow", "Use Unix Socket", 0));
        unixSocketPathLabel->setText(QApplication::translate("MainWindow", "Unix Socket Path", 0));
        unixSocketPath->setText(QApplication::translate("MainWindow", "/var/run/docker.sock", 0));
        urlLabel1->setText(QApplication::translate("MainWindow", "Download Url:", 0));
        urlEdit->setText(QApplication::translate("MainWindow", "http://localhost:2376/containers/json", 0));
        fileNameLabel->setText(QApplication::translate("MainWindow", "Download to File:", 0));
        fileNameEdit->setText(QApplication::translate("MainWindow", "data.bin", 0));
        startStopButton->setText(QApplication::translate("MainWindow", "Start", 0));
        transferLogBox->setTitle(QApplication::translate("MainWindow", "Transfer Log:", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
