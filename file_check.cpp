#include "file_check.h"

Poco::Net::HTTPResponse::HTTPStatus file_check (const char *url)
{
    Poco::URI uri(url);
    Poco::Net::HTTPClientSession session (uri.getHost(), uri.getPort());

    Poco::Net::HTTPRequest request (Poco::Net::HTTPRequest::HTTP_HEAD, uri.getPath(), Poco::Net::HTTPMessage::HTTP_1_1);
    session.sendRequest (request);

    Poco::Net::HTTPResponse res;

    std::istream &is = session.receiveResponse(res);

    return res.getStatus();
}
