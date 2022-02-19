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
 * DataConsentRequestedFinancialAccount.h
 *
 * 
 */

#ifndef MYDATAMYCONSENT_MODELS_DataConsentRequestedFinancialAccount_H_
#define MYDATAMYCONSENT_MODELS_DataConsentRequestedFinancialAccount_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace mydatamyconsent {
namespace models {


/// <summary>
/// 
/// </summary>
class  DataConsentRequestedFinancialAccount
    : public ModelBase
{
public:
    DataConsentRequestedFinancialAccount();
    virtual ~DataConsentRequestedFinancialAccount();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DataConsentRequestedFinancialAccount members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCustomKey() const;
    bool customKeyIsSet() const;
    void unsetCustom_key();

    void setCustomKey(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDrn() const;
    bool drnIsSet() const;
    void unsetDrn();

    void setDrn(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAccountTypeId() const;
    bool accountTypeIdIsSet() const;
    void unsetAccountTypeId();

    void setAccountTypeId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAccountIdentifier() const;
    bool accountIdentifierIsSet() const;
    void unsetAccountIdentifier();

    void setAccountIdentifier(const utility::string_t& value);


protected:
    utility::string_t m_Custom_key;
    bool m_Custom_keyIsSet;
    utility::string_t m_Drn;
    bool m_DrnIsSet;
    utility::string_t m_AccountTypeId;
    bool m_AccountTypeIdIsSet;
    utility::string_t m_AccountIdentifier;
    bool m_AccountIdentifierIsSet;
};


}
}

#endif /* MYDATAMYCONSENT_MODELS_DataConsentRequestedFinancialAccount_H_ */
