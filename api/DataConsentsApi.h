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

#include "model/DataConsentDetailsDto.h"
#include "model/DataConsentDocumentsDto.h"
#include "model/DataConsentFinancialsDto.h"
#include "model/DataConsentStatus.h"
#include "model/FinancialAccount.h"
#include "Object.h"
#include "model/OrganizationDataConsentInfoDtoPaginatedList.h"
#include "model/OrganizationDocumentDetails.h"
#include "model/OrganizationDocumentDownloadDto.h"
#include "model/OrganizationFinancialAccountDto.h"
#include "model/OrganizationFinancialTransactionsDtoPaginatedList.h"
#include "model/UserAccountFinancialTransactionsDtoPaginatedList.h"
#include "model/UserDataConsentInfoDtoPaginatedList.h"
#include "model/UserDocumentDetails.h"
#include "model/UserDocumentDownload.h"
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
    /// Download a individuals consented document.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="consentId">Consent id.</param>
    /// <param name="documentId">Document id.</param>
    pplx::task<std::shared_ptr<UserDocumentDownload>> downloadConsentedDocumentById(
        utility::string_t consentId,
        utility::string_t documentId
    ) const;
    /// <summary>
    /// Download a organizations consented document.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="consentId">Consent id.</param>
    /// <param name="documentId">Document id.</param>
    pplx::task<std::shared_ptr<OrganizationDocumentDownloadDto>> downloadOrgConsentedDocumentById(
        utility::string_t consentId,
        utility::string_t documentId
    ) const;
    /// <summary>
    /// Get the individual documents based on ConsentId.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="consentId">Consent id.</param>
    pplx::task<std::shared_ptr<DataConsentDocumentsDto>> getAllConsentedDocuments(
        utility::string_t consentId
    ) const;
    /// <summary>
    /// Get all individual consented financial accounts.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="consentId">Consent id.</param>
    pplx::task<std::shared_ptr<DataConsentFinancialsDto>> getAllConsentedFinancialAccounts(
        utility::string_t consentId
    ) const;
    /// <summary>
    /// Get the organization documents based on ConsentId.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="consentId">Consent id.</param>
    pplx::task<std::shared_ptr<DataConsentDocumentsDto>> getAllOrganizationConsentedDocuments(
        utility::string_t consentId
    ) const;
    /// <summary>
    /// Get all individuals consent details by consent id.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="consentId">Consent id.</param>
    pplx::task<std::shared_ptr<DataConsentDetailsDto>> getConsentDetailsById(
        utility::string_t consentId
    ) const;
    /// <summary>
    /// Get all organizational consented financial accounts.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="consentId">Consent id.</param>
    pplx::task<std::shared_ptr<DataConsentFinancialsDto>> getConsentFinancialAccounts(
        utility::string_t consentId
    ) const;
    /// <summary>
    /// Get individual consented financial account details based on account id.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="consentId">Consent id.</param>
    /// <param name="accountId">Account id.</param>
    pplx::task<std::shared_ptr<FinancialAccount>> getConsentedAccountById(
        utility::string_t consentId,
        utility::string_t accountId
    ) const;
    /// <summary>
    /// Get individuals consent document based on document id.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="consentId">Consent id.</param>
    /// <param name="documentId">Document Id.</param>
    pplx::task<std::shared_ptr<UserDocumentDetails>> getConsentedDocumentById(
        utility::string_t consentId,
        utility::string_t documentId
    ) const;
    /// <summary>
    /// Get organization consented financial account details based on account id.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="consentId">Consent id.</param>
    /// <param name="accountId">Account id.</param>
    pplx::task<std::shared_ptr<OrganizationFinancialAccountDto>> getConsentedFinancialAccount(
        utility::string_t consentId,
        utility::string_t accountId
    ) const;
    /// <summary>
    /// Get individual consented financial account transactions of an individual based on accountId.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="consentId">Consent id.</param>
    /// <param name="accountId">Account id.</param>
    /// <param name="filters">Filters. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="fromDateTimeUtc">From date time in utc timezone. (optional, default to utility::datetime())</param>
    /// <param name="toDateTimeUtc">Til date time in utc timezone. (optional, default to utility::datetime())</param>
    /// <param name="pageNo">Page number. (optional, default to 0)</param>
    /// <param name="pageSize">Number of items to return. (optional, default to 0)</param>
    pplx::task<std::shared_ptr<UserAccountFinancialTransactionsDtoPaginatedList>> getConsentedFinancialAccountTransactions(
        utility::string_t consentId,
        utility::string_t accountId,
        boost::optional<utility::string_t> filters,
        boost::optional<utility::datetime> fromDateTimeUtc,
        boost::optional<utility::datetime> toDateTimeUtc,
        boost::optional<int32_t> pageNo,
        boost::optional<int32_t> pageSize
    ) const;
    /// <summary>
    /// Get the list of data consents sent for organizations.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="status">Data consent status MyDataMyConsent.Domain.Entities.ConsentAggregate.Enums.DataConsentStatus. (optional, default to new DataConsentStatus())</param>
    /// <param name="from">From date time in utc timezone. (optional, default to utility::datetime())</param>
    /// <param name="to">Til date time in utc timezone. (optional, default to utility::datetime())</param>
    /// <param name="pageNo">Page number. (optional, default to 0)</param>
    /// <param name="pageSize">Number of items to return. (optional, default to 0)</param>
    pplx::task<std::shared_ptr<OrganizationDataConsentInfoDtoPaginatedList>> getConsentsForOrganizations(
        boost::optional<std::shared_ptr<DataConsentStatus>> status,
        boost::optional<utility::datetime> from,
        boost::optional<utility::datetime> to,
        boost::optional<int32_t> pageNo,
        boost::optional<int32_t> pageSize
    ) const;
    /// <summary>
    /// Get the list of Consents Sent to Individuals.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="status">Data consent status MyDataMyConsent.Domain.Entities.ConsentAggregate.Enums.DataConsentStatus. (optional, default to new DataConsentStatus())</param>
    /// <param name="from">From date time in utc timezone. (optional, default to utility::datetime())</param>
    /// <param name="to">Til date time in utc timezone. (optional, default to utility::datetime())</param>
    /// <param name="pageNo">Page number. (optional, default to 0)</param>
    /// <param name="pageSize">Number of items to return. (optional, default to 0)</param>
    pplx::task<std::shared_ptr<UserDataConsentInfoDtoPaginatedList>> getConsentsSentToIndividuals(
        boost::optional<std::shared_ptr<DataConsentStatus>> status,
        boost::optional<utility::datetime> from,
        boost::optional<utility::datetime> to,
        boost::optional<int32_t> pageNo,
        boost::optional<int32_t> pageSize
    ) const;
    /// <summary>
    /// Get organization consented financial account transactions of an individual based on accountId.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="consentId">Consent id.</param>
    /// <param name="accountId">Account id.</param>
    /// <param name="filters">Filters. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="fromDateTimeUtc">From date time in utc timezone. (optional, default to utility::datetime())</param>
    /// <param name="toDateTimeUtc">Til date time in utc timezone. (optional, default to utility::datetime())</param>
    /// <param name="pageNo">Page number. (optional, default to 0)</param>
    /// <param name="pageSize">Number of items to return. (optional, default to 0)</param>
    pplx::task<std::shared_ptr<OrganizationFinancialTransactionsDtoPaginatedList>> getOrgConsentedAccountTransactions(
        utility::string_t consentId,
        utility::string_t accountId,
        boost::optional<utility::string_t> filters,
        boost::optional<utility::datetime> fromDateTimeUtc,
        boost::optional<utility::datetime> toDateTimeUtc,
        boost::optional<int32_t> pageNo,
        boost::optional<int32_t> pageSize
    ) const;
    /// <summary>
    /// Get all organization consent details by consent id.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="consentId">Consent id.</param>
    pplx::task<std::shared_ptr<DataConsentDetailsDto>> getOrganizationConsentDetailsById(
        utility::string_t consentId
    ) const;
    /// <summary>
    /// Get organization consent document based on document id.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="consentId">Consent id.</param>
    /// <param name="documentId">Document Id.</param>
    pplx::task<std::shared_ptr<OrganizationDocumentDetails>> getOrganizationConsentedDocumentById(
        utility::string_t consentId,
        utility::string_t documentId
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}

#endif /* MYDATAMYCONSENT_API_DataConsentsApi_H_ */

