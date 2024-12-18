#include "mainwindow.h"




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setupUi(this);
    setCentralWidget(textEdit);
    connect(actionClose, SIGNAL(triggered(bool)), this,SLOT(close()));
    connect(actionCopy, SIGNAL(triggered(bool)), this, SLOT(copy()));
    connect(actionSave, SIGNAL(triggered(bool)), this, SLOT(saveFile()));
    connect(actionOpen, SIGNAL(triggered(bool)), this, SLOT(openFile()));
    connect(actionNew, SIGNAL(triggered(bool)), this, SLOT(newFile()));
    connect(actionQuit, SIGNAL(triggered(bool)), this, SLOT(quit()));
    connect(actionCut, SIGNAL(triggered(bool)), this, SLOT(cut()));
    connect(actionPaste, SIGNAL(triggered(bool)), this, SLOT(paste()));
    connect(actionAll, SIGNAL(triggered(bool)), this, SLOT(selectAll()));
    connect(actionAS, SIGNAL(triggered(bool)), this, SLOT(saveAs()));

}

MainWindow::~MainWindow() {}

