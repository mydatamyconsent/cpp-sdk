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
 * DataConsentDetailsDto.h
 *
 * 
 */

#ifndef MYDATAMYCONSENT_MODELS_DataConsentDetailsDto_H_
#define MYDATAMYCONSENT_MODELS_DataConsentDetailsDto_H_


#include "ModelBase.h"

#include "model/DataConsentRequesterDto.h"
#include "model/DataFetchType.h"
#include "model/JsonSchema.h"
#include "model/DataLifeUnit.h"
#include "model/DataConsentRequestedAccountDto.h"
#include "model/DataConsentRequestedDocumentDto.h"
#include <cpprest/details/basic_types.h>
#include "model/DataFetchFrequencyUnit.h"
#include "model/DataConsentRequestedDocument.h"
#include <vector>
#include "model/DataConsentStatus.h"

namespace mydatamyconsent {
namespace models {


/// <summary>
/// 
/// </summary>
class  DataConsentDetailsDto
    : public ModelBase
{
public:
    DataConsentDetailsDto();
    virtual ~DataConsentDetailsDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DataConsentDetailsDto members

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
    std::shared_ptr<DataConsentRequesterDto> getRequester() const;
    bool requesterIsSet() const;
    void unsetRequester();

    void setRequester(const std::shared_ptr<DataConsentRequesterDto>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getLocation() const;
    bool locationIsSet() const;
    void unsetLocation();

    void setLocation(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    bool isPersonalInfoRequested() const;
    bool personalInfoRequestedIsSet() const;
    void unsetPersonalInfoRequested();

    void setPersonalInfoRequested(bool value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getDocuments() const;
    bool documentsIsSet() const;
    void unsetDocuments();

    void setDocuments(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getFinancialAccounts() const;
    bool financialAccountsIsSet() const;
    void unsetFinancialAccounts();

    void setFinancialAccounts(int32_t value);

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
    utility::string_t getIpAddress() const;
    bool ipAddressIsSet() const;
    void unsetIpAddress();

    void setIpAddress(const utility::string_t& value);

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
    utility::string_t getAgreementId() const;
    bool agreementIdIsSet() const;
    void unsetAgreementId();

    void setAgreementId(const utility::string_t& value);

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
    std::shared_ptr<DataConsentStatus> getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();

    void setStatus(const std::shared_ptr<DataConsentStatus>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getApprovedAtUtc() const;
    bool approvedAtUtcIsSet() const;
    void unsetApprovedAtUtc();

    void setApprovedAtUtc(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getRejectedAtUtc() const;
    bool rejectedAtUtcIsSet() const;
    void unsetRejectedAtUtc();

    void setRejectedAtUtc(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getExpiresAtUtc() const;
    bool expiresAtUtcIsSet() const;
    void unsetExpiresAtUtc();

    void setExpiresAtUtc(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getRequestedAtUtc() const;
    bool requestedAtUtcIsSet() const;
    void unsetRequestedAtUtc();

    void setRequestedAtUtc(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<DataConsentRequestedAccountDto>>& getRequestedFinancialAccounts();
    bool requestedFinancialAccountsIsSet() const;
    void unsetRequestedFinancialAccounts();

    void setRequestedFinancialAccounts(const std::vector<std::shared_ptr<DataConsentRequestedAccountDto>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<DataConsentRequestedDocumentDto>>& getRequestedDocuments();
    bool requestedDocumentsIsSet() const;
    void unsetRequestedDocuments();

    void setRequestedDocuments(const std::vector<std::shared_ptr<DataConsentRequestedDocumentDto>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<DataConsentRequestedDocument>>& getRequestedHealthData();
    bool requestedHealthDataIsSet() const;
    void unsetRequestedHealthData();

    void setRequestedHealthData(const std::vector<std::shared_ptr<DataConsentRequestedDocument>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<JsonSchema> getRequestedIdentityDetails() const;
    bool requestedIdentityDetailsIsSet() const;
    void unsetRequestedIdentityDetails();

    void setRequestedIdentityDetails(const std::shared_ptr<JsonSchema>& value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    std::shared_ptr<DataConsentRequesterDto> m_Requester;
    bool m_RequesterIsSet;
    utility::string_t m_Location;
    bool m_LocationIsSet;
    bool m_PersonalInfoRequested;
    bool m_PersonalInfoRequestedIsSet;
    int32_t m_Documents;
    bool m_DocumentsIsSet;
    int32_t m_FinancialAccounts;
    bool m_FinancialAccountsIsSet;
    utility::string_t m_TransactionId;
    bool m_TransactionIdIsSet;
    utility::string_t m_IpAddress;
    bool m_IpAddressIsSet;
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
    utility::string_t m_PurposeCode;
    bool m_PurposeCodeIsSet;
    utility::string_t m_PurposeLink;
    bool m_PurposeLinkIsSet;
    utility::string_t m_AgreementId;
    bool m_AgreementIdIsSet;
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
    std::shared_ptr<DataConsentStatus> m_Status;
    bool m_StatusIsSet;
    utility::datetime m_ApprovedAtUtc;
    bool m_ApprovedAtUtcIsSet;
    utility::datetime m_RejectedAtUtc;
    bool m_RejectedAtUtcIsSet;
    utility::datetime m_ExpiresAtUtc;
    bool m_ExpiresAtUtcIsSet;
    utility::datetime m_RequestedAtUtc;
    bool m_RequestedAtUtcIsSet;
    std::vector<std::shared_ptr<DataConsentRequestedAccountDto>> m_RequestedFinancialAccounts;
    bool m_RequestedFinancialAccountsIsSet;
    std::vector<std::shared_ptr<DataConsentRequestedDocumentDto>> m_RequestedDocuments;
    bool m_RequestedDocumentsIsSet;
    std::vector<std::shared_ptr<DataConsentRequestedDocument>> m_RequestedHealthData;
    bool m_RequestedHealthDataIsSet;
    std::shared_ptr<JsonSchema> m_RequestedIdentityDetails;
    bool m_RequestedIdentityDetailsIsSet;
};


}
}

#endif /* MYDATAMYCONSENT_MODELS_DataConsentDetailsDto_H_ */
