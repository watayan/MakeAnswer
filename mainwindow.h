#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
protected:
    void dragEnterEvent(QDragEnterEvent* event);
    void dropEvent(QDropEvent* event);
public slots:
    void addFile(void);
    void removeFile(void);
    void moveUp(void);
    void moveDown(void);
    void changeFile(void);
    void clearFile(void);
    void makeAnswer(void);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
