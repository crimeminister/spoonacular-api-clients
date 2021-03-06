/**
 * spoonacular API
 * The spoonacular Nutrition, Recipe, and Food API allows you to access over 380,000 recipes, thousands of ingredients, 80,000 food products, and 100,000 menu items. Our food ontology and semantic recipe search engine makes it possible to search for recipes using natural language queries, such as \"gluten free brownies without sugar\" or \"low fat vegan cupcakes.\" You can automatically calculate the nutritional information for any recipe, analyze recipe costs, visualize ingredient lists, find recipes for what's in your fridge, find recipes based on special diets, nutritional requirements, or favorite ingredients, classify recipes into types and cuisines, convert ingredient amounts, or even compute an entire meal plan. With our powerful API, you can create many kinds of food and especially nutrition apps.  Special diets/dietary requirements currently available include: vegan, vegetarian, pescetarian, gluten free, grain free, dairy free, high protein, whole 30, low sodium, low carb, Paleo, ketogenic, FODMAP, and Primal.
 *
 * The version of the OpenAPI document: 1.0
 * Contact: david@spoonacular.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


#include "OAIInline_object.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIInline_object::OAIInline_object(QString json) {
    this->init();
    this->fromJson(json);
}

OAIInline_object::OAIInline_object() {
    this->init();
}

OAIInline_object::~OAIInline_object() {

}

void
OAIInline_object::init() {
    
    m_ingredient_list_isSet = false;
    m_ingredient_list_isValid = false;
    }

void
OAIInline_object::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIInline_object::fromJsonObject(QJsonObject json) {
    
    m_ingredient_list_isValid = ::OpenAPI::fromJsonValue(ingredient_list, json[QString("ingredientList")]);
    
    
}

QString
OAIInline_object::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIInline_object::asJsonObject() const {
    QJsonObject obj;
	if(m_ingredient_list_isSet){
        obj.insert(QString("ingredientList"), ::OpenAPI::toJsonValue(ingredient_list));
    }
    return obj;
}


QString
OAIInline_object::getIngredientList() const {
    return ingredient_list;
}
void
OAIInline_object::setIngredientList(const QString &ingredient_list) {
    this->ingredient_list = ingredient_list;
    this->m_ingredient_list_isSet = true;
}

bool
OAIInline_object::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m_ingredient_list_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

bool
OAIInline_object::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_ingredient_list_isValid && true;
}

}

