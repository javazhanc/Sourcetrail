#ifndef QT_EULA_LICENSE_H
#define QT_EULA_LICENSE_H

#include "qt/window/QtWindow.h"

class QtEulaWindow
	: public QtWindow
{
public:
	static const int EULA_VERSION = 1;

	QtEulaWindow(QWidget* parent, bool forceAccept);
	QSize sizeHint() const override;

protected:
	// QtWindow implementation
	virtual void populateWindow(QWidget* widget) override;
	virtual void windowReady() override;

private:
	bool m_forceAccept;
};

#endif // QT_EULA_LICENSE_H