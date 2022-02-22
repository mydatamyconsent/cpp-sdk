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
 * IssuedDocument.h
 *
 * Issued Document Identifier.
 */

#ifndef MYDATAMYCONSENT_MODELS_IssuedDocument_H_
#define MYDATAMYCONSENT_MODELS_IssuedDocument_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace mydatamyconsent {
namespace models {


/// <summary>
/// Issued Document Identifier.
/// </summary>
class  IssuedDocument
    : public ModelBase
{
public:
    IssuedDocument();
    virtual ~IssuedDocument();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// IssuedDocument members

    /// <summary>
    /// Document Identifier.
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// Document Identifier. eg: GJ05FG67866586.
    /// </summary>
    utility::string_t getIdentifier() const;
    bool identifierIsSet() const;
    void unsetIdentifier();

    void setIdentifier(const utility::string_t& value);

    /// <summary>
    /// Document type name. eg: Driving License.
    /// </summary>
    utility::string_t getDocumentType() const;
    bool documentTypeIsSet() const;
    void unsetDocumentType();

    void setDocumentType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getIssuedTo() const;
    bool issuedToIsSet() const;
    void unsetIssuedTo();

    void setIssuedTo(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getIssuedAtUtc() const;
    bool issuedAtUtcIsSet() const;
    void unsetIssuedAtUtc();

    void setIssuedAtUtc(const utility::datetime& value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Identifier;
    bool m_IdentifierIsSet;
    utility::string_t m_DocumentType;
    bool m_DocumentTypeIsSet;
    utility::string_t m_IssuedTo;
    bool m_IssuedToIsSet;
    utility::datetime m_IssuedAtUtc;
    bool m_IssuedAtUtcIsSet;
};


}
}

#endif /* MYDATAMYCONSENT_MODELS_IssuedDocument_H_ */
