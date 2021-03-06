#include <windows/TMainWindow.h>
#include <QApplication>
#include <QtCore/QFile>
#include <utils/TDB.h>


class QApplication;
class TMainWindow;

QString readStyleSheet() {
	QFile f(":/qss.qss");
	f.open(QFile::ReadOnly);
	return QString::fromUtf8(f.readAll());
}

int main(int argc, char **argv) {
	QApplication a(argc, argv);

	a.setStyleSheet(readStyleSheet());

	TMainWindow *w = TMainWindow::getInstance();
	w->showMaximized();

//	TDB db;
//	qDebug() << db.getPerms();

	return a.exec();
}

void operator delete(void *p, std::size_t) {
	std::free(p);
}

void operator delete[](void *p, std::size_t) {
	std::free(p);
}
