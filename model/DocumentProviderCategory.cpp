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



#include "DocumentProviderCategory.h"

namespace mydatamyconsent {
namespace models {




DocumentProviderCategory::DocumentProviderCategory()
{
    m_CreatedBy = utility::conversions::to_string_t("");
    m_CreatedByIsSet = false;
    m_CreatedAtUtc = utility::datetime();
    m_CreatedAtUtcIsSet = false;
    m_UpdatedBy = utility::conversions::to_string_t("");
    m_UpdatedByIsSet = false;
    m_UpdatedAtUtc = utility::datetime();
    m_UpdatedAtUtcIsSet = false;
    m_CreatedByUserIsSet = false;
    m_UpdatedByUserIsSet = false;
    m_DeletedBy = utility::conversions::to_string_t("");
    m_DeletedByIsSet = false;
    m_DeletedAtUtc = utility::datetime();
    m_DeletedAtUtcIsSet = false;
    m_DeletedByUserIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_IconCodePoint = 0;
    m_IconCodePointIsSet = false;
    m_IconFontFamilyIsSet = false;
    m_MetaDataIsSet = false;
}

DocumentProviderCategory::~DocumentProviderCategory()
{
}

void DocumentProviderCategory::validate()
{
    // TODO: implement validation
}

web::json::value DocumentProviderCategory::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_CreatedByIsSet)
    {
        val[utility::conversions::to_string_t(U("createdBy"))] = ModelBase::toJson(m_CreatedBy);
    }
    if(m_CreatedAtUtcIsSet)
    {
        val[utility::conversions::to_string_t(U("createdAtUtc"))] = ModelBase::toJson(m_CreatedAtUtc);
    }
    if(m_UpdatedByIsSet)
    {
        val[utility::conversions::to_string_t(U("updatedBy"))] = ModelBase::toJson(m_UpdatedBy);
    }
    if(m_UpdatedAtUtcIsSet)
    {
        val[utility::conversions::to_string_t(U("updatedAtUtc"))] = ModelBase::toJson(m_UpdatedAtUtc);
    }
    if(m_CreatedByUserIsSet)
    {
        val[utility::conversions::to_string_t(U("createdByUser"))] = ModelBase::toJson(m_CreatedByUser);
    }
    if(m_UpdatedByUserIsSet)
    {
        val[utility::conversions::to_string_t(U("updatedByUser"))] = ModelBase::toJson(m_UpdatedByUser);
    }
    if(m_DeletedByIsSet)
    {
        val[utility::conversions::to_string_t(U("deletedBy"))] = ModelBase::toJson(m_DeletedBy);
    }
    if(m_DeletedAtUtcIsSet)
    {
        val[utility::conversions::to_string_t(U("deletedAtUtc"))] = ModelBase::toJson(m_DeletedAtUtc);
    }
    if(m_DeletedByUserIsSet)
    {
        val[utility::conversions::to_string_t(U("deletedByUser"))] = ModelBase::toJson(m_DeletedByUser);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_IconCodePointIsSet)
    {
        val[utility::conversions::to_string_t(U("iconCodePoint"))] = ModelBase::toJson(m_IconCodePoint);
    }
    if(m_IconFontFamilyIsSet)
    {
        val[utility::conversions::to_string_t(U("iconFontFamily"))] = ModelBase::toJson(m_IconFontFamily);
    }
    if(m_MetaDataIsSet)
    {
        val[utility::conversions::to_string_t(U("metaData"))] = ModelBase::toJson(m_MetaData);
    }

    return val;
}

bool DocumentProviderCategory::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("createdBy"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("createdBy")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_createdBy;
            ok &= ModelBase::fromJson(fieldValue, refVal_createdBy);
            setCreatedBy(refVal_createdBy);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("createdAtUtc"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("createdAtUtc")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_createdAtUtc;
            ok &= ModelBase::fromJson(fieldValue, refVal_createdAtUtc);
            setCreatedAtUtc(refVal_createdAtUtc);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("updatedBy"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("updatedBy")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_updatedBy;
            ok &= ModelBase::fromJson(fieldValue, refVal_updatedBy);
            setUpdatedBy(refVal_updatedBy);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("updatedAtUtc"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("updatedAtUtc")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_updatedAtUtc;
            ok &= ModelBase::fromJson(fieldValue, refVal_updatedAtUtc);
            setUpdatedAtUtc(refVal_updatedAtUtc);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("createdByUser"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("createdByUser")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ApplicationUser> refVal_createdByUser;
            ok &= ModelBase::fromJson(fieldValue, refVal_createdByUser);
            setCreatedByUser(refVal_createdByUser);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("updatedByUser"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("updatedByUser")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ApplicationUser> refVal_updatedByUser;
            ok &= ModelBase::fromJson(fieldValue, refVal_updatedByUser);
            setUpdatedByUser(refVal_updatedByUser);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("deletedBy"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("deletedBy")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_deletedBy;
            ok &= ModelBase::fromJson(fieldValue, refVal_deletedBy);
            setDeletedBy(refVal_deletedBy);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("deletedAtUtc"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("deletedAtUtc")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_deletedAtUtc;
            ok &= ModelBase::fromJson(fieldValue, refVal_deletedAtUtc);
            setDeletedAtUtc(refVal_deletedAtUtc);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("deletedByUser"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("deletedByUser")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ApplicationUser> refVal_deletedByUser;
            ok &= ModelBase::fromJson(fieldValue, refVal_deletedByUser);
            setDeletedByUser(refVal_deletedByUser);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_name;
            ok &= ModelBase::fromJson(fieldValue, refVal_name);
            setName(refVal_name);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("iconCodePoint"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("iconCodePoint")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_iconCodePoint;
            ok &= ModelBase::fromJson(fieldValue, refVal_iconCodePoint);
            setIconCodePoint(refVal_iconCodePoint);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("iconFontFamily"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("iconFontFamily")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CategoryIconFontFamily> refVal_iconFontFamily;
            ok &= ModelBase::fromJson(fieldValue, refVal_iconFontFamily);
            setIconFontFamily(refVal_iconFontFamily);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("metaData"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("metaData")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<AnyType> refVal_metaData;
            ok &= ModelBase::fromJson(fieldValue, refVal_metaData);
            setMetaData(refVal_metaData);
        }
    }
    return ok;
}

void DocumentProviderCategory::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_CreatedByIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("createdBy")), m_CreatedBy));
    }
    if(m_CreatedAtUtcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("createdAtUtc")), m_CreatedAtUtc));
    }
    if(m_UpdatedByIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("updatedBy")), m_UpdatedBy));
    }
    if(m_UpdatedAtUtcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("updatedAtUtc")), m_UpdatedAtUtc));
    }
    if(m_CreatedByUserIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("createdByUser")), m_CreatedByUser));
    }
    if(m_UpdatedByUserIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("updatedByUser")), m_UpdatedByUser));
    }
    if(m_DeletedByIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("deletedBy")), m_DeletedBy));
    }
    if(m_DeletedAtUtcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("deletedAtUtc")), m_DeletedAtUtc));
    }
    if(m_DeletedByUserIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("deletedByUser")), m_DeletedByUser));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_IconCodePointIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("iconCodePoint")), m_IconCodePoint));
    }
    if(m_IconFontFamilyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("iconFontFamily")), m_IconFontFamily));
    }
    if(m_MetaDataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("metaData")), m_MetaData));
    }
}

bool DocumentProviderCategory::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("createdBy"))))
    {
        utility::string_t refVal_createdBy;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("createdBy"))), refVal_createdBy );
        setCreatedBy(refVal_createdBy);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("createdAtUtc"))))
    {
        utility::datetime refVal_createdAtUtc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("createdAtUtc"))), refVal_createdAtUtc );
        setCreatedAtUtc(refVal_createdAtUtc);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("updatedBy"))))
    {
        utility::string_t refVal_updatedBy;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("updatedBy"))), refVal_updatedBy );
        setUpdatedBy(refVal_updatedBy);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("updatedAtUtc"))))
    {
        utility::datetime refVal_updatedAtUtc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("updatedAtUtc"))), refVal_updatedAtUtc );
        setUpdatedAtUtc(refVal_updatedAtUtc);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("createdByUser"))))
    {
        std::shared_ptr<ApplicationUser> refVal_createdByUser;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("createdByUser"))), refVal_createdByUser );
        setCreatedByUser(refVal_createdByUser);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("updatedByUser"))))
    {
        std::shared_ptr<ApplicationUser> refVal_updatedByUser;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("updatedByUser"))), refVal_updatedByUser );
        setUpdatedByUser(refVal_updatedByUser);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("deletedBy"))))
    {
        utility::string_t refVal_deletedBy;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("deletedBy"))), refVal_deletedBy );
        setDeletedBy(refVal_deletedBy);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("deletedAtUtc"))))
    {
        utility::datetime refVal_deletedAtUtc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("deletedAtUtc"))), refVal_deletedAtUtc );
        setDeletedAtUtc(refVal_deletedAtUtc);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("deletedByUser"))))
    {
        std::shared_ptr<ApplicationUser> refVal_deletedByUser;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("deletedByUser"))), refVal_deletedByUser );
        setDeletedByUser(refVal_deletedByUser);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("iconCodePoint"))))
    {
        int32_t refVal_iconCodePoint;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("iconCodePoint"))), refVal_iconCodePoint );
        setIconCodePoint(refVal_iconCodePoint);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("iconFontFamily"))))
    {
        std::shared_ptr<CategoryIconFontFamily> refVal_iconFontFamily;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("iconFontFamily"))), refVal_iconFontFamily );
        setIconFontFamily(refVal_iconFontFamily);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("metaData"))))
    {
        std::shared_ptr<AnyType> refVal_metaData;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("metaData"))), refVal_metaData );
        setMetaData(refVal_metaData);
    }
    return ok;
}

utility::string_t DocumentProviderCategory::getCreatedBy() const
{
    return m_CreatedBy;
}

void DocumentProviderCategory::setCreatedBy(const utility::string_t& value)
{
    m_CreatedBy = value;
    m_CreatedByIsSet = true;
}

bool DocumentProviderCategory::createdByIsSet() const
{
    return m_CreatedByIsSet;
}

void DocumentProviderCategory::unsetCreatedBy()
{
    m_CreatedByIsSet = false;
}
utility::datetime DocumentProviderCategory::getCreatedAtUtc() const
{
    return m_CreatedAtUtc;
}

void DocumentProviderCategory::setCreatedAtUtc(const utility::datetime& value)
{
    m_CreatedAtUtc = value;
    m_CreatedAtUtcIsSet = true;
}

bool DocumentProviderCategory::createdAtUtcIsSet() const
{
    return m_CreatedAtUtcIsSet;
}

void DocumentProviderCategory::unsetCreatedAtUtc()
{
    m_CreatedAtUtcIsSet = false;
}
utility::string_t DocumentProviderCategory::getUpdatedBy() const
{
    return m_UpdatedBy;
}

void DocumentProviderCategory::setUpdatedBy(const utility::string_t& value)
{
    m_UpdatedBy = value;
    m_UpdatedByIsSet = true;
}

bool DocumentProviderCategory::updatedByIsSet() const
{
    return m_UpdatedByIsSet;
}

void DocumentProviderCategory::unsetUpdatedBy()
{
    m_UpdatedByIsSet = false;
}
utility::datetime DocumentProviderCategory::getUpdatedAtUtc() const
{
    return m_UpdatedAtUtc;
}

void DocumentProviderCategory::setUpdatedAtUtc(const utility::datetime& value)
{
    m_UpdatedAtUtc = value;
    m_UpdatedAtUtcIsSet = true;
}

bool DocumentProviderCategory::updatedAtUtcIsSet() const
{
    return m_UpdatedAtUtcIsSet;
}

void DocumentProviderCategory::unsetUpdatedAtUtc()
{
    m_UpdatedAtUtcIsSet = false;
}
std::shared_ptr<ApplicationUser> DocumentProviderCategory::getCreatedByUser() const
{
    return m_CreatedByUser;
}

void DocumentProviderCategory::setCreatedByUser(const std::shared_ptr<ApplicationUser>& value)
{
    m_CreatedByUser = value;
    m_CreatedByUserIsSet = true;
}

bool DocumentProviderCategory::createdByUserIsSet() const
{
    return m_CreatedByUserIsSet;
}

void DocumentProviderCategory::unsetCreatedByUser()
{
    m_CreatedByUserIsSet = false;
}
std::shared_ptr<ApplicationUser> DocumentProviderCategory::getUpdatedByUser() const
{
    return m_UpdatedByUser;
}

void DocumentProviderCategory::setUpdatedByUser(const std::shared_ptr<ApplicationUser>& value)
{
    m_UpdatedByUser = value;
    m_UpdatedByUserIsSet = true;
}

bool DocumentProviderCategory::updatedByUserIsSet() const
{
    return m_UpdatedByUserIsSet;
}

void DocumentProviderCategory::unsetUpdatedByUser()
{
    m_UpdatedByUserIsSet = false;
}
utility::string_t DocumentProviderCategory::getDeletedBy() const
{
    return m_DeletedBy;
}

void DocumentProviderCategory::setDeletedBy(const utility::string_t& value)
{
    m_DeletedBy = value;
    m_DeletedByIsSet = true;
}

bool DocumentProviderCategory::deletedByIsSet() const
{
    return m_DeletedByIsSet;
}

void DocumentProviderCategory::unsetDeletedBy()
{
    m_DeletedByIsSet = false;
}
utility::datetime DocumentProviderCategory::getDeletedAtUtc() const
{
    return m_DeletedAtUtc;
}

void DocumentProviderCategory::setDeletedAtUtc(const utility::datetime& value)
{
    m_DeletedAtUtc = value;
    m_DeletedAtUtcIsSet = true;
}

bool DocumentProviderCategory::deletedAtUtcIsSet() const
{
    return m_DeletedAtUtcIsSet;
}

void DocumentProviderCategory::unsetDeletedAtUtc()
{
    m_DeletedAtUtcIsSet = false;
}
std::shared_ptr<ApplicationUser> DocumentProviderCategory::getDeletedByUser() const
{
    return m_DeletedByUser;
}

void DocumentProviderCategory::setDeletedByUser(const std::shared_ptr<ApplicationUser>& value)
{
    m_DeletedByUser = value;
    m_DeletedByUserIsSet = true;
}

bool DocumentProviderCategory::deletedByUserIsSet() const
{
    return m_DeletedByUserIsSet;
}

void DocumentProviderCategory::unsetDeletedByUser()
{
    m_DeletedByUserIsSet = false;
}
utility::string_t DocumentProviderCategory::getId() const
{
    return m_Id;
}

void DocumentProviderCategory::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool DocumentProviderCategory::idIsSet() const
{
    return m_IdIsSet;
}

void DocumentProviderCategory::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t DocumentProviderCategory::getName() const
{
    return m_Name;
}

void DocumentProviderCategory::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool DocumentProviderCategory::nameIsSet() const
{
    return m_NameIsSet;
}

void DocumentProviderCategory::unsetName()
{
    m_NameIsSet = false;
}
int32_t DocumentProviderCategory::getIconCodePoint() const
{
    return m_IconCodePoint;
}

void DocumentProviderCategory::setIconCodePoint(int32_t value)
{
    m_IconCodePoint = value;
    m_IconCodePointIsSet = true;
}

bool DocumentProviderCategory::iconCodePointIsSet() const
{
    return m_IconCodePointIsSet;
}

void DocumentProviderCategory::unsetIconCodePoint()
{
    m_IconCodePointIsSet = false;
}
std::shared_ptr<CategoryIconFontFamily> DocumentProviderCategory::getIconFontFamily() const
{
    return m_IconFontFamily;
}

void DocumentProviderCategory::setIconFontFamily(const std::shared_ptr<CategoryIconFontFamily>& value)
{
    m_IconFontFamily = value;
    m_IconFontFamilyIsSet = true;
}

bool DocumentProviderCategory::iconFontFamilyIsSet() const
{
    return m_IconFontFamilyIsSet;
}

void DocumentProviderCategory::unsetIconFontFamily()
{
    m_IconFontFamilyIsSet = false;
}
std::shared_ptr<AnyType> DocumentProviderCategory::getMetaData() const
{
    return m_MetaData;
}

void DocumentProviderCategory::setMetaData(const std::shared_ptr<AnyType>& value)
{
    m_MetaData = value;
    m_MetaDataIsSet = true;
}

bool DocumentProviderCategory::metaDataIsSet() const
{
    return m_MetaDataIsSet;
}

void DocumentProviderCategory::unsetMetaData()
{
    m_MetaDataIsSet = false;
}
}
}


