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
 * CreateIndividualDataConsentRequest.h
 *
 * Create individual data consent request
 */

#ifndef MYDATAMYCONSENT_MODELS_CreateIndividualDataConsentRequest_H_
#define MYDATAMYCONSENT_MODELS_CreateIndividualDataConsentRequest_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "model/Receiver.h"

namespace mydatamyconsent {
namespace models {


/// <summary>
/// Create individual data consent request
/// </summary>
class  CreateIndividualDataConsentRequest
    : public ModelBase
{
public:
    CreateIndividualDataConsentRequest();
    virtual ~CreateIndividualDataConsentRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CreateIndividualDataConsentRequest members

    /// <summary>
    /// Consent template id
    /// </summary>
    utility::string_t getConsentTemplateId() const;
    bool consentTemplateIdIsSet() const;
    void unsetConsentTemplateId();

    void setConsentTemplateId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Receiver> getReceiver() const;
    bool receiverIsSet() const;
    void unsetReceiver();

    void setReceiver(const std::shared_ptr<Receiver>& value);


protected:
    utility::string_t m_ConsentTemplateId;
    bool m_ConsentTemplateIdIsSet;
    std::shared_ptr<Receiver> m_Receiver;
    bool m_ReceiverIsSet;
};


}
}

#endif /* MYDATAMYCONSENT_MODELS_CreateIndividualDataConsentRequest_H_ */
