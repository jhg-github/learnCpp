/*
 * status.h
 *
 *  Created on: May 7, 2020
 *      Author: javi
 */

#ifndef STATUS_H_
#define STATUS_H_

enum Status{
	Pending,
	Approved,
	Cancelled
};

enum class FileError{
	notfound,
	ok
};

enum class NetworkError{
	disconnected,
	ok
};



#endif /* STATUS_H_ */
