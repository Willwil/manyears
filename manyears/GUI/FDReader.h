/* Copyright (C) 2006-2007 Eric Beaudry, Simon Briere, Dominic Letourneau

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA
*/

#ifndef _FDREADER_H_
#define _FDREADER_H_

#include <QTcpServer> 
#include <QTcpSocket> 
#include <string>
#include <sstream>
#include "Vector.h"

class SourceInfo;

class FDReader : public QTcpServer {
     
     Q_OBJECT;
     
     public:

	  FDReader(int port=30011, int backlog=1);

	  ~FDReader();

	virtual void newConnection ();
	     	  
     public slots:

	  void dataReady();
	  
     signals:
	  //void putData(const QImage &image);
         
         void putData(const std::vector<const SourceInfo*> &sources);
         
	    
     protected:  

      std::vector<QTcpSocket*> m_sockets;

};
#endif
