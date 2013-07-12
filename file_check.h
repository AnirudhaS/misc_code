#ifndef FILE_CHECK_H
#define FILE_CHECK_H
#include <Poco/Net/HTTPRequest.h>
#include <Poco/Net/HTTPClientSession.h>
#include <Poco/Net/HTTPResponse.h>
#include <Poco/Net/HTTPMessage.h>
#include <Poco/URI.h>
#include <Poco/Net/HTTPRequest.h>

Poco::Net::HTTPResponse::HTTPStatus file_check (const char *url);

#endif // FILE_CHECK_H
