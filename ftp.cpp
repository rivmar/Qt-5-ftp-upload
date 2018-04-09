#include "ftp.h"

int main(int argc, char **argv)
{
	QCoreApplication app(argc, argv);
	Uploader u;
	u.start("./out.jpg");
	return app.exec();
}
