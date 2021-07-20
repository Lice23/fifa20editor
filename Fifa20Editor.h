#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Fifa20Editor.h"

class Fifa20Editor : public QMainWindow
{
    Q_OBJECT

public:
    Fifa20Editor(QWidget *parent = Q_NULLPTR);

private:
    Ui::Fifa20EditorClass ui;
};
