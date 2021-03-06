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
 * DataProcessingAgreementPaginatedList.h
 *
 * 
 */

#ifndef MYDATAMYCONSENT_MODELS_DataProcessingAgreementPaginatedList_H_
#define MYDATAMYCONSENT_MODELS_DataProcessingAgreementPaginatedList_H_


#include "MyDataMyConsent/ModelBase.h"

#include "MyDataMyConsent/model/DataProcessingAgreement.h"
#include <vector>

namespace mydatamyconsent {
namespace models {

class DataProcessingAgreement;

/// <summary>
/// 
/// </summary>
class  DataProcessingAgreementPaginatedList
    : public ModelBase
{
public:
    DataProcessingAgreementPaginatedList();
    virtual ~DataProcessingAgreementPaginatedList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DataProcessingAgreementPaginatedList members

    /// <summary>
    /// 
    /// </summary>
    int32_t getPageIndex() const;
    bool pageIndexIsSet() const;
    void unsetPageIndex();

    void setPageIndex(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetPageSize();

    void setPageSize(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getTotalPages() const;
    bool totalPagesIsSet() const;
    void unsetTotalPages();

    void setTotalPages(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getTotalItems() const;
    bool totalItemsIsSet() const;
    void unsetTotalItems();

    void setTotalItems(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<DataProcessingAgreement>>& getItems();
    bool itemsIsSet() const;
    void unsetItems();

    void setItems(const std::vector<std::shared_ptr<DataProcessingAgreement>>& value);


protected:
    int32_t m_PageIndex;
    bool m_PageIndexIsSet;
    int32_t m_PageSize;
    bool m_PageSizeIsSet;
    int32_t m_TotalPages;
    bool m_TotalPagesIsSet;
    int64_t m_TotalItems;
    bool m_TotalItemsIsSet;
    std::vector<std::shared_ptr<DataProcessingAgreement>> m_Items;
    bool m_ItemsIsSet;
};


}
}

#endif /* MYDATAMYCONSENT_MODELS_DataProcessingAgreementPaginatedList_H_ */
