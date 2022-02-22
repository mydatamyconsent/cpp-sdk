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
 * SupportedIdentifiersByCountry.h
 *
 * 
 */

#ifndef MYDATAMYCONSENT_MODELS_SupportedIdentifiersByCountry_H_
#define MYDATAMYCONSENT_MODELS_SupportedIdentifiersByCountry_H_


#include "ModelBase.h"

#include "model/SupportedIdentifier.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace mydatamyconsent {
namespace models {


/// <summary>
/// 
/// </summary>
class  SupportedIdentifiersByCountry
    : public ModelBase
{
public:
    SupportedIdentifiersByCountry();
    virtual ~SupportedIdentifiersByCountry();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SupportedIdentifiersByCountry members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getIso2() const;
    bool iso2IsSet() const;
    void unsetIso2();

    void setIso2(const utility::string_t& value);

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
    utility::string_t getFlag() const;
    bool flagIsSet() const;
    void unsetFlag();

    void setFlag(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<SupportedIdentifier>>& getIndividualIdentifiers();
    bool individualIdentifiersIsSet() const;
    void unsetIndividualIdentifiers();

    void setIndividualIdentifiers(const std::vector<std::shared_ptr<SupportedIdentifier>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<SupportedIdentifier>>& getOrganizationIdentifiers();
    bool organizationIdentifiersIsSet() const;
    void unsetOrganizationIdentifiers();

    void setOrganizationIdentifiers(const std::vector<std::shared_ptr<SupportedIdentifier>>& value);


protected:
    utility::string_t m_Iso2;
    bool m_Iso2IsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_Flag;
    bool m_FlagIsSet;
    std::vector<std::shared_ptr<SupportedIdentifier>> m_IndividualIdentifiers;
    bool m_IndividualIdentifiersIsSet;
    std::vector<std::shared_ptr<SupportedIdentifier>> m_OrganizationIdentifiers;
    bool m_OrganizationIdentifiersIsSet;
};


}
}

#endif /* MYDATAMYCONSENT_MODELS_SupportedIdentifiersByCountry_H_ */
