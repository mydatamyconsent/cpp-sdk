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
 * FinancialAccounts.h
 *
 * 
 */

#ifndef MYDATAMYCONSENT_MODELS_FinancialAccounts_H_
#define MYDATAMYCONSENT_MODELS_FinancialAccounts_H_


#include "MyDataMyConsent/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "MyDataMyConsent/model/FinancialAccountDetailsRequired.h"
#include <vector>

namespace mydatamyconsent {
namespace models {


/// <summary>
/// 
/// </summary>
class  FinancialAccounts
    : public ModelBase
{
public:
    FinancialAccounts();
    virtual ~FinancialAccounts();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// FinancialAccounts members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDrn() const;
    bool drnIsSet() const;
    void unsetDrn();

    void setDrn(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<FinancialAccountDetailsRequired>>& getRequiredDetails();
    bool requiredDetailsIsSet() const;
    void unsetRequired_details();

    void setRequiredDetails(const std::vector<std::shared_ptr<FinancialAccountDetailsRequired>>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getStartDate() const;
    bool startDateIsSet() const;
    void unsetStart_date();

    void setStartDate(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getEndDate() const;
    bool endDateIsSet() const;
    void unsetEnd_date();

    void setEndDate(const utility::datetime& value);


protected:
    utility::string_t m_Drn;
    bool m_DrnIsSet;
    std::vector<std::shared_ptr<FinancialAccountDetailsRequired>> m_Required_details;
    bool m_Required_detailsIsSet;
    utility::datetime m_Start_date;
    bool m_Start_dateIsSet;
    utility::datetime m_End_date;
    bool m_End_dateIsSet;
};


}
}

#endif /* MYDATAMYCONSENT_MODELS_FinancialAccounts_H_ */
