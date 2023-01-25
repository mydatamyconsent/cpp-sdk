//
// Created by Balamurali Pandranki on 26/12/21.
//

#ifndef MYDATAMYCONSENT_MODELS_ANYTYPE_H_
#define MYDATAMYCONSENT_MODELS_ANYTYPE_H_

#include "MyDataMyConsent/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace mydatamyconsent {
namespace models {
class AnyType : public ModelBase {
public:
 AnyType();
 virtual ~AnyType();
 void validate() override;

 web::json::value toJson() const override;
 bool fromJson(const web::json::value& json) override;
};
}
}

#endif //MYDATAMYCONSENT_MODELS_ANYTYPE_H_