#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QTextEdit>
#include <QFileDialog>
#include <QMessageBox>
#include <QAction>
#include "ui_mainwindow.h"

class MainWindow : public QMainWindow,
                   public Ui_MainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void copy();       // 复制
    void cut();        // 剪切
    void paste();      // 粘贴
    void selectAll();  // 全选
    void saveFile();   // 保存
    void saveAs();     // 另存为
    void openFile();   // 打开
    void newFile();    // 新建
    void quit();       // 退出
private:
    QTextEdit *textEdit;  // 文本编辑控件
    QString currentFile;  // 当前文件路径

};
#endif // MAINWINDOW_H
