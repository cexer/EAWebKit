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
#include "JSCustomEvent.h"

#include "CustomEvent.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSCustomEvent);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSCustomEventTableValues[] =
{
    { "detail", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCustomEventDetail), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCustomEventConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSCustomEventTable = { 4, 3, JSCustomEventTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSCustomEventConstructorTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSCustomEventConstructorTable = { 1, 0, JSCustomEventConstructorTableValues, 0 };
const ClassInfo JSCustomEventConstructor::s_info = { "CustomEventConstructor", &DOMConstructorObject::s_info, &JSCustomEventConstructorTable, 0 };

JSCustomEventConstructor::JSCustomEventConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSCustomEventConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->globalData());
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSCustomEventPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSCustomEventConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCustomEventConstructor, JSDOMWrapper>(exec, &JSCustomEventConstructorTable, this, propertyName, slot);
}

bool JSCustomEventConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSCustomEventConstructor, JSDOMWrapper>(exec, &JSCustomEventConstructorTable, this, propertyName, descriptor);
}

ConstructType JSCustomEventConstructor::getConstructData(ConstructData& constructData)
{
    constructData.native.function = constructJSCustomEvent;
    return ConstructTypeHost;
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSCustomEventPrototypeTableValues[] =
{
    { "initCustomEvent", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsCustomEventPrototypeFunctionInitCustomEvent), (intptr_t)4 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSCustomEventPrototypeTable = { 2, 1, JSCustomEventPrototypeTableValues, 0 };
const ClassInfo JSCustomEventPrototype::s_info = { "CustomEventPrototype", &JSC::JSNonFinalObject::s_info, &JSCustomEventPrototypeTable, 0 };

JSObject* JSCustomEventPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSCustomEvent>(exec, globalObject);
}

bool JSCustomEventPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSCustomEventPrototypeTable, this, propertyName, slot);
}

bool JSCustomEventPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSCustomEventPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSCustomEvent::s_info = { "CustomEvent", &JSEvent::s_info, &JSCustomEventTable, 0 };

JSCustomEvent::JSCustomEvent(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<CustomEvent> impl)
    : JSEvent(structure, globalObject, impl)
{
}

void JSCustomEvent::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSCustomEvent::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSCustomEventPrototype::create(exec->globalData(), globalObject, JSCustomEventPrototype::createStructure(exec->globalData(), globalObject, JSEventPrototype::self(exec, globalObject)));
}

bool JSCustomEvent::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSCustomEvent, Base>(exec, &JSCustomEventTable, this, propertyName, slot);
}

bool JSCustomEvent::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSCustomEvent, Base>(exec, &JSCustomEventTable, this, propertyName, descriptor);
}

JSValue jsCustomEventDetail(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSCustomEvent* castedThis = static_cast<JSCustomEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    CustomEvent* imp = static_cast<CustomEvent*>(castedThis->impl());
    JSValue result = (imp->detail().hasNoValue() ? jsNull() : imp->detail().jsValue());
    return result;
}


JSValue jsCustomEventConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSCustomEvent* domObject = static_cast<JSCustomEvent*>(asObject(slotBase));
    return JSCustomEvent::getConstructor(exec, domObject->globalObject());
}

JSValue JSCustomEvent::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSCustomEventConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsCustomEventPrototypeFunctionInitCustomEvent(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSCustomEvent::s_info))
        return throwVMTypeError(exec);
    JSCustomEvent* castedThis = static_cast<JSCustomEvent*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSCustomEvent::s_info);
    CustomEvent* imp = static_cast<CustomEvent*>(castedThis->impl());
    const String& typeArg(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    bool canBubbleArg(exec->argument(1).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    bool cancelableArg(exec->argument(2).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    ScriptValue detailArg(exec->globalData(), exec->argument(3));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->initCustomEvent(typeArg, canBubbleArg, cancelableArg, detailArg);
    return JSValue::encode(jsUndefined());
}


}
