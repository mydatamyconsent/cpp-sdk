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
 * DataConsentRequestedAccountDto.h
 *
 * 
 */

#ifndef MYDATAMYCONSENT_MODELS_DataConsentRequestedAccountDto_H_
#define MYDATAMYCONSENT_MODELS_DataConsentRequestedAccountDto_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>
#include "model/SuggestedAccountDto.h"

namespace mydatamyconsent {
namespace models {


/// <summary>
/// 
/// </summary>
class  DataConsentRequestedAccountDto
    : public ModelBase
{
public:
    DataConsentRequestedAccountDto();
    virtual ~DataConsentRequestedAccountDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DataConsentRequestedAccountDto members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

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
    std::vector<std::shared_ptr<SuggestedAccountDto>>& getSuggestedAccounts();
    bool suggestedAccountsIsSet() const;
    void unsetSuggestedAccounts();

    void setSuggestedAccounts(const std::vector<std::shared_ptr<SuggestedAccountDto>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getIssuer();
    bool issuerIsSet() const;
    void unsetIssuer();

    void setIssuer(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getIssuerLogoUrls();
    bool issuerLogoUrlsIsSet() const;
    void unsetIssuerLogoUrls();

    void setIssuerLogoUrls(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRequestedDataType() const;
    bool requestedDataTypeIsSet() const;
    void unsetRequestedDataType();

    void setRequestedDataType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    bool isOptional() const;
    bool optionalIsSet() const;
    void unsetOptional();

    void setOptional(bool value);


protected:
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_AccountTypeId;
    bool m_AccountTypeIdIsSet;
    std::vector<std::shared_ptr<SuggestedAccountDto>> m_SuggestedAccounts;
    bool m_SuggestedAccountsIsSet;
    std::vector<utility::string_t> m_Issuer;
    bool m_IssuerIsSet;
    std::vector<utility::string_t> m_IssuerLogoUrls;
    bool m_IssuerLogoUrlsIsSet;
    utility::string_t m_RequestedDataType;
    bool m_RequestedDataTypeIsSet;
    bool m_Optional;
    bool m_OptionalIsSet;
};


}
}

#endif /* MYDATAMYCONSENT_MODELS_DataConsentRequestedAccountDto_H_ */