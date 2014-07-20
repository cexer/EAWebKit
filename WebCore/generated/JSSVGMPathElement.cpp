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

#if ENABLE(SVG) && ENABLE(SVG_ANIMATION)

#include "JSSVGMPathElement.h"

#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedString.h"
#include "SVGMPathElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGMPathElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGMPathElementTableValues[] =
{
    { "href", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMPathElementHref), (intptr_t)0 THUNK_GENERATOR(0) },
    { "externalResourcesRequired", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMPathElementExternalResourcesRequired), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMPathElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGMPathElementTable = { 9, 7, JSSVGMPathElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGMPathElementConstructorTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGMPathElementConstructorTable = { 1, 0, JSSVGMPathElementConstructorTableValues, 0 };
class JSSVGMPathElementConstructor : public DOMConstructorObject {
private:
    JSSVGMPathElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGMPathElementConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGMPathElementConstructor* ptr = new (JSC::allocateCell<JSSVGMPathElementConstructor>(*exec->heap())) JSSVGMPathElementConstructor(structure, globalObject);
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

const ClassInfo JSSVGMPathElementConstructor::s_info = { "SVGMPathElementConstructor", &DOMConstructorObject::s_info, &JSSVGMPathElementConstructorTable, 0 };

JSSVGMPathElementConstructor::JSSVGMPathElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGMPathElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->globalData());
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGMPathElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGMPathElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGMPathElementConstructor, JSDOMWrapper>(exec, &JSSVGMPathElementConstructorTable, this, propertyName, slot);
}

bool JSSVGMPathElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGMPathElementConstructor, JSDOMWrapper>(exec, &JSSVGMPathElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGMPathElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGMPathElementPrototypeTable = { 1, 0, JSSVGMPathElementPrototypeTableValues, 0 };
const ClassInfo JSSVGMPathElementPrototype::s_info = { "SVGMPathElementPrototype", &JSC::JSNonFinalObject::s_info, &JSSVGMPathElementPrototypeTable, 0 };

JSObject* JSSVGMPathElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGMPathElement>(exec, globalObject);
}

const ClassInfo JSSVGMPathElement::s_info = { "SVGMPathElement", &JSSVGElement::s_info, &JSSVGMPathElementTable, 0 };

JSSVGMPathElement::JSSVGMPathElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGMPathElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

void JSSVGMPathElement::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGMPathElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGMPathElementPrototype::create(exec->globalData(), globalObject, JSSVGMPathElementPrototype::createStructure(exec->globalData(), globalObject, JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGMPathElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSSVGMPathElement, Base>(exec, &JSSVGMPathElementTable, this, propertyName, slot);
}

bool JSSVGMPathElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSSVGMPathElement, Base>(exec, &JSSVGMPathElementTable, this, propertyName, descriptor);
}

JSValue jsSVGMPathElementHref(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGMPathElement* castedThis = static_cast<JSSVGMPathElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGMPathElement* imp = static_cast<SVGMPathElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->hrefAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGMPathElementExternalResourcesRequired(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGMPathElement* castedThis = static_cast<JSSVGMPathElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGMPathElement* imp = static_cast<SVGMPathElement*>(castedThis->impl());
    RefPtr<SVGAnimatedBoolean> obj = imp->externalResourcesRequiredAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGMPathElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGMPathElement* domObject = static_cast<JSSVGMPathElement*>(asObject(slotBase));
    return JSSVGMPathElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGMPathElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGMPathElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG) && ENABLE(SVG_ANIMATION)
