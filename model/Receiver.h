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
 * Receiver.h
 *
 * Consent request receiver details
 */

#ifndef MYDATAMYCONSENT_MODELS_Receiver_H_
#define MYDATAMYCONSENT_MODELS_Receiver_H_


#include "ModelBase.h"

#include "model/IdentificationStrategy.h"
#include "model/IdentifierStringKeyValuePair.h"
#include "model/ReceiverType.h"
#include <vector>

namespace mydatamyconsent {
namespace models {


/// <summary>
/// Consent request receiver details
/// </summary>
class  Receiver
    : public ModelBase
{
public:
    Receiver();
    virtual ~Receiver();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Receiver members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ReceiverType> getType() const;
    bool typeIsSet() const;
    void unsetType();

    void setType(const std::shared_ptr<ReceiverType>& value);

    /// <summary>
    /// Consent request receiver identifiers
    /// </summary>
    std::vector<std::shared_ptr<IdentifierStringKeyValuePair>>& getIdentifiers();
    bool identifiersIsSet() const;
    void unsetIdentifiers();

    void setIdentifiers(const std::vector<std::shared_ptr<IdentifierStringKeyValuePair>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<IdentificationStrategy> getIdentificationStrategy() const;
    bool identificationStrategyIsSet() const;
    void unsetIdentificationStrategy();

    void setIdentificationStrategy(const std::shared_ptr<IdentificationStrategy>& value);


protected:
    std::shared_ptr<ReceiverType> m_Type;
    bool m_TypeIsSet;
    std::vector<std::shared_ptr<IdentifierStringKeyValuePair>> m_Identifiers;
    bool m_IdentifiersIsSet;
    std::shared_ptr<IdentificationStrategy> m_IdentificationStrategy;
    bool m_IdentificationStrategyIsSet;
};


}
}

#endif /* MYDATAMYCONSENT_MODELS_Receiver_H_ */
