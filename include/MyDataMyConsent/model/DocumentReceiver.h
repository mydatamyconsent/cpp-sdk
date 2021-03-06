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
 * DocumentReceiver.h
 *
 * 
 */

#ifndef MYDATAMYCONSENT_MODELS_DocumentReceiver_H_
#define MYDATAMYCONSENT_MODELS_DocumentReceiver_H_


#include "MyDataMyConsent/ModelBase.h"

#include "MyDataMyConsent/model/StringStringKeyValuePair.h"
#include "MyDataMyConsent/model/IdentificationStrategy.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace mydatamyconsent {
namespace models {

class StringStringKeyValuePair;

/// <summary>
/// 
/// </summary>
class  DocumentReceiver
    : public ModelBase
{
public:
    DocumentReceiver();
    virtual ~DocumentReceiver();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DocumentReceiver members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCountryIso2Code() const;
    bool countryIso2CodeIsSet() const;
    void unsetCountryIso2Code();

    void setCountryIso2Code(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<StringStringKeyValuePair>>& getIdentifiers();
    bool identifiersIsSet() const;
    void unsetIdentifiers();

    void setIdentifiers(const std::vector<std::shared_ptr<StringStringKeyValuePair>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<IdentificationStrategy> getIdentificationStrategy() const;
    bool identificationStrategyIsSet() const;
    void unsetIdentificationStrategy();

    void setIdentificationStrategy(const std::shared_ptr<IdentificationStrategy>& value);


protected:
    utility::string_t m_CountryIso2Code;
    bool m_CountryIso2CodeIsSet;
    std::vector<std::shared_ptr<StringStringKeyValuePair>> m_Identifiers;
    bool m_IdentifiersIsSet;
    std::shared_ptr<IdentificationStrategy> m_IdentificationStrategy;
    bool m_IdentificationStrategyIsSet;
};


}
}

#endif /* MYDATAMYCONSENT_MODELS_DocumentReceiver_H_ */
