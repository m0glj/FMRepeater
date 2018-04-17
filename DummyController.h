/*
 *	Copyright (C) 2009,2018 by Jonathan Naylor, G4KLX
 *
 *	This program is free software; you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation; version 2 of the License.
 *
 *	This program is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 */

#ifndef	DummyController_H
#define	DummyController_H

#include "HardwareController.h"

class CDummyController : public IHardwareController {
public:
	CDummyController();
	virtual ~CDummyController();

	virtual bool open();

	virtual void getDigitalInputs(bool& inp1, bool& inp2);

	virtual void setDigitalOutputs(bool outp1, bool outp2, bool outp3);

	virtual void close();

private:
};

#endif