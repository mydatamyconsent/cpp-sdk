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
 * DataProviderDiscoveryApi.h
 *
 * 
 */

#ifndef MYDATAMYCONSENT_API_DataProviderDiscoveryApi_H_
#define MYDATAMYCONSENT_API_DataProviderDiscoveryApi_H_



#include "ApiClient.h"

#include "model/DataProvider.h"
#include "model/DataProviderPaginatedList.h"
#include "Object.h"
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace mydatamyconsent {
namespace api {

using namespace mydatamyconsent::models;



class  DataProviderDiscoveryApi 
{
public:

    explicit DataProviderDiscoveryApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~DataProviderDiscoveryApi();

    /// <summary>
    /// Get a Data Provider details by provider id.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="providerId">Data provider id.</param>
    pplx::task<std::shared_ptr<DataProvider>> getDataProviderById(
        utility::string_t providerId
    ) const;
    /// <summary>
    /// Discover all data providers in My Data My Consent by country and filters.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="accountType">Account type. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="documentType">Document type. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="organizationCategory">Organization category. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="pageNo">Page number. (optional, default to 0)</param>
    /// <param name="pageSize">Number of items to return. (optional, default to 0)</param>
    /// <param name="countryIso2Code">ISO2 Country code. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<DataProviderPaginatedList>> getDataProviders(
        boost::optional<utility::string_t> accountType,
        boost::optional<utility::string_t> documentType,
        boost::optional<utility::string_t> organizationCategory,
        boost::optional<int32_t> pageNo,
        boost::optional<int32_t> pageSize,
        boost::optional<utility::string_t> countryIso2Code
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}

#endif /* MYDATAMYCONSENT_API_DataProviderDiscoveryApi_H_ */

