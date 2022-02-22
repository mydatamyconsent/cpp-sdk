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
 * DocumentType.h
 *
 * Issuable Document Type details.
 */

#ifndef MYDATAMYCONSENT_MODELS_DocumentType_H_
#define MYDATAMYCONSENT_MODELS_DocumentType_H_


#include "ModelBase.h"

#include "model/DocumentCategoryType.h"
#include "model/SupportedEntityType.h"
#include <cpprest/details/basic_types.h>
#include <vector>
#include "model/DocumentSubCategoryType.h"

namespace mydatamyconsent {
namespace models {


/// <summary>
/// Issuable Document Type details.
/// </summary>
class  DocumentType
    : public ModelBase
{
public:
    DocumentType();
    virtual ~DocumentType();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DocumentType members

    /// <summary>
    /// Document Type Identifier.
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<DocumentCategoryType> getCategoryType() const;
    bool categoryTypeIsSet() const;
    void unsetCategoryType();

    void setCategoryType(const std::shared_ptr<DocumentCategoryType>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<DocumentSubCategoryType> getSubCategoryType() const;
    bool subCategoryTypeIsSet() const;
    void unsetSubCategoryType();

    void setSubCategoryType(const std::shared_ptr<DocumentSubCategoryType>& value);

    /// <summary>
    /// Document Type Name. eg: Driving License.
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// Document Type Unique Slug. eg: \&quot;in.gov.gj.transport.dl\&quot;.
    /// </summary>
    utility::string_t getSlug() const;
    bool slugIsSet() const;
    void unsetSlug();

    void setSlug(const utility::string_t& value);

    /// <summary>
    /// Document Type description. eg: Gujarat State Driving License.
    /// </summary>
    utility::string_t getDescription() const;
    bool descriptionIsSet() const;
    void unsetDescription();

    void setDescription(const utility::string_t& value);

    /// <summary>
    /// Logo URL of document type.
    /// </summary>
    utility::string_t getLogoUrl() const;
    bool logoUrlIsSet() const;
    void unsetLogoUrl();

    void setLogoUrl(const utility::string_t& value);

    /// <summary>
    /// Document search repository service name.
    /// </summary>
    utility::string_t getSearchServiceName() const;
    bool searchServiceNameIsSet() const;
    void unsetSearchServiceName();

    void setSearchServiceName(const utility::string_t& value);

    /// <summary>
    /// Document repository service name.
    /// </summary>
    utility::string_t getRepositoryServiceName() const;
    bool repositoryServiceNameIsSet() const;
    void unsetRepositoryServiceName();

    void setRepositoryServiceName(const utility::string_t& value);

    /// <summary>
    /// Supported entity types. eg: Individual, Organization.
    /// </summary>
    std::vector<std::shared_ptr<SupportedEntityType>>& getSupportedEntityTypes();
    bool supportedEntityTypesIsSet() const;
    void unsetSupportedEntityTypes();

    void setSupportedEntityTypes(const std::vector<std::shared_ptr<SupportedEntityType>>& value);

    /// <summary>
    /// Name of the document type creator.
    /// </summary>
    utility::string_t getAddedBy() const;
    bool addedByIsSet() const;
    void unsetAddedBy();

    void setAddedBy(const utility::string_t& value);

    /// <summary>
    /// Payable amount if document is chargeable. eg: 10.25.
    /// </summary>
    double getPayableAmount() const;
    bool payableAmountIsSet() const;
    void unsetPayableAmount();

    void setPayableAmount(double value);

    /// <summary>
    /// Payable amount currency. eg: INR, USD etc.,.
    /// </summary>
    utility::string_t getPayableAmountCurrency() const;
    bool payableAmountCurrencyIsSet() const;
    void unsetPayableAmountCurrency();

    void setPayableAmountCurrency(const utility::string_t& value);

    /// <summary>
    /// DateTime of approval in UTC timezone.
    /// </summary>
    utility::datetime getApprovedAtUtc() const;
    bool approvedAtUtcIsSet() const;
    void unsetApprovedAtUtc();

    void setApprovedAtUtc(const utility::datetime& value);

    /// <summary>
    /// Document type approval status.
    /// </summary>
    bool isApproved() const;
    bool approvedIsSet() const;
    void unsetApproved();

    void setApproved(bool value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    std::shared_ptr<DocumentCategoryType> m_CategoryType;
    bool m_CategoryTypeIsSet;
    std::shared_ptr<DocumentSubCategoryType> m_SubCategoryType;
    bool m_SubCategoryTypeIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_Slug;
    bool m_SlugIsSet;
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
    utility::string_t m_LogoUrl;
    bool m_LogoUrlIsSet;
    utility::string_t m_SearchServiceName;
    bool m_SearchServiceNameIsSet;
    utility::string_t m_RepositoryServiceName;
    bool m_RepositoryServiceNameIsSet;
    std::vector<std::shared_ptr<SupportedEntityType>> m_SupportedEntityTypes;
    bool m_SupportedEntityTypesIsSet;
    utility::string_t m_AddedBy;
    bool m_AddedByIsSet;
    double m_PayableAmount;
    bool m_PayableAmountIsSet;
    utility::string_t m_PayableAmountCurrency;
    bool m_PayableAmountCurrencyIsSet;
    utility::datetime m_ApprovedAtUtc;
    bool m_ApprovedAtUtcIsSet;
    bool m_Approved;
    bool m_ApprovedIsSet;
};


}
}

#endif /* MYDATAMYCONSENT_MODELS_DocumentType_H_ */