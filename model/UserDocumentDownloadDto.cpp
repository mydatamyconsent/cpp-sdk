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



#include "UserDocumentDownloadDto.h"

namespace mydatamyconsent {
namespace models {




UserDocumentDownloadDto::UserDocumentDownloadDto()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_StorageUrl = utility::conversions::to_string_t("");
    m_StorageUrlIsSet = false;
    m_OwnerId = utility::conversions::to_string_t("");
    m_OwnerIdIsSet = false;
}

UserDocumentDownloadDto::~UserDocumentDownloadDto()
{
}

void UserDocumentDownloadDto::validate()
{
    // TODO: implement validation
}

web::json::value UserDocumentDownloadDto::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_StorageUrlIsSet)
    {
        val[utility::conversions::to_string_t(U("storageUrl"))] = ModelBase::toJson(m_StorageUrl);
    }
    if(m_OwnerIdIsSet)
    {
        val[utility::conversions::to_string_t(U("ownerId"))] = ModelBase::toJson(m_OwnerId);
    }

    return val;
}

bool UserDocumentDownloadDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_id);
            setId(refVal_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("storageUrl"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("storageUrl")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_storageUrl;
            ok &= ModelBase::fromJson(fieldValue, refVal_storageUrl);
            setStorageUrl(refVal_storageUrl);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("ownerId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ownerId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_ownerId;
            ok &= ModelBase::fromJson(fieldValue, refVal_ownerId);
            setOwnerId(refVal_ownerId);
        }
    }
    return ok;
}

void UserDocumentDownloadDto::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
    if(m_StorageUrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("storageUrl")), m_StorageUrl));
    }
    if(m_OwnerIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ownerId")), m_OwnerId));
    }
}

bool UserDocumentDownloadDto::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("storageUrl"))))
    {
        utility::string_t refVal_storageUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("storageUrl"))), refVal_storageUrl );
        setStorageUrl(refVal_storageUrl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ownerId"))))
    {
        utility::string_t refVal_ownerId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ownerId"))), refVal_ownerId );
        setOwnerId(refVal_ownerId);
    }
    return ok;
}

utility::string_t UserDocumentDownloadDto::getId() const
{
    return m_Id;
}

void UserDocumentDownloadDto::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool UserDocumentDownloadDto::idIsSet() const
{
    return m_IdIsSet;
}

void UserDocumentDownloadDto::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t UserDocumentDownloadDto::getStorageUrl() const
{
    return m_StorageUrl;
}

void UserDocumentDownloadDto::setStorageUrl(const utility::string_t& value)
{
    m_StorageUrl = value;
    m_StorageUrlIsSet = true;
}

bool UserDocumentDownloadDto::storageUrlIsSet() const
{
    return m_StorageUrlIsSet;
}

void UserDocumentDownloadDto::unsetStorageUrl()
{
    m_StorageUrlIsSet = false;
}
utility::string_t UserDocumentDownloadDto::getOwnerId() const
{
    return m_OwnerId;
}

void UserDocumentDownloadDto::setOwnerId(const utility::string_t& value)
{
    m_OwnerId = value;
    m_OwnerIdIsSet = true;
}

bool UserDocumentDownloadDto::ownerIdIsSet() const
{
    return m_OwnerIdIsSet;
}

void UserDocumentDownloadDto::unsetOwnerId()
{
    m_OwnerIdIsSet = false;
}
}
}


