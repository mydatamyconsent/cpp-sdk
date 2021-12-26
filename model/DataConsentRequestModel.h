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
 * DataConsentRequestModel.h
 *
 * 
 */

#ifndef MYDATAMYCONSENT_MODELS_DataConsentRequestModel_H_
#define MYDATAMYCONSENT_MODELS_DataConsentRequestModel_H_


#include "ModelBase.h"

#include "model/DataFetchType.h"
#include "model/DataConsentRequestedFaDto.h"
#include "model/IdentityClaim.h"
#include "model/DataLifeUnit.h"
#include "model/DataConsentRequestedDocumentDto.h"
#include <cpprest/details/basic_types.h>
#include "model/DataFetchFrequencyUnit.h"
#include <map>
#include <vector>

namespace mydatamyconsent {
namespace models {


/// <summary>
/// 
/// </summary>
class  DataConsentRequestModel
    : public ModelBase
{
public:
    DataConsentRequestModel();
    virtual ~DataConsentRequestModel();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DataConsentRequestModel members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOrganizationId() const;
    bool organizationIdIsSet() const;
    void unsetOrganizationId();

    void setOrganizationId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTransactionId() const;
    bool transactionIdIsSet() const;
    void unsetTransactionId();

    void setTransactionId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::map<utility::string_t, utility::string_t>& getIdentifiers();
    bool identifiersIsSet() const;
    void unsetIdentifiers();

    void setIdentifiers(const std::map<utility::string_t, utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getStartDateTime() const;
    bool startDateTimeIsSet() const;
    void unsetStartDateTime();

    void setStartDateTime(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getExpiryDateTime() const;
    bool expiryDateTimeIsSet() const;
    void unsetExpiryDateTime();

    void setExpiryDateTime(const utility::datetime& value);

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
    utility::string_t getPurposeCode() const;
    bool purposeCodeIsSet() const;
    void unsetPurposeCode();

    void setPurposeCode(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPurposeLink() const;
    bool purposeLinkIsSet() const;
    void unsetPurposeLink();

    void setPurposeLink(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<DataLifeUnit> getDataLifeUnit() const;
    bool dataLifeUnitIsSet() const;
    void unsetDataLifeUnit();

    void setDataLifeUnit(const std::shared_ptr<DataLifeUnit>& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getDataLifeValue() const;
    bool dataLifeValueIsSet() const;
    void unsetDataLifeValue();

    void setDataLifeValue(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<DataFetchFrequencyUnit> getDataFetchFrequencyUnit() const;
    bool dataFetchFrequencyUnitIsSet() const;
    void unsetDataFetchFrequencyUnit();

    void setDataFetchFrequencyUnit(const std::shared_ptr<DataFetchFrequencyUnit>& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getDataFetchFrequencyUnitValue() const;
    bool dataFetchFrequencyUnitValueIsSet() const;
    void unsetDataFetchFrequencyUnitValue();

    void setDataFetchFrequencyUnitValue(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<DataFetchType> getDataFetchType() const;
    bool dataFetchTypeIsSet() const;
    void unsetDataFetchType();

    void setDataFetchType(const std::shared_ptr<DataFetchType>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAgreementId() const;
    bool agreementIdIsSet() const;
    void unsetAgreementId();

    void setAgreementId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<IdentityClaim>>& getIdentityClaims();
    bool identityClaimsIsSet() const;
    void unsetIdentityClaims();

    void setIdentityClaims(const std::vector<std::shared_ptr<IdentityClaim>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<DataConsentRequestedFaDto>>& getFinancialAccounts();
    bool financialAccountsIsSet() const;
    void unsetFinancialAccounts();

    void setFinancialAccounts(const std::vector<std::shared_ptr<DataConsentRequestedFaDto>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<DataConsentRequestedDocumentDto>>& getDocuments();
    bool documentsIsSet() const;
    void unsetDocuments();

    void setDocuments(const std::vector<std::shared_ptr<DataConsentRequestedDocumentDto>>& value);


protected:
    utility::string_t m_OrganizationId;
    bool m_OrganizationIdIsSet;
    utility::string_t m_TransactionId;
    bool m_TransactionIdIsSet;
    std::map<utility::string_t, utility::string_t> m_Identifiers;
    bool m_IdentifiersIsSet;
    utility::datetime m_StartDateTime;
    bool m_StartDateTimeIsSet;
    utility::datetime m_ExpiryDateTime;
    bool m_ExpiryDateTimeIsSet;
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
    utility::string_t m_PurposeCode;
    bool m_PurposeCodeIsSet;
    utility::string_t m_PurposeLink;
    bool m_PurposeLinkIsSet;
    std::shared_ptr<DataLifeUnit> m_DataLifeUnit;
    bool m_DataLifeUnitIsSet;
    int32_t m_DataLifeValue;
    bool m_DataLifeValueIsSet;
    std::shared_ptr<DataFetchFrequencyUnit> m_DataFetchFrequencyUnit;
    bool m_DataFetchFrequencyUnitIsSet;
    int32_t m_DataFetchFrequencyUnitValue;
    bool m_DataFetchFrequencyUnitValueIsSet;
    std::shared_ptr<DataFetchType> m_DataFetchType;
    bool m_DataFetchTypeIsSet;
    utility::string_t m_AgreementId;
    bool m_AgreementIdIsSet;
    std::vector<std::shared_ptr<IdentityClaim>> m_IdentityClaims;
    bool m_IdentityClaimsIsSet;
    std::vector<std::shared_ptr<DataConsentRequestedFaDto>> m_FinancialAccounts;
    bool m_FinancialAccountsIsSet;
    std::vector<std::shared_ptr<DataConsentRequestedDocumentDto>> m_Documents;
    bool m_DocumentsIsSet;
};


}
}

#endif /* MYDATAMYCONSENT_MODELS_DataConsentRequestModel_H_ */