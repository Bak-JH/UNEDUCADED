/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QOpenGLWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCopy;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionDelete;
    QAction *actionFront_View;
    QAction *actionBack_View;
    QAction *actionRight_View;
    QAction *actionLeft_View;
    QAction *actionTop_View;
    QAction *actionObject_Window;
    QAction *actionObject_Addition_Window;
    QAction *actionOptions;
    QAction *actionHelp;
    QAction *actionObject_Addition_Window_2;
    QWidget *centralWidget;
    QListView *objectListView;
    QTabWidget *layerTab;
    QWidget *tab;
    QOpenGLWidget *openGLWidget;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_5;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser;
    QComboBox *comboBox;
    QWidget *tab_2;
    QOpenGLWidget *openGLWidget_2;
    QWidget *objectAdditionView;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *undoButton;
    QPushButton *redoButton;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *moveButton;
    QPushButton *rotateButton;
    QPushButton *scaleButton;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *flipButton;
    QPushButton *textButton;
    QPushButton *lengthButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *colorButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuedit;
    QMenu *menuView;
    QMenu *menuWindow;
    QMenu *menuTools;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1920, 1080);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        actionFront_View = new QAction(MainWindow);
        actionFront_View->setObjectName(QString::fromUtf8("actionFront_View"));
        actionBack_View = new QAction(MainWindow);
        actionBack_View->setObjectName(QString::fromUtf8("actionBack_View"));
        actionRight_View = new QAction(MainWindow);
        actionRight_View->setObjectName(QString::fromUtf8("actionRight_View"));
        actionLeft_View = new QAction(MainWindow);
        actionLeft_View->setObjectName(QString::fromUtf8("actionLeft_View"));
        actionTop_View = new QAction(MainWindow);
        actionTop_View->setObjectName(QString::fromUtf8("actionTop_View"));
        actionObject_Window = new QAction(MainWindow);
        actionObject_Window->setObjectName(QString::fromUtf8("actionObject_Window"));
        actionObject_Addition_Window = new QAction(MainWindow);
        actionObject_Addition_Window->setObjectName(QString::fromUtf8("actionObject_Addition_Window"));
        actionOptions = new QAction(MainWindow);
        actionOptions->setObjectName(QString::fromUtf8("actionOptions"));
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        actionObject_Addition_Window_2 = new QAction(MainWindow);
        actionObject_Addition_Window_2->setObjectName(QString::fromUtf8("actionObject_Addition_Window_2"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        objectListView = new QListView(centralWidget);
        objectListView->setObjectName(QString::fromUtf8("objectListView"));
        objectListView->setGeometry(QRect(3, 52, 275, 961));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(objectListView->sizePolicy().hasHeightForWidth());
        objectListView->setSizePolicy(sizePolicy1);
        objectListView->setMaximumSize(QSize(275, 970));
        layerTab = new QTabWidget(centralWidget);
        layerTab->setObjectName(QString::fromUtf8("layerTab"));
        layerTab->setGeometry(QRect(279, 50, 1350, 971));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(layerTab->sizePolicy().hasHeightForWidth());
        layerTab->setSizePolicy(sizePolicy2);
        layerTab->setMaximumSize(QSize(1350, 16777215));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        openGLWidget = new QOpenGLWidget(tab);
        openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));
        openGLWidget->setGeometry(QRect(0, 0, 1341, 941));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(openGLWidget->sizePolicy().hasHeightForWidth());
        openGLWidget->setSizePolicy(sizePolicy3);
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(840, 910, 500, 30));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        widget = new QWidget(tab);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(840, 910, 501, 31));
        horizontalLayout_5 = new QHBoxLayout(widget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        textBrowser_2 = new QTextBrowser(widget);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));

        horizontalLayout_5->addWidget(textBrowser_2);

        textBrowser = new QTextBrowser(widget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        horizontalLayout_5->addWidget(textBrowser);

        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_5->addWidget(comboBox);

        layerTab->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        openGLWidget_2 = new QOpenGLWidget(tab_2);
        openGLWidget_2->setObjectName(QString::fromUtf8("openGLWidget_2"));
        openGLWidget_2->setGeometry(QRect(0, 0, 1350, 940));
        layerTab->addTab(tab_2, QString());
        objectAdditionView = new QWidget(centralWidget);
        objectAdditionView->setObjectName(QString::fromUtf8("objectAdditionView"));
        objectAdditionView->setGeometry(QRect(1635, 50, 281, 961));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(objectAdditionView->sizePolicy().hasHeightForWidth());
        objectAdditionView->setSizePolicy(sizePolicy4);
        objectAdditionView->setMaximumSize(QSize(300, 1020));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(4, 10, 533, 34));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setSpacing(15);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(15);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        undoButton = new QPushButton(layoutWidget);
        undoButton->setObjectName(QString::fromUtf8("undoButton"));
        undoButton->setMinimumSize(QSize(30, 30));
        undoButton->setMaximumSize(QSize(30, 30));
        undoButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-image: url(:/icons/C:/Users/dsm2017/Desktop/icons/undo.png) 0 0 0 0 stretch stretch;\n"
"}"));

        horizontalLayout->addWidget(undoButton);

        redoButton = new QPushButton(layoutWidget);
        redoButton->setObjectName(QString::fromUtf8("redoButton"));
        redoButton->setMaximumSize(QSize(30, 30));
        redoButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-image: url(:/icons/C:/Users/dsm2017/Desktop/icons/redo.png) 0 0 0 0 stretch stretch;\n"
"}"));

        horizontalLayout->addWidget(redoButton);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(15);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        moveButton = new QPushButton(layoutWidget);
        moveButton->setObjectName(QString::fromUtf8("moveButton"));
        moveButton->setMaximumSize(QSize(30, 30));
        moveButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-image: url(:/icons/C:/Users/dsm2017/Desktop/icons/move.png) 0 0 0 0 stretch stretch;\n"
"}"));

        horizontalLayout_2->addWidget(moveButton);

        rotateButton = new QPushButton(layoutWidget);
        rotateButton->setObjectName(QString::fromUtf8("rotateButton"));
        rotateButton->setMaximumSize(QSize(30, 30));
        rotateButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-image: url(:/icons/C:/Users/dsm2017/Desktop/icons/rotate.png) 0 0 0 0 stretch stretch;\n"
"}"));

        horizontalLayout_2->addWidget(rotateButton);

        scaleButton = new QPushButton(layoutWidget);
        scaleButton->setObjectName(QString::fromUtf8("scaleButton"));
        scaleButton->setMaximumSize(QSize(30, 30));
        scaleButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-image: url(:/icons/C:/Users/dsm2017/Desktop/icons/resize.png) 0 0 0 0 stretch stretch;\n"
"}"));

        horizontalLayout_2->addWidget(scaleButton);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(15);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        flipButton = new QPushButton(layoutWidget);
        flipButton->setObjectName(QString::fromUtf8("flipButton"));
        flipButton->setMaximumSize(QSize(30, 30));
        flipButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-image: url(:/icons/C:/Users/dsm2017/Desktop/icons/flip_icon.png) 0 0 0 0 stretch stretch;\n"
"}"));

        horizontalLayout_3->addWidget(flipButton);

        textButton = new QPushButton(layoutWidget);
        textButton->setObjectName(QString::fromUtf8("textButton"));
        textButton->setMaximumSize(QSize(30, 30));
        textButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-image: url(:/icons/C:/Users/dsm2017/Desktop/icons/text.png) 0 0 0 0 stretch stretch;\n"
"}"));

        horizontalLayout_3->addWidget(textButton);

        lengthButton = new QPushButton(layoutWidget);
        lengthButton->setObjectName(QString::fromUtf8("lengthButton"));
        lengthButton->setMaximumSize(QSize(30, 30));
        lengthButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-image: url(:/icons/C:/Users/dsm2017/Desktop/icons/measure_icon.png) 0 0 0 0 stretch stretch;\n"
"}"));

        horizontalLayout_3->addWidget(lengthButton);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        horizontalSpacer_3 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        colorButton = new QPushButton(layoutWidget);
        colorButton->setObjectName(QString::fromUtf8("colorButton"));
        colorButton->setMaximumSize(QSize(30, 30));
        colorButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-image: url(:/icons/C:/Users/dsm2017/Desktop/icons/color-picker.png) 0 0 0 0 stretch stretch;\n"
"}"));

        horizontalLayout_4->addWidget(colorButton);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1920, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuedit = new QMenu(menuBar);
        menuedit->setObjectName(QString::fromUtf8("menuedit"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuWindow = new QMenu(menuBar);
        menuWindow->setObjectName(QString::fromUtf8("menuWindow"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuedit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuWindow->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuedit->addAction(actionUndo);
        menuedit->addAction(actionRedo);
        menuedit->addAction(actionCopy);
        menuedit->addAction(actionCut);
        menuedit->addAction(actionPaste);
        menuedit->addAction(actionDelete);
        menuView->addAction(actionFront_View);
        menuView->addAction(actionBack_View);
        menuView->addAction(actionRight_View);
        menuView->addAction(actionLeft_View);
        menuView->addAction(actionTop_View);
        menuWindow->addAction(actionObject_Window);
        menuWindow->addAction(actionObject_Addition_Window);
        menuWindow->addAction(actionObject_Addition_Window_2);
        menuTools->addAction(actionOptions);
        menuHelp->addAction(actionHelp);

        retranslateUi(MainWindow);

        layerTab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QApplication::translate("MainWindow", "New", nullptr));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
        actionSave_As->setText(QApplication::translate("MainWindow", "Save As", nullptr));
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", nullptr));
        actionRedo->setText(QApplication::translate("MainWindow", "Redo", nullptr));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", nullptr));
        actionCut->setText(QApplication::translate("MainWindow", "Cut", nullptr));
        actionPaste->setText(QApplication::translate("MainWindow", "Paste", nullptr));
        actionDelete->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        actionFront_View->setText(QApplication::translate("MainWindow", "Front View", nullptr));
        actionBack_View->setText(QApplication::translate("MainWindow", "Back View", nullptr));
        actionRight_View->setText(QApplication::translate("MainWindow", "Right View", nullptr));
        actionLeft_View->setText(QApplication::translate("MainWindow", "Left View", nullptr));
        actionTop_View->setText(QApplication::translate("MainWindow", "Top View", nullptr));
        actionObject_Window->setText(QApplication::translate("MainWindow", "Object List Window", nullptr));
        actionObject_Addition_Window->setText(QApplication::translate("MainWindow", "Object Edit Window", nullptr));
        actionOptions->setText(QApplication::translate("MainWindow", "Options", nullptr));
        actionHelp->setText(QApplication::translate("MainWindow", "Help", nullptr));
        actionObject_Addition_Window_2->setText(QApplication::translate("MainWindow", "Object Addition Window", nullptr));
        label->setText(QString());
        comboBox->setItemText(0, QApplication::translate("MainWindow", "m", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "cm", nullptr));

        layerTab->setTabText(layerTab->indexOf(tab), QApplication::translate("MainWindow", "Tab 1", nullptr));
        layerTab->setTabText(layerTab->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", nullptr));
        undoButton->setText(QString());
        redoButton->setText(QString());
        moveButton->setText(QString());
        rotateButton->setText(QString());
        scaleButton->setText(QString());
        flipButton->setText(QString());
        textButton->setText(QString());
        lengthButton->setText(QString());
        colorButton->setText(QString());
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuedit->setTitle(QApplication::translate("MainWindow", "Edit", nullptr));
        menuView->setTitle(QApplication::translate("MainWindow", "View", nullptr));
        menuWindow->setTitle(QApplication::translate("MainWindow", "Window", nullptr));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
