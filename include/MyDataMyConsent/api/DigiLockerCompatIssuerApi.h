/**
 * My Data My Consent - Developer API
 * Unleashing the power of data consent by establishing trust. The Platform Core Developer API defines a set of capabilities that can be used to request, issue, manage and update data, documents and credentials by organizations. The API can be used to request, manage and update Decentralised Identifiers, Financial Data, Health Data issue Documents, Credentials directly or using OpenID Connect flows, and verify Messages signed with DIDs and much more.
 *
 * The version of the OpenAPI document: v1
 * Contact: support@mydatamyconsent.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * DigiLockerCompatIssuerApi.h
 *
 * 
 */

#ifndef MYDATAMYCONSENT_API_DigiLockerCompatIssuerApi_H_
#define MYDATAMYCONSENT_API_DigiLockerCompatIssuerApi_H_



#include "MyDataMyConsent/ApiClient.h"

#include "MyDataMyConsent/model/Error.h"
#include "MyDataMyConsent/model/ProblemDetails.h"
#include "MyDataMyConsent/model/PushUriRequest.h"
#include "MyDataMyConsent/model/PushUriResponse.h"
#include <boost/optional.hpp>

namespace mydatamyconsent {
namespace api {

using namespace mydatamyconsent::models;



class  DigiLockerCompatIssuerApi 
{
public:

    explicit DigiLockerCompatIssuerApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~DigiLockerCompatIssuerApi();

    /// <summary>
    /// Digilocker Compatible endpoint to issue document.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="pushUriRequest">Push URI request payload</param>
    pplx::task<std::shared_ptr<PushUriResponse>> digilockerCompatIssueDocument(
        std::shared_ptr<PushUriRequest> pushUriRequest
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}

#endif /* MYDATAMYCONSENT_API_DigiLockerCompatIssuerApi_H_ */

