/*
 * FastRPC -- Fast RPC library compatible with XML-RPC
 * Copyright (C) 2005-7  Seznam.cz, a.s.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Seznam.cz, a.s.
 * Radlicka 2, Praha 5, 15000, Czech Republic
 * http://www.seznam.cz, mailto:fastrpc@firma.seznam.cz
 *
 * FILE          $Id: frpcsocketunix.h,v 1.4 2011-02-11 08:56:17 burlog Exp $
 *
 * DESCRIPTION
 *
 * AUTHOR
 *              Roman Marek <roman.marek@firma.seznam.cz>
 *
 * HISTORY
 *
 */

#ifndef FRPCSOCKETUNIX_H_
#define FRPCSOCKETUNIX_H_

#include <sys/socket.h>
#include <poll.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <unistd.h>
#include <sys/time.h>

#define STRERROR_PRE() char strErrBuff[256]
#define ERRNO (errno)

#ifdef SOLARIS
#define STRERROR(e) ((strerror_r(e, strErrBuff, sizeof(strErrBuff)) == 0) ? strErrBuff : "")
#else
#define STRERROR(e) strerror_r(e, strErrBuff, sizeof(strErrBuff))
#endif

#endif // FRPCSOCKETUNIX_H_
