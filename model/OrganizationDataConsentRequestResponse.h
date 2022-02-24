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
 * OrganizationDataConsentRequestResponse.h
 *
 * OrganizationDataConsentRequestResponse
 */

#ifndef MYDATAMYCONSENT_MODELS_OrganizationDataConsentRequestResponse_H_
#define MYDATAMYCONSENT_MODELS_OrganizationDataConsentRequestResponse_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "model/DataConsentStatus.h"

namespace mydatamyconsent {
namespace models {


/// <summary>
/// OrganizationDataConsentRequestResponse
/// </summary>
class  OrganizationDataConsentRequestResponse
    : public ModelBase
{
public:
    OrganizationDataConsentRequestResponse();
    virtual ~OrganizationDataConsentRequestResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// OrganizationDataConsentRequestResponse members

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
    /// Requested date time in utc zone
    /// </summary>
    utility::datetime getRequestedAtUtc() const;
    bool requestedAtUtcIsSet() const;
    void unsetRequestedAtUtc();

    void setRequestedAtUtc(const utility::datetime& value);

    /// <summary>
    /// Request expires date time in utc zone
    /// </summary>
    utility::datetime getRequestExpiresAtUtc() const;
    bool requestExpiresAtUtcIsSet() const;
    void unsetRequestExpiresAtUtc();

    void setRequestExpiresAtUtc(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<DataConsentStatus> getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();

    void setStatus(const std::shared_ptr<DataConsentStatus>& value);

    /// <summary>
    /// Requested transaction id
    /// </summary>
    utility::string_t getTransactionId() const;
    bool transactionIdIsSet() const;
    void unsetTransactionId();

    void setTransactionId(const utility::string_t& value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_TemplateId;
    bool m_TemplateIdIsSet;
    utility::datetime m_RequestedAtUtc;
    bool m_RequestedAtUtcIsSet;
    utility::datetime m_RequestExpiresAtUtc;
    bool m_RequestExpiresAtUtcIsSet;
    std::shared_ptr<DataConsentStatus> m_Status;
    bool m_StatusIsSet;
    utility::string_t m_TransactionId;
    bool m_TransactionIdIsSet;
};


}
}

#endif /* MYDATAMYCONSENT_MODELS_OrganizationDataConsentRequestResponse_H_ */
