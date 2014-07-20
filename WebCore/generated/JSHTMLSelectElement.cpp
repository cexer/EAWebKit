/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "JSHTMLSelectElement.h"

#include "ExceptionCode.h"
#include "HTMLFormElement.h"
#include "HTMLNames.h"
#include "HTMLOptionsCollection.h"
#include "HTMLSelectElement.h"
#include "JSDOMBinding.h"
#include "JSHTMLElement.h"
#include "JSHTMLFormElement.h"
#include "JSHTMLOptionsCollection.h"
#include "JSNode.h"
#include "JSNodeList.h"
#include "JSValidityState.h"
#include "KURL.h"
#include "NameNodeList.h"
#include "Node.h"
#include "NodeList.h"
#include "ValidityState.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLSelectElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLSelectElementTableValues[] =
{
    { "type", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLSelectElementType), (intptr_t)0 THUNK_GENERATOR(0) },
    { "selectedIndex", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLSelectElementSelectedIndex), (intptr_t)setJSHTMLSelectElementSelectedIndex THUNK_GENERATOR(0) },
    { "value", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLSelectElementValue), (intptr_t)setJSHTMLSelectElementValue THUNK_GENERATOR(0) },
    { "length", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLSelectElementLength), (intptr_t)setJSHTMLSelectElementLength THUNK_GENERATOR(0) },
    { "form", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLSelectElementForm), (intptr_t)0 THUNK_GENERATOR(0) },
    { "validity", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLSelectElementValidity), (intptr_t)0 THUNK_GENERATOR(0) },
    { "willValidate", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLSelectElementWillValidate), (intptr_t)0 THUNK_GENERATOR(0) },
    { "validationMessage", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLSelectElementValidationMessage), (intptr_t)0 THUNK_GENERATOR(0) },
    { "options", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLSelectElementOptions), (intptr_t)0 THUNK_GENERATOR(0) },
    { "disabled", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLSelectElementDisabled), (intptr_t)setJSHTMLSelectElementDisabled THUNK_GENERATOR(0) },
    { "autofocus", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLSelectElementAutofocus), (intptr_t)setJSHTMLSelectElementAutofocus THUNK_GENERATOR(0) },
    { "multiple", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLSelectElementMultiple), (intptr_t)setJSHTMLSelectElementMultiple THUNK_GENERATOR(0) },
    { "name", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLSelectElementName), (intptr_t)setJSHTMLSelectElementName THUNK_GENERATOR(0) },
    { "required", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLSelectElementRequired), (intptr_t)setJSHTMLSelectElementRequired THUNK_GENERATOR(0) },
    { "size", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLSelectElementSize), (intptr_t)setJSHTMLSelectElementSize THUNK_GENERATOR(0) },
    { "labels", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLSelectElementLabels), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLSelectElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLSelectElementTable = { 67, 63, JSHTMLSelectElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLSelectElementConstructorTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLSelectElementConstructorTable = { 1, 0, JSHTMLSelectElementConstructorTableValues, 0 };
class JSHTMLSelectElementConstructor : public DOMConstructorObject {
private:
    JSHTMLSelectElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSHTMLSelectElementConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSHTMLSelectElementConstructor* ptr = new (JSC::allocateCell<JSHTMLSelectElementConstructor>(*exec->heap())) JSHTMLSelectElementConstructor(structure, globalObject);
        ptr->finishCreation(exec, globalObject);
        return ptr;
    }

    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSHTMLSelectElementConstructor::s_info = { "HTMLSelectElementConstructor", &DOMConstructorObject::s_info, &JSHTMLSelectElementConstructorTable, 0 };

JSHTMLSelectElementConstructor::JSHTMLSelectElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLSelectElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->globalData());
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSHTMLSelectElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSHTMLSelectElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLSelectElementConstructor, JSDOMWrapper>(exec, &JSHTMLSelectElementConstructorTable, this, propertyName, slot);
}

bool JSHTMLSelectElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLSelectElementConstructor, JSDOMWrapper>(exec, &JSHTMLSelectElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLSelectElementPrototypeTableValues[] =
{
    { "checkValidity", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsHTMLSelectElementPrototypeFunctionCheckValidity), (intptr_t)0 THUNK_GENERATOR(0) },
    { "setCustomValidity", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsHTMLSelectElementPrototypeFunctionSetCustomValidity), (intptr_t)1 THUNK_GENERATOR(0) },
    { "add", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsHTMLSelectElementPrototypeFunctionAdd), (intptr_t)2 THUNK_GENERATOR(0) },
    { "remove", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsHTMLSelectElementPrototypeFunctionRemove), (intptr_t)0 THUNK_GENERATOR(0) },
    { "item", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsHTMLSelectElementPrototypeFunctionItem), (intptr_t)1 THUNK_GENERATOR(0) },
    { "namedItem", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsHTMLSelectElementPrototypeFunctionNamedItem), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLSelectElementPrototypeTable = { 16, 15, JSHTMLSelectElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLSelectElementPrototype::s_info = { "HTMLSelectElementPrototype", &JSC::JSNonFinalObject::s_info, &JSHTMLSelectElementPrototypeTable, 0 };

JSObject* JSHTMLSelectElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLSelectElement>(exec, globalObject);
}

bool JSHTMLSelectElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSHTMLSelectElementPrototypeTable, this, propertyName, slot);
}

bool JSHTMLSelectElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSHTMLSelectElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSHTMLSelectElement::s_info = { "HTMLSelectElement", &JSHTMLElement::s_info, &JSHTMLSelectElementTable, 0 };

JSHTMLSelectElement::JSHTMLSelectElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLSelectElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

void JSHTMLSelectElement::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSHTMLSelectElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSHTMLSelectElementPrototype::create(exec->globalData(), globalObject, JSHTMLSelectElementPrototype::createStructure(exec->globalData(), globalObject, JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLSelectElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    const HashEntry* entry = JSHTMLSelectElementTable.entry(exec, propertyName);
    if (entry) {
        slot.setCustom(this, entry->propertyGetter());
        return true;
    }
    bool ok;
    unsigned index = propertyName.toUInt32(ok);
    if (ok && index < static_cast<HTMLSelectElement*>(impl())->length()) {
        slot.setCustomIndex(this, index, indexGetter);
        return true;
    }
    return getStaticValueSlot<JSHTMLSelectElement, Base>(exec, &JSHTMLSelectElementTable, this, propertyName, slot);
}

bool JSHTMLSelectElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    const HashEntry* entry = JSHTMLSelectElementTable.entry(exec, propertyName);
    if (entry) {
        PropertySlot slot;
        slot.setCustom(this, entry->propertyGetter());
        descriptor.setDescriptor(slot.getValue(exec, propertyName), entry->attributes());
        return true;
    }
    bool ok;
    unsigned index = propertyName.toUInt32(ok);
    if (ok && index < static_cast<HTMLSelectElement*>(impl())->length()) {
        PropertySlot slot;
        slot.setCustomIndex(this, index, indexGetter);
        descriptor.setDescriptor(slot.getValue(exec, propertyName), DontDelete);
        return true;
    }
    return getStaticValueDescriptor<JSHTMLSelectElement, Base>(exec, &JSHTMLSelectElementTable, this, propertyName, descriptor);
}

bool JSHTMLSelectElement::getOwnPropertySlot(ExecState* exec, unsigned propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    if (propertyName < static_cast<HTMLSelectElement*>(impl())->length()) {
        slot.setCustomIndex(this, propertyName, indexGetter);
        return true;
    }
    return getOwnPropertySlot(exec, Identifier::from(exec, propertyName), slot);
}

JSValue jsHTMLSelectElementType(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLSelectElement* castedThis = static_cast<JSHTMLSelectElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->type());
    return result;
}


JSValue jsHTMLSelectElementSelectedIndex(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLSelectElement* castedThis = static_cast<JSHTMLSelectElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(castedThis->impl());
    JSValue result = jsNumber(imp->selectedIndex());
    return result;
}


JSValue jsHTMLSelectElementValue(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLSelectElement* castedThis = static_cast<JSHTMLSelectElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->value());
    return result;
}


JSValue jsHTMLSelectElementLength(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLSelectElement* castedThis = static_cast<JSHTMLSelectElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(castedThis->impl());
    JSValue result = jsNumber(imp->length());
    return result;
}


JSValue jsHTMLSelectElementForm(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLSelectElement* castedThis = static_cast<JSHTMLSelectElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->form()));
    return result;
}


JSValue jsHTMLSelectElementValidity(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLSelectElement* castedThis = static_cast<JSHTMLSelectElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->validity()));
    return result;
}


JSValue jsHTMLSelectElementWillValidate(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLSelectElement* castedThis = static_cast<JSHTMLSelectElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(castedThis->impl());
    JSValue result = jsBoolean(imp->willValidate());
    return result;
}


JSValue jsHTMLSelectElementValidationMessage(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLSelectElement* castedThis = static_cast<JSHTMLSelectElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->validationMessage());
    return result;
}


JSValue jsHTMLSelectElementOptions(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLSelectElement* castedThis = static_cast<JSHTMLSelectElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->options()));
    return result;
}


JSValue jsHTMLSelectElementDisabled(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLSelectElement* castedThis = static_cast<JSHTMLSelectElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(castedThis->impl());
    JSValue result = jsBoolean(imp->hasAttribute(WebCore::HTMLNames::disabledAttr));
    return result;
}


JSValue jsHTMLSelectElementAutofocus(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLSelectElement* castedThis = static_cast<JSHTMLSelectElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(castedThis->impl());
    JSValue result = jsBoolean(imp->hasAttribute(WebCore::HTMLNames::autofocusAttr));
    return result;
}


JSValue jsHTMLSelectElementMultiple(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLSelectElement* castedThis = static_cast<JSHTMLSelectElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(castedThis->impl());
    JSValue result = jsBoolean(imp->multiple());
    return result;
}


JSValue jsHTMLSelectElementName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLSelectElement* castedThis = static_cast<JSHTMLSelectElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->name());
    return result;
}


JSValue jsHTMLSelectElementRequired(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLSelectElement* castedThis = static_cast<JSHTMLSelectElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(castedThis->impl());
    JSValue result = jsBoolean(imp->hasAttribute(WebCore::HTMLNames::requiredAttr));
    return result;
}


JSValue jsHTMLSelectElementSize(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLSelectElement* castedThis = static_cast<JSHTMLSelectElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(castedThis->impl());
    JSValue result = jsNumber(imp->size());
    return result;
}


JSValue jsHTMLSelectElementLabels(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLSelectElement* castedThis = static_cast<JSHTMLSelectElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->labels()));
    return result;
}


JSValue jsHTMLSelectElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLSelectElement* domObject = static_cast<JSHTMLSelectElement*>(asObject(slotBase));
    return JSHTMLSelectElement::getConstructor(exec, domObject->globalObject());
}

void JSHTMLSelectElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    bool ok;
    unsigned index = propertyName.toUInt32(ok);
    if (ok) {
        indexSetter(exec, index, value);
        return;
    }
    lookupPut<JSHTMLSelectElement, Base>(exec, propertyName, value, &JSHTMLSelectElementTable, this, slot);
}

void JSHTMLSelectElement::put(ExecState* exec, unsigned propertyName, JSValue value)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    indexSetter(exec, propertyName, value);
    return;
}

void setJSHTMLSelectElementSelectedIndex(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLSelectElement* castedThis = static_cast<JSHTMLSelectElement*>(thisObject);
    HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(castedThis->impl());
    imp->setSelectedIndex(value.toInt32(exec));
}


void setJSHTMLSelectElementValue(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLSelectElement* castedThis = static_cast<JSHTMLSelectElement*>(thisObject);
    HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(castedThis->impl());
    imp->setValue(valueToStringWithNullCheck(exec, value));
}


void setJSHTMLSelectElementLength(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLSelectElement* castedThis = static_cast<JSHTMLSelectElement*>(thisObject);
    HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(castedThis->impl());
    ExceptionCode ec = 0;
    imp->setLength(value.toUInt32(exec), ec);
    setDOMException(exec, ec);
}


void setJSHTMLSelectElementDisabled(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLSelectElement* castedThis = static_cast<JSHTMLSelectElement*>(thisObject);
    HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(castedThis->impl());
    imp->setBooleanAttribute(WebCore::HTMLNames::disabledAttr, value.toBoolean(exec));
}


void setJSHTMLSelectElementAutofocus(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLSelectElement* castedThis = static_cast<JSHTMLSelectElement*>(thisObject);
    HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(castedThis->impl());
    imp->setBooleanAttribute(WebCore::HTMLNames::autofocusAttr, value.toBoolean(exec));
}


void setJSHTMLSelectElementMultiple(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLSelectElement* castedThis = static_cast<JSHTMLSelectElement*>(thisObject);
    HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(castedThis->impl());
    imp->setMultiple(value.toBoolean(exec));
}


void setJSHTMLSelectElementName(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLSelectElement* castedThis = static_cast<JSHTMLSelectElement*>(thisObject);
    HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(castedThis->impl());
    imp->setName(valueToStringWithNullCheck(exec, value));
}


void setJSHTMLSelectElementRequired(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLSelectElement* castedThis = static_cast<JSHTMLSelectElement*>(thisObject);
    HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(castedThis->impl());
    imp->setBooleanAttribute(WebCore::HTMLNames::requiredAttr, value.toBoolean(exec));
}


void setJSHTMLSelectElementSize(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLSelectElement* castedThis = static_cast<JSHTMLSelectElement*>(thisObject);
    HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(castedThis->impl());
    imp->setSize(value.toInt32(exec));
}


void JSHTMLSelectElement::getOwnPropertyNames(ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    for (unsigned i = 0; i < static_cast<HTMLSelectElement*>(impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getOwnPropertyNames(exec, propertyNames, mode);
}

JSValue JSHTMLSelectElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLSelectElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsHTMLSelectElementPrototypeFunctionCheckValidity(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSHTMLSelectElement::s_info))
        return throwVMTypeError(exec);
    JSHTMLSelectElement* castedThis = static_cast<JSHTMLSelectElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSHTMLSelectElement::s_info);
    HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(castedThis->impl());


    JSC::JSValue result = jsBoolean(imp->checkValidity());
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsHTMLSelectElementPrototypeFunctionSetCustomValidity(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSHTMLSelectElement::s_info))
        return throwVMTypeError(exec);
    JSHTMLSelectElement* castedThis = static_cast<JSHTMLSelectElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSHTMLSelectElement::s_info);
    HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createTypeError(exec, "Not enough arguments"));
    const String& error(valueToStringWithUndefinedOrNullCheck(exec, exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->setCustomValidity(error);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsHTMLSelectElementPrototypeFunctionAdd(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSHTMLSelectElement::s_info))
        return throwVMTypeError(exec);
    JSHTMLSelectElement* castedThis = static_cast<JSHTMLSelectElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSHTMLSelectElement::s_info);
    HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(castedThis->impl());
    ExceptionCode ec = 0;
    HTMLElement* element(toHTMLElement(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    HTMLElement* before(toHTMLElement(exec->argument(1)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->add(element, before, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsHTMLSelectElementPrototypeFunctionRemove(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSHTMLSelectElement::s_info))
        return throwVMTypeError(exec);
    JSHTMLSelectElement* castedThis = static_cast<JSHTMLSelectElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSHTMLSelectElement::s_info);
    return JSValue::encode(castedThis->remove(exec));
}

EncodedJSValue JSC_HOST_CALL jsHTMLSelectElementPrototypeFunctionItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSHTMLSelectElement::s_info))
        return throwVMTypeError(exec);
    JSHTMLSelectElement* castedThis = static_cast<JSHTMLSelectElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSHTMLSelectElement::s_info);
    HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(castedThis->impl());
    int index(exec->argument(0).toUInt32(exec));
    if (index < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return JSValue::encode(jsUndefined());
    }
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->item(index)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsHTMLSelectElementPrototypeFunctionNamedItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSHTMLSelectElement::s_info))
        return throwVMTypeError(exec);
    JSHTMLSelectElement* castedThis = static_cast<JSHTMLSelectElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSHTMLSelectElement::s_info);
    HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(castedThis->impl());
    const String& name(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->namedItem(name)));
    return JSValue::encode(result);
}


JSValue JSHTMLSelectElement::indexGetter(ExecState* exec, JSValue slotBase, unsigned index)
{
    JSHTMLSelectElement* thisObj = static_cast<JSHTMLSelectElement*>(asObject(slotBase));
    ASSERT_GC_OBJECT_INHERITS(thisObj, &s_info);
    return toJS(exec, thisObj->globalObject(), static_cast<HTMLSelectElement*>(thisObj->impl())->item(index));
}


}
