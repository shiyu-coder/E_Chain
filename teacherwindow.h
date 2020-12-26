﻿#ifndef TEACHERWINDOW_H
#define TEACHERWINDOW_H

#include <QMainWindow>
#include<aboutwidget.h>
#include<addprowidget.h>
#include<addmsgwidget.h>
#include<promsgwidget.h>

namespace Ui {
class TeacherWindow;
}

class TeacherWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit TeacherWindow(QWidget *parent = nullptr);
    ~TeacherWindow();

public slots:
    void on_actionAbout_triggered();

    void on_AddProButton_clicked();

    void on_FlushButton_3_clicked();

    void on_FlushButton_1_clicked();

    void on_FlushButton_2_clicked();

    void on_FlushButton_4_clicked();

private slots:
    void on_StudentLessonBox_currentIndexChanged(const QString &arg1);

    void on_AddApplyButton_clicked();

    void on_ProWidget_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::TeacherWindow *ui;
};

#endif // TEACHERWINDOW_H
