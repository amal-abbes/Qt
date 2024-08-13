#include <QApplication>
#include <QPushButton>



int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QPushButton bouton("Pimp mon bouton !");
    bouton.setToolTip("Texte d'aide");
    bouton.setFont(QFont("Comic Sans MS", 20, QFont::Bold, true));
    bouton.setCursor(Qt::PointingHandCursor);
    bouton.setIcon(QIcon(QCoreApplication::applicationDirPath() + "/telnet.png"));
    bouton.show();

    return app.exec();
}
