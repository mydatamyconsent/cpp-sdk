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



#include "Document.h"

namespace mydatamyconsent {
namespace models {




Document::Document()
{
    m_Field_title = utility::conversions::to_string_t("");
    m_Field_titleIsSet = false;
    m_Field_slug = utility::conversions::to_string_t("");
    m_Field_slugIsSet = false;
    m_DrnIsSet = false;
    m_RequirementIsSet = false;
}

Document::~Document()
{
}

void Document::validate()
{
    // TODO: implement validation
}

web::json::value Document::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Field_titleIsSet)
    {
        val[utility::conversions::to_string_t(U("field_title"))] = ModelBase::toJson(m_Field_title);
    }
    if(m_Field_slugIsSet)
    {
        val[utility::conversions::to_string_t(U("field_slug"))] = ModelBase::toJson(m_Field_slug);
    }
    if(m_DrnIsSet)
    {
        val[utility::conversions::to_string_t(U("drn"))] = ModelBase::toJson(m_Drn);
    }
    if(m_RequirementIsSet)
    {
        val[utility::conversions::to_string_t(U("requirement"))] = ModelBase::toJson(m_Requirement);
    }

    return val;
}

bool Document::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("field_title"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("field_title")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_field_title;
            ok &= ModelBase::fromJson(fieldValue, refVal_field_title);
            setFieldTitle(refVal_field_title);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("field_slug"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("field_slug")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_field_slug;
            ok &= ModelBase::fromJson(fieldValue, refVal_field_slug);
            setFieldSlug(refVal_field_slug);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("drn"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("drn")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_drn;
            ok &= ModelBase::fromJson(fieldValue, refVal_drn);
            setDrn(refVal_drn);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("requirement"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("requirement")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<DocumentsRequired> refVal_requirement;
            ok &= ModelBase::fromJson(fieldValue, refVal_requirement);
            setRequirement(refVal_requirement);
        }
    }
    return ok;
}

void Document::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Field_titleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("field_title")), m_Field_title));
    }
    if(m_Field_slugIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("field_slug")), m_Field_slug));
    }
    if(m_DrnIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("drn")), m_Drn));
    }
    if(m_RequirementIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("requirement")), m_Requirement));
    }
}

bool Document::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("field_title"))))
    {
        utility::string_t refVal_field_title;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("field_title"))), refVal_field_title );
        setFieldTitle(refVal_field_title);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("field_slug"))))
    {
        utility::string_t refVal_field_slug;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("field_slug"))), refVal_field_slug );
        setFieldSlug(refVal_field_slug);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("drn"))))
    {
        std::vector<utility::string_t> refVal_drn;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("drn"))), refVal_drn );
        setDrn(refVal_drn);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("requirement"))))
    {
        std::shared_ptr<DocumentsRequired> refVal_requirement;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("requirement"))), refVal_requirement );
        setRequirement(refVal_requirement);
    }
    return ok;
}

utility::string_t Document::getFieldTitle() const
{
    return m_Field_title;
}

void Document::setFieldTitle(const utility::string_t& value)
{
    m_Field_title = value;
    m_Field_titleIsSet = true;
}

bool Document::fieldTitleIsSet() const
{
    return m_Field_titleIsSet;
}

void Document::unsetField_title()
{
    m_Field_titleIsSet = false;
}
utility::string_t Document::getFieldSlug() const
{
    return m_Field_slug;
}

void Document::setFieldSlug(const utility::string_t& value)
{
    m_Field_slug = value;
    m_Field_slugIsSet = true;
}

bool Document::fieldSlugIsSet() const
{
    return m_Field_slugIsSet;
}

void Document::unsetField_slug()
{
    m_Field_slugIsSet = false;
}
std::vector<utility::string_t>& Document::getDrn()
{
    return m_Drn;
}

void Document::setDrn(const std::vector<utility::string_t>& value)
{
    m_Drn = value;
    m_DrnIsSet = true;
}

bool Document::drnIsSet() const
{
    return m_DrnIsSet;
}

void Document::unsetDrn()
{
    m_DrnIsSet = false;
}
std::shared_ptr<DocumentsRequired> Document::getRequirement() const
{
    return m_Requirement;
}

void Document::setRequirement(const std::shared_ptr<DocumentsRequired>& value)
{
    m_Requirement = value;
    m_RequirementIsSet = true;
}

bool Document::requirementIsSet() const
{
    return m_RequirementIsSet;
}

void Document::unsetRequirement()
{
    m_RequirementIsSet = false;
}
}
}


