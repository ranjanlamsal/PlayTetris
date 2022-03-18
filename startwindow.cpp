#include "startwindow.h"
#include "ui_startwindow.h"
#include "gamewindow.h"


StartWindow::StartWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::StartWindow)
{
    ui->setupUi(this);
}

StartWindow::~StartWindow()
{
    delete ui;
}


void StartWindow::on_pushButton_clicked()
{
    this -> hide();
    GameWindow = new gameWindow(this);
    GameWindow -> show();
}

