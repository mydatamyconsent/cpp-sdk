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



#include "MyDataMyConsent/model/Activity.h"

namespace mydatamyconsent {
namespace models {



Activity::Activity()
{
    m_ActorName = utility::conversions::to_string_t("");
    m_ActorNameIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_ActorProfileUrl = utility::conversions::to_string_t("");
    m_ActorProfileUrlIsSet = false;
    m_DateTimeUtc = utility::datetime();
    m_DateTimeUtcIsSet = false;
}

Activity::~Activity()
{
}

void Activity::validate()
{
    // TODO: implement validation
}

web::json::value Activity::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ActorNameIsSet)
    {
        val[utility::conversions::to_string_t(U("actorName"))] = ModelBase::toJson(m_ActorName);
    }
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t(U("description"))] = ModelBase::toJson(m_Description);
    }
    if(m_ActorProfileUrlIsSet)
    {
        val[utility::conversions::to_string_t(U("actorProfileUrl"))] = ModelBase::toJson(m_ActorProfileUrl);
    }
    if(m_DateTimeUtcIsSet)
    {
        val[utility::conversions::to_string_t(U("dateTimeUtc"))] = ModelBase::toJson(m_DateTimeUtc);
    }

    return val;
}

bool Activity::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("actorName"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("actorName")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setActorName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setActorName);
            setActorName(refVal_setActorName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("description"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("description")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDescription;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDescription);
            setDescription(refVal_setDescription);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("actorProfileUrl"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("actorProfileUrl")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setActorProfileUrl;
            ok &= ModelBase::fromJson(fieldValue, refVal_setActorProfileUrl);
            setActorProfileUrl(refVal_setActorProfileUrl);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("dateTimeUtc"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("dateTimeUtc")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setDateTimeUtc;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDateTimeUtc);
            setDateTimeUtc(refVal_setDateTimeUtc);
        }
    }
    return ok;
}

void Activity::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ActorNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("actorName")), m_ActorName));
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("description")), m_Description));
    }
    if(m_ActorProfileUrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("actorProfileUrl")), m_ActorProfileUrl));
    }
    if(m_DateTimeUtcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("dateTimeUtc")), m_DateTimeUtc));
    }
}

bool Activity::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("actorName"))))
    {
        utility::string_t refVal_setActorName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("actorName"))), refVal_setActorName );
        setActorName(refVal_setActorName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("description"))))
    {
        utility::string_t refVal_setDescription;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("description"))), refVal_setDescription );
        setDescription(refVal_setDescription);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("actorProfileUrl"))))
    {
        utility::string_t refVal_setActorProfileUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("actorProfileUrl"))), refVal_setActorProfileUrl );
        setActorProfileUrl(refVal_setActorProfileUrl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("dateTimeUtc"))))
    {
        utility::datetime refVal_setDateTimeUtc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("dateTimeUtc"))), refVal_setDateTimeUtc );
        setDateTimeUtc(refVal_setDateTimeUtc);
    }
    return ok;
}

utility::string_t Activity::getActorName() const
{
    return m_ActorName;
}

void Activity::setActorName(const utility::string_t& value)
{
    m_ActorName = value;
    m_ActorNameIsSet = true;
}

bool Activity::actorNameIsSet() const
{
    return m_ActorNameIsSet;
}

void Activity::unsetActorName()
{
    m_ActorNameIsSet = false;
}
utility::string_t Activity::getDescription() const
{
    return m_Description;
}

void Activity::setDescription(const utility::string_t& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}

bool Activity::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void Activity::unsetDescription()
{
    m_DescriptionIsSet = false;
}
utility::string_t Activity::getActorProfileUrl() const
{
    return m_ActorProfileUrl;
}

void Activity::setActorProfileUrl(const utility::string_t& value)
{
    m_ActorProfileUrl = value;
    m_ActorProfileUrlIsSet = true;
}

bool Activity::actorProfileUrlIsSet() const
{
    return m_ActorProfileUrlIsSet;
}

void Activity::unsetActorProfileUrl()
{
    m_ActorProfileUrlIsSet = false;
}
utility::datetime Activity::getDateTimeUtc() const
{
    return m_DateTimeUtc;
}

void Activity::setDateTimeUtc(const utility::datetime& value)
{
    m_DateTimeUtc = value;
    m_DateTimeUtcIsSet = true;
}

bool Activity::dateTimeUtcIsSet() const
{
    return m_DateTimeUtcIsSet;
}

void Activity::unsetDateTimeUtc()
{
    m_DateTimeUtcIsSet = false;
}
}
}


