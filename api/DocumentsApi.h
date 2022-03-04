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
 * DocumentsApi.h
 *
 * 
 */

#ifndef MYDATAMYCONSENT_API_DocumentsApi_H_
#define MYDATAMYCONSENT_API_DocumentsApi_H_



#include "ApiClient.h"

#include "model/DocumentIssueRequest.h"
#include "model/DocumentIssueRequestDetails.h"
#include "model/DocumentTypePaginatedList.h"
#include "HttpContent.h"
#include "model/IssuedDocument.h"
#include "model/IssuedDocumentPaginatedList.h"
#include "Object.h"
#include "model/ProblemDetails.h"
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace mydatamyconsent {
namespace api {

using namespace mydatamyconsent::models;



class  DocumentsApi 
{
public:

    explicit DocumentsApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~DocumentsApi();

    /// <summary>
    /// Get issued document.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="documentId">Document id.</param>
    pplx::task<std::shared_ptr<IssuedDocument>> getIssuedDocumentById(
        utility::string_t documentId
    ) const;
    /// <summary>
    /// Get paginated list of issued documents of given document type.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="documentTypeId">Document type id.</param>
    /// <param name="fromDateTime">From DateTime. (optional, default to utility::datetime())</param>
    /// <param name="toDateTime">To DateTime. (optional, default to utility::datetime())</param>
    /// <param name="pageNo">Page number. (optional, default to 0)</param>
    /// <param name="pageSize">Number of items to return. (optional, default to 0)</param>
    pplx::task<std::shared_ptr<IssuedDocumentPaginatedList>> getIssuedDocuments(
        utility::string_t documentTypeId,
        boost::optional<utility::datetime> fromDateTime,
        boost::optional<utility::datetime> toDateTime,
        boost::optional<int32_t> pageNo,
        boost::optional<int32_t> pageSize
    ) const;
    /// <summary>
    /// Get registered document types.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="pageNo">Page number. (optional, default to 0)</param>
    /// <param name="pageSize">Number of items to return. (optional, default to 0)</param>
    pplx::task<std::shared_ptr<DocumentTypePaginatedList>> getRegisteredDocumentTypes(
        boost::optional<int32_t> pageNo,
        boost::optional<int32_t> pageSize
    ) const;
    /// <summary>
    /// Issue a new document to an individual user.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="documentIssueRequest">Document issue request MyDataMyConsent.DeveloperApi.Models.DocumentIssueRequest.</param>
    pplx::task<std::shared_ptr<DocumentIssueRequestDetails>> issueDocumentToIndividual(
        std::shared_ptr<DocumentIssueRequest> documentIssueRequest
    ) const;
    /// <summary>
    /// Issue a new document to an organization.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="documentIssueRequest">Document issue request MyDataMyConsent.DeveloperApi.Models.DocumentIssueRequest.</param>
    pplx::task<std::shared_ptr<DocumentIssueRequestDetails>> issueDocumentToOrganization(
        std::shared_ptr<DocumentIssueRequest> documentIssueRequest
    ) const;
    /// <summary>
    /// Upload a document for issuance request of individual.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="issueRequestId">Issue Request Id System.Guid.</param>
    /// <param name="formFile"></param>
    pplx::task<utility::string_t> uploadDocumentForIndividual(
        utility::string_t issueRequestId,
        std::shared_ptr<HttpContent> formFile
    ) const;
    /// <summary>
    /// Upload a document for issuance request of organization.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="issueRequestId">Issue Request Id System.Guid.</param>
    /// <param name="formFile"></param>
    pplx::task<utility::string_t> uploadDocumentForOrganization(
        utility::string_t issueRequestId,
        std::shared_ptr<HttpContent> formFile
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}

#endif /* MYDATAMYCONSENT_API_DocumentsApi_H_ */

