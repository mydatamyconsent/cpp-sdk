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
 * Document.h
 *
 * 
 */

#ifndef MYDATAMYCONSENT_MODELS_Document_H_
#define MYDATAMYCONSENT_MODELS_Document_H_


#include "ModelBase.h"

#include "model/DocumentsRequired.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace mydatamyconsent {
namespace models {


/// <summary>
/// 
/// </summary>
class  Document
    : public ModelBase
{
public:
    Document();
    virtual ~Document();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Document members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFieldTitle() const;
    bool fieldTitleIsSet() const;
    void unsetField_title();

    void setFieldTitle(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFieldSlug() const;
    bool fieldSlugIsSet() const;
    void unsetField_slug();

    void setFieldSlug(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getDrn();
    bool drnIsSet() const;
    void unsetDrn();

    void setDrn(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<DocumentsRequired> getRequirement() const;
    bool requirementIsSet() const;
    void unsetRequirement();

    void setRequirement(const std::shared_ptr<DocumentsRequired>& value);


protected:
    utility::string_t m_Field_title;
    bool m_Field_titleIsSet;
    utility::string_t m_Field_slug;
    bool m_Field_slugIsSet;
    std::vector<utility::string_t> m_Drn;
    bool m_DrnIsSet;
    std::shared_ptr<DocumentsRequired> m_Requirement;
    bool m_RequirementIsSet;
};


}
}

#endif /* MYDATAMYCONSENT_MODELS_Document_H_ */
