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
 * DataConsentRequestDetails.h
 *
 * DataConsentRequestResponse
 */

#ifndef MYDATAMYCONSENT_MODELS_DataConsentRequestDetails_H_
#define MYDATAMYCONSENT_MODELS_DataConsentRequestDetails_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "model/DataConsentStatus.h"

namespace mydatamyconsent {
namespace models {


/// <summary>
/// DataConsentRequestResponse
/// </summary>
class  DataConsentRequestDetails
    : public ModelBase
{
public:
    DataConsentRequestDetails();
    virtual ~DataConsentRequestDetails();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DataConsentRequestDetails members

    /// <summary>
    /// Consent request id
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// Consent request template id
    /// </summary>
    utility::string_t getTemplateId() const;
    bool templateIdIsSet() const;
    void unsetTemplateId();

    void setTemplateId(const utility::string_t& value);

    /// <summary>
    /// Data Consent id
    /// </summary>
    utility::string_t getConsentId() const;
    bool consentIdIsSet() const;
    void unsetConsentId();

    void setConsentId(const utility::string_t& value);

    /// <summary>
    /// Consent request title.
    /// </summary>
    utility::string_t getTitle() const;
    bool titleIsSet() const;
    void unsetTitle();

    void setTitle(const utility::string_t& value);

    /// <summary>
    /// Consent request description.
    /// </summary>
    utility::string_t getDescription() const;
    bool descriptionIsSet() const;
    void unsetDescription();

    void setDescription(const utility::string_t& value);

    /// <summary>
    /// Consent request purpose.
    /// </summary>
    utility::string_t getPurpose() const;
    bool purposeIsSet() const;
    void unsetPurpose();

    void setPurpose(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<DataConsentStatus> getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();

    void setStatus(const std::shared_ptr<DataConsentStatus>& value);

    /// <summary>
    /// Transaction id
    /// </summary>
    utility::string_t getTransactionId() const;
    bool transactionIdIsSet() const;
    void unsetTransactionId();

    void setTransactionId(const utility::string_t& value);

    /// <summary>
    /// Request creation datetime in UTC timezone
    /// </summary>
    utility::datetime getCreatedAtUtc() const;
    bool createdAtUtcIsSet() const;
    void unsetCreatedAtUtc();

    void setCreatedAtUtc(const utility::datetime& value);

    /// <summary>
    /// Request expiration datetime in UTC timezone
    /// </summary>
    utility::datetime getExpiresAtUtc() const;
    bool expiresAtUtcIsSet() const;
    void unsetExpiresAtUtc();

    void setExpiresAtUtc(const utility::datetime& value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_TemplateId;
    bool m_TemplateIdIsSet;
    utility::string_t m_ConsentId;
    bool m_ConsentIdIsSet;
    utility::string_t m_Title;
    bool m_TitleIsSet;
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
    utility::string_t m_Purpose;
    bool m_PurposeIsSet;
    std::shared_ptr<DataConsentStatus> m_Status;
    bool m_StatusIsSet;
    utility::string_t m_TransactionId;
    bool m_TransactionIdIsSet;
    utility::datetime m_CreatedAtUtc;
    bool m_CreatedAtUtcIsSet;
    utility::datetime m_ExpiresAtUtc;
    bool m_ExpiresAtUtcIsSet;
};


}
}

#endif /* MYDATAMYCONSENT_MODELS_DataConsentRequestDetails_H_ */
