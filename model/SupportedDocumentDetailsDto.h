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
 * SupportedDocumentDetailsDto.h
 *
 * 
 */

#ifndef MYDATAMYCONSENT_MODELS_SupportedDocumentDetailsDto_H_
#define MYDATAMYCONSENT_MODELS_SupportedDocumentDetailsDto_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace mydatamyconsent {
namespace models {


/// <summary>
/// 
/// </summary>
class  SupportedDocumentDetailsDto
    : public ModelBase
{
public:
    SupportedDocumentDetailsDto();
    virtual ~SupportedDocumentDetailsDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SupportedDocumentDetailsDto members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRTypeId() const;
    bool rTypeIdIsSet() const;
    void unsetr_typeId();

    void setRTypeId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getLogoUrl() const;
    bool logoUrlIsSet() const;
    void unsetLogoUrl();

    void setLogoUrl(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getStorageUrl() const;
    bool storageUrlIsSet() const;
    void unsetStorageUrl();

    void setStorageUrl(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getIssuedBy() const;
    bool issuedByIsSet() const;
    void unsetIssuedBy();

    void setIssuedBy(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getUploadedAtUtc() const;
    bool uploadedAtUtcIsSet() const;
    void unsetUploadedAtUtc();

    void setUploadedAtUtc(const utility::datetime& value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_r_typeId;
    bool m_r_typeIdIsSet;
    utility::string_t m_LogoUrl;
    bool m_LogoUrlIsSet;
    utility::string_t m_StorageUrl;
    bool m_StorageUrlIsSet;
    utility::string_t m_IssuedBy;
    bool m_IssuedByIsSet;
    utility::datetime m_UploadedAtUtc;
    bool m_UploadedAtUtcIsSet;
};


}
}

#endif /* MYDATAMYCONSENT_MODELS_SupportedDocumentDetailsDto_H_ */
