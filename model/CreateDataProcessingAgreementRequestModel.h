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
 * CreateDataProcessingAgreementRequestModel.h
 *
 * 
 */

#ifndef MYDATAMYCONSENT_MODELS_CreateDataProcessingAgreementRequestModel_H_
#define MYDATAMYCONSENT_MODELS_CreateDataProcessingAgreementRequestModel_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace mydatamyconsent {
namespace models {


/// <summary>
/// 
/// </summary>
class  CreateDataProcessingAgreementRequestModel
    : public ModelBase
{
public:
    CreateDataProcessingAgreementRequestModel();
    virtual ~CreateDataProcessingAgreementRequestModel();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CreateDataProcessingAgreementRequestModel members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getVersion() const;
    bool versionIsSet() const;
    void unsetVersion();

    void setVersion(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBody() const;
    bool bodyIsSet() const;
    void unsetBody();

    void setBody(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAttachmentUrl() const;
    bool attachmentUrlIsSet() const;
    void unsetAttachmentUrl();

    void setAttachmentUrl(const utility::string_t& value);


protected:
    utility::string_t m_Version;
    bool m_VersionIsSet;
    utility::string_t m_Body;
    bool m_BodyIsSet;
    utility::string_t m_AttachmentUrl;
    bool m_AttachmentUrlIsSet;
};


}
}

#endif /* MYDATAMYCONSENT_MODELS_CreateDataProcessingAgreementRequestModel_H_ */
