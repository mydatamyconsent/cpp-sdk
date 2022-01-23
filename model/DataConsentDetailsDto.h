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
#include "model/GetConsentTemplateDetailsDto.h"
#include <cpprest/details/basic_types.h>
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
    std::shared_ptr<DataConsentRequesterDto> getRequester() const;
    bool requesterIsSet() const;
    void unsetRequester();

    void setRequester(const std::shared_ptr<DataConsentRequesterDto>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<GetConsentTemplateDetailsDto> getConsentDetails() const;
    bool consentDetailsIsSet() const;
    void unsetConsentDetails();

    void setConsentDetails(const std::shared_ptr<GetConsentTemplateDetailsDto>& value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
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
    std::shared_ptr<DataConsentRequesterDto> m_Requester;
    bool m_RequesterIsSet;
    std::shared_ptr<GetConsentTemplateDetailsDto> m_ConsentDetails;
    bool m_ConsentDetailsIsSet;
};


}
}

#endif /* MYDATAMYCONSENT_MODELS_DataConsentDetailsDto_H_ */
