#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    bool isCheckBoxChecked();
    ~Dialog();

private slots:

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
