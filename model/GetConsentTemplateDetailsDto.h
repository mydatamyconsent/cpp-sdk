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
 * GetConsentTemplateDetailsDto.h
 *
 * 
 */

#ifndef MYDATAMYCONSENT_MODELS_GetConsentTemplateDetailsDto_H_
#define MYDATAMYCONSENT_MODELS_GetConsentTemplateDetailsDto_H_


#include "ModelBase.h"

#include "model/ConsentTemplateTypes.h"
#include "model/CollectibleTypes.h"
#include "model/Financial.h"
#include "model/IdentitySupportedFields.h"
#include <cpprest/details/basic_types.h>
#include "Object.h"
#include "model/Document.h"
#include <vector>
#include "model/FetchTypes.h"
#include "model/Life.h"

namespace mydatamyconsent {
namespace models {


/// <summary>
/// 
/// </summary>
class  GetConsentTemplateDetailsDto
    : public ModelBase
{
public:
    GetConsentTemplateDetailsDto();
    virtual ~GetConsentTemplateDetailsDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// GetConsentTemplateDetailsDto members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDescription() const;
    bool descriptionIsSet() const;
    void unsetDescription();

    void setDescription(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getConsentPurpose() const;
    bool consentPurposeIsSet() const;
    void unsetConsentPurpose();

    void setConsentPurpose(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<CollectibleTypes>>& getCollectables();
    bool collectablesIsSet() const;
    void unsetCollectables();

    void setCollectables(const std::vector<std::shared_ptr<CollectibleTypes>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<FetchTypes> getFetchType() const;
    bool fetchTypeIsSet() const;
    void unsetFetchType();

    void setFetchType(const std::shared_ptr<FetchTypes>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getShortId() const;
    bool shortIdIsSet() const;
    void unsetShortId();

    void setShortId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetCreatedBy();

    void setCreatedBy(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getCreatedAtUtc() const;
    bool createdAtUtcIsSet() const;
    void unsetCreatedAtUtc();

    void setCreatedAtUtc(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();

    void setStatus(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConsentTemplateTypes> getTemplateType() const;
    bool templateTypeIsSet() const;
    void unsetTemplateType();

    void setTemplateType(const std::shared_ptr<ConsentTemplateTypes>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Life> getDataLife() const;
    bool dataLifeIsSet() const;
    void unsetDataLife();

    void setDataLife(const std::shared_ptr<Life>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Life> getRequestLife() const;
    bool requestLifeIsSet() const;
    void unsetRequestLife();

    void setRequestLife(const std::shared_ptr<Life>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Life> getFrequency() const;
    bool frequencyIsSet() const;
    void unsetFrequency();

    void setFrequency(const std::shared_ptr<Life>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<IdentitySupportedFields>>& getIdentity();
    bool identityIsSet() const;
    void unsetIdentity();

    void setIdentity(const std::vector<std::shared_ptr<IdentitySupportedFields>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<Document>>& getDocuments();
    bool documentsIsSet() const;
    void unsetDocuments();

    void setDocuments(const std::vector<std::shared_ptr<Document>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<Financial>>& getFinancials();
    bool financialsIsSet() const;
    void unsetFinancials();

    void setFinancials(const std::vector<std::shared_ptr<Financial>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<Object>>& getHealthRecords();
    bool healthRecordsIsSet() const;
    void unsetHealthRecords();

    void setHealthRecords(const std::vector<std::shared_ptr<Object>>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getApprovedBy() const;
    bool approvedByIsSet() const;
    void unsetApprovedBy();

    void setApprovedBy(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getApprovedAtUtc() const;
    bool approvedAtUtcIsSet() const;
    void unsetApprovedAtUtc();

    void setApprovedAtUtc(const utility::datetime& value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
    utility::string_t m_ConsentPurpose;
    bool m_ConsentPurposeIsSet;
    std::vector<std::shared_ptr<CollectibleTypes>> m_Collectables;
    bool m_CollectablesIsSet;
    std::shared_ptr<FetchTypes> m_FetchType;
    bool m_FetchTypeIsSet;
    utility::string_t m_ShortId;
    bool m_ShortIdIsSet;
    utility::string_t m_CreatedBy;
    bool m_CreatedByIsSet;
    utility::datetime m_CreatedAtUtc;
    bool m_CreatedAtUtcIsSet;
    utility::string_t m_Status;
    bool m_StatusIsSet;
    std::shared_ptr<ConsentTemplateTypes> m_TemplateType;
    bool m_TemplateTypeIsSet;
    std::shared_ptr<Life> m_DataLife;
    bool m_DataLifeIsSet;
    std::shared_ptr<Life> m_RequestLife;
    bool m_RequestLifeIsSet;
    std::shared_ptr<Life> m_Frequency;
    bool m_FrequencyIsSet;
    std::vector<std::shared_ptr<IdentitySupportedFields>> m_Identity;
    bool m_IdentityIsSet;
    std::vector<std::shared_ptr<Document>> m_Documents;
    bool m_DocumentsIsSet;
    std::vector<std::shared_ptr<Financial>> m_Financials;
    bool m_FinancialsIsSet;
    std::vector<std::shared_ptr<Object>> m_HealthRecords;
    bool m_HealthRecordsIsSet;
    utility::string_t m_ApprovedBy;
    bool m_ApprovedByIsSet;
    utility::datetime m_ApprovedAtUtc;
    bool m_ApprovedAtUtcIsSet;
};


}
}

#endif /* MYDATAMYCONSENT_MODELS_GetConsentTemplateDetailsDto_H_ */
