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
 * DocumentCategoryType.h
 *
 * 
 */

#ifndef MYDATAMYCONSENT_MODELS_DocumentCategoryType_H_
#define MYDATAMYCONSENT_MODELS_DocumentCategoryType_H_


#include "MyDataMyConsent/ModelBase.h"


namespace mydatamyconsent {
namespace models {

class  DocumentCategoryType
    : public ModelBase
{
public:
    DocumentCategoryType();
    virtual ~DocumentCategoryType();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eDocumentCategoryType
    {
        DocumentCategoryType_PERSONAL,
        DocumentCategoryType_EDUCATION,
        DocumentCategoryType_HEALTH,
        DocumentCategoryType_FINANCE,
        DocumentCategoryType_PROFESSIONAL,
        DocumentCategoryType_LICENCESANDCERTIFICATES,
        DocumentCategoryType_OTHERS,
    };

    eDocumentCategoryType getValue() const;
    void setValue(eDocumentCategoryType const value);

    protected:
        eDocumentCategoryType m_value;
};

}
}

#endif /* MYDATAMYCONSENT_MODELS_DocumentCategoryType_H_ */
