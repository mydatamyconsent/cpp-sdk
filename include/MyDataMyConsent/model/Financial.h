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
 * Financial.h
 *
 * 
 */

#ifndef MYDATAMYCONSENT_MODELS_Financial_H_
#define MYDATAMYCONSENT_MODELS_Financial_H_


#include "MyDataMyConsent/ModelBase.h"

#include "MyDataMyConsent/model/DocumentsRequired.h"
#include <cpprest/details/basic_types.h>
#include <vector>
#include "MyDataMyConsent/model/FinancialAccounts.h"

namespace mydatamyconsent {
namespace models {

class FinancialAccounts;

/// <summary>
/// 
/// </summary>
class  Financial
    : public ModelBase
{
public:
    Financial();
    virtual ~Financial();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Financial members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFieldName() const;
    bool fieldNameIsSet() const;
    void unsetField_name();

    void setFieldName(const utility::string_t& value);

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
    std::vector<std::shared_ptr<FinancialAccounts>>& getAccounts();
    bool accountsIsSet() const;
    void unsetAccounts();

    void setAccounts(const std::vector<std::shared_ptr<FinancialAccounts>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<DocumentsRequired> getRequirement() const;
    bool requirementIsSet() const;
    void unsetRequirement();

    void setRequirement(const std::shared_ptr<DocumentsRequired>& value);


protected:
    utility::string_t m_Field_name;
    bool m_Field_nameIsSet;
    utility::string_t m_Custom_key;
    bool m_Custom_keyIsSet;
    std::vector<std::shared_ptr<FinancialAccounts>> m_Accounts;
    bool m_AccountsIsSet;
    std::shared_ptr<DocumentsRequired> m_Requirement;
    bool m_RequirementIsSet;
};


}
}

#endif /* MYDATAMYCONSENT_MODELS_Financial_H_ */
