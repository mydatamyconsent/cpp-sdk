/**
 * My Data My Consent - Developer API
 * Unleashing the power of data consent by establishing trust. The Platform Core Developer API defines a set of capabilities that can be used to request, issue, manage and update data, documents and credentials by organizations. The API can be used to request, manage and update Decentralised Identifiers, Financial Data, Health Data issue Documents, Credentials directly or using OpenID Connect flows, and verify Messages signed with DIDs and much more.
 *
 * The version of the OpenAPI document: v1
 * Contact: support@mydatamyconsent.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * DataConsentsApi.h
 *
 * 
 */

#ifndef MYDATAMYCONSENT_API_DataConsentsApi_H_
#define MYDATAMYCONSENT_API_DataConsentsApi_H_



#include "ApiClient.h"

#include "model/DataConsentStatus.h"
#include "Object.h"
#include "model/ProblemDetails.h"
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace mydatamyconsent {
namespace api {

using namespace mydatamyconsent::models;



class  DataConsentsApi 
{
public:

    explicit DataConsentsApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~DataConsentsApi();

    /// <summary>
    /// Get consented financial account details.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="consentId"></param>
    /// <param name="accountId"></param>
    pplx::task<std::shared_ptr<Object>> v1ConsentsConsentIdAccountsAccountIdGet(
        utility::string_t consentId,
        utility::string_t accountId
    ) const;
    /// <summary>
    /// Get consented financial account insights.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="consentId"></param>
    /// <param name="accountId"></param>
    pplx::task<std::shared_ptr<Object>> v1ConsentsConsentIdAccountsAccountIdInsightsGet(
        utility::string_t consentId,
        utility::string_t accountId
    ) const;
    /// <summary>
    /// Get consented financial account transactions.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="consentId"></param>
    /// <param name="accountId"></param>
    /// <param name="filters"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="fromDate"> (optional, default to utility::datetime())</param>
    /// <param name="toDate"> (optional, default to utility::datetime())</param>
    pplx::task<std::shared_ptr<Object>> v1ConsentsConsentIdAccountsAccountIdTransactionsGet(
        utility::string_t consentId,
        utility::string_t accountId,
        boost::optional<utility::string_t> filters,
        boost::optional<utility::datetime> fromDate,
        boost::optional<utility::datetime> toDate
    ) const;
    /// <summary>
    /// Get all accounts in a consent.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="consentId"></param>
    pplx::task<std::shared_ptr<Object>> v1ConsentsConsentIdAccountsGet(
        utility::string_t consentId
    ) const;
    /// <summary>
    /// Get analysis of a consented document.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="consentId"></param>
    /// <param name="documentId">Document Id.</param>
    pplx::task<std::shared_ptr<Object>> v1ConsentsConsentIdDocumentsDocumentIdAnalysisGet(
        utility::string_t consentId,
        utility::string_t documentId
    ) const;
    /// <summary>
    /// Download a consented document.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="consentId"></param>
    /// <param name="documentId">Document Id.</param>
    pplx::task<std::shared_ptr<Object>> v1ConsentsConsentIdDocumentsDocumentIdDownloadGet(
        utility::string_t consentId,
        utility::string_t documentId
    ) const;
    /// <summary>
    /// Get consented document details.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="consentId"></param>
    /// <param name="documentId">Document Id.</param>
    pplx::task<std::shared_ptr<Object>> v1ConsentsConsentIdDocumentsDocumentIdGet(
        utility::string_t consentId,
        utility::string_t documentId
    ) const;
    /// <summary>
    /// Get all documents in a consent.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="consentId"></param>
    pplx::task<std::shared_ptr<Object>> v1ConsentsConsentIdDocumentsGet(
        utility::string_t consentId
    ) const;
    /// <summary>
    /// Get consent details by consent id.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="consentId"></param>
    pplx::task<std::shared_ptr<Object>> v1ConsentsConsentIdGet(
        utility::string_t consentId
    ) const;
    /// <summary>
    /// Get all consents filtered by status and time.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="status">MyDataMyConsent.Domain.Entities.ConsentAggregate.Enums.DataConsentStatus. (optional, default to new DataConsentStatus())</param>
    /// <param name="startDate">System.DateTime. (optional, default to utility::datetime())</param>
    /// <param name="endDate">till dateSystem.DateTime. (optional, default to utility::datetime())</param>
    pplx::task<std::shared_ptr<Object>> v1ConsentsGet(
        boost::optional<std::shared_ptr<DataConsentStatus>> status,
        boost::optional<utility::datetime> startDate,
        boost::optional<utility::datetime> endDate
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}

#endif /* MYDATAMYCONSENT_API_DataConsentsApi_H_ */

