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

#ifndef JSScreen_h
#define JSScreen_h

#include "JSDOMBinding.h"
#include "Screen.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSScreen : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSScreen* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<Screen> impl)
    {
        JSScreen* ptr = new (JSC::allocateCell<JSScreen>(globalObject->globalData().heap)) JSScreen(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    Screen* impl() const { return m_impl.get(); }

private:
    RefPtr<Screen> m_impl;
protected:
    JSScreen(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<Screen>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSScreenOwner : public JSC::WeakHandleOwner {
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, Screen*)
{
    DEFINE_STATIC_LOCAL(JSScreenOwner, jsScreenOwner, ());
    return &jsScreenOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, Screen*)
{
    return world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, Screen*);
Screen* toScreen(JSC::JSValue);

class JSScreenPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSScreenPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSScreenPrototype* ptr = new (JSC::allocateCell<JSScreenPrototype>(globalData.heap)) JSScreenPrototype(globalData, globalObject, structure);
        ptr->finishCreation(globalData);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSScreenPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

// Attributes

JSC::JSValue jsScreenHeight(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsScreenWidth(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsScreenColorDepth(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsScreenPixelDepth(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsScreenAvailLeft(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsScreenAvailTop(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsScreenAvailHeight(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsScreenAvailWidth(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif
