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
 * StringStringKeyValuePair.h
 *
 * 
 */

#ifndef MYDATAMYCONSENT_MODELS_StringStringKeyValuePair_H_
#define MYDATAMYCONSENT_MODELS_StringStringKeyValuePair_H_


#include "MyDataMyConsent/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace mydatamyconsent {
namespace models {


/// <summary>
/// 
/// </summary>
class  StringStringKeyValuePair
    : public ModelBase
{
public:
    StringStringKeyValuePair();
    virtual ~StringStringKeyValuePair();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// StringStringKeyValuePair members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getKey() const;
    bool keyIsSet() const;
    void unsetKey();

    void setKey(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getValue() const;
    bool valueIsSet() const;
    void unsetValue();

    void setValue(const utility::string_t& value);


protected:
    utility::string_t m_Key;
    bool m_KeyIsSet;
    utility::string_t m_Value;
    bool m_ValueIsSet;
};


}
}

#endif /* MYDATAMYCONSENT_MODELS_StringStringKeyValuePair_H_ */