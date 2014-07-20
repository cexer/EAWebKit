/*
 * Copyright (C) 2009, 2010 Apple Inc. All Rights Reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
 */

// This all-in-one cpp file cuts down on template bloat to allow us to build our Windows release build.

#include "CallbackFunction.cpp"
#include "DOMObjectHashTableMap.cpp"
#include "DOMWrapperWorld.cpp"
#include "GCController.cpp"
#include "JSArrayBufferCustom.cpp"
#include "JSAttrCustom.cpp"
#include "JSAudioConstructor.cpp"
#include "JSCDATASectionCustom.cpp"
#include "JSCSSFontFaceRuleCustom.cpp"
#include "JSCSSImportRuleCustom.cpp"
#include "JSCSSMediaRuleCustom.cpp"
#include "JSCSSPageRuleCustom.cpp"
#include "JSCSSRuleCustom.cpp"
#include "JSCSSRuleListCustom.cpp"
#include "JSCSSStyleDeclarationCustom.cpp"
#include "JSCSSStyleRuleCustom.cpp"
#include "JSCSSValueCustom.cpp"
#include "JSCallbackData.cpp"
#include "JSCanvasRenderingContext2DCustom.cpp"
#include "JSCanvasRenderingContextCustom.cpp"
#include "JSClipboardCustom.cpp"
#include "JSConsoleCustom.cpp"
#include "JSCoordinatesCustom.cpp"
#include "JSCustomSQLStatementErrorCallback.cpp"
#include "JSCustomVoidCallback.cpp"
#include "JSCustomXPathNSResolver.cpp"
#include "JSDictionary.cpp"
#include "JSDOMApplicationCacheCustom.cpp"
#include "JSDOMBinding.cpp"
#include "JSDOMFormDataCustom.cpp"
#include "JSDOMGlobalObject.cpp"
#include "JSDOMImplementationCustom.cpp"
#include "JSDOMMimeTypeArrayCustom.cpp"
#include "JSDOMPluginArrayCustom.cpp"
#include "JSDOMPluginCustom.cpp"
#include "JSDOMStringMapCustom.cpp"
#include "JSDOMTokenListCustom.cpp"
#include "JSDOMWindowBase.cpp"
#include "JSDOMWindowCustom.cpp"
#include "JSDOMWindowShell.cpp"
#include "JSDOMWrapper.cpp"
#include "JSDataViewCustom.cpp"
#include "JSDedicatedWorkerContextCustom.cpp"
#include "JSDesktopNotificationsCustom.cpp"
#include "JSDeviceOrientationEventCustom.cpp"
#include "JSDocumentCustom.cpp"
#include "JSElementCustom.cpp"
#include "JSErrorHandler.cpp"
#include "JSEventConstructors.cpp"
#include "JSEventCustom.cpp"
#include "JSEventListener.cpp"
#include "JSEventSourceCustom.cpp"
#include "JSEventTarget.cpp"
#include "JSExceptionBase.cpp"
#include "JSFloat32ArrayCustom.cpp"
#include "JSFloat64ArrayCustom.cpp"
#include "JSGeolocationCustom.cpp"
#include "JSHTMLAllCollectionCustom.cpp"
#include "JSHTMLAppletElementCustom.cpp"
#include "JSHTMLCanvasElementCustom.cpp"
#include "JSHTMLCollectionCustom.cpp"
#include "JSHTMLDocumentCustom.cpp"
#include "JSHTMLElementCustom.cpp"
#include "JSHTMLEmbedElementCustom.cpp"
#include "JSHTMLFormElementCustom.cpp"
#include "JSHTMLFrameElementCustom.cpp"
#include "JSHTMLFrameSetElementCustom.cpp"
#include "JSHTMLInputElementCustom.cpp"
#include "JSHTMLLinkElementCustom.cpp"
#include "JSHTMLObjectElementCustom.cpp"
#include "JSHTMLOptionsCollectionCustom.cpp"
#include "JSHTMLOutputElementCustom.cpp"
#include "JSHTMLSelectElementCustom.cpp"
#include "JSHTMLStyleElementCustom.cpp"
#include "JSHistoryCustom.cpp"
#include "JSImageConstructor.cpp"
#include "JSImageDataCustom.cpp"
#include "JSInjectedScriptHostCustom.cpp"
#include "JSInjectedScriptManager.cpp"
#include "JSInspectorFrontendHostCustom.cpp"
#include "JSInt16ArrayCustom.cpp"
#include "JSInt32ArrayCustom.cpp"
#include "JSInt8ArrayCustom.cpp"
#include "JSJavaScriptCallFrameCustom.cpp"
#include "JSLazyEventListener.cpp"
#include "JSLocationCustom.cpp"
#include "JSMainThreadExecState.cpp"
#include "JSMediaListCustom.cpp"
#include "JSMemoryInfoCustom.cpp"
#include "JSMessageChannelCustom.cpp"
#include "JSMessageEventCustom.cpp"
#include "JSMessagePortCustom.cpp"
#include "JSNamedNodeMapCustom.cpp"
#include "JSNavigatorCustom.cpp"
#include "JSNodeCustom.cpp"
#include "JSNodeFilterCondition.cpp"
#include "JSNodeFilterCustom.cpp"
#include "JSNodeIteratorCustom.cpp"
#include "JSNodeListCustom.cpp"
#include "JSOptionConstructor.cpp"
#include "JSPeerConnectionCustom.cpp"
#include "JSPluginElementFunctions.cpp"
#include "JSProcessingInstructionCustom.cpp"
#include "JSSQLResultSetRowListCustom.cpp"
#include "JSSQLTransactionCustom.cpp"
#include "JSSQLTransactionSyncCustom.cpp"
#include "JSSVGElementInstanceCustom.cpp"
#include "JSSVGLengthCustom.cpp"
#include "JSSVGPathSegCustom.cpp"
#include "JSScriptProfileNodeCustom.cpp"
#include "JSSharedWorkerCustom.cpp"
#include "JSStorageCustom.cpp"
#include "JSStyleSheetCustom.cpp"
#include "JSStyleSheetListCustom.cpp"
#include "JSTextCustom.cpp"
#include "JSTouchCustom.cpp"
#include "JSTouchListCustom.cpp"
#include "JSTreeWalkerCustom.cpp"
#include "JSUint16ArrayCustom.cpp"
#include "JSUint32ArrayCustom.cpp"
#include "JSUint8ArrayCustom.cpp"
#include "JSWebKitAnimationCustom.cpp"
#include "JSWebKitAnimationListCustom.cpp"
#include "JSWebKitCSSKeyframeRuleCustom.cpp"
#include "JSWebKitCSSKeyframesRuleCustom.cpp"
#include "JSWebKitCSSMatrixCustom.cpp"
#include "JSWebKitPointCustom.cpp"
#include "JSWebSocketCustom.cpp"
#include "JSWorkerContextBase.cpp"
#include "JSWorkerContextCustom.cpp"
#include "JSWorkerCustom.cpp"
#include "JSXMLHttpRequestCustom.cpp"
#include "JSXMLHttpRequestUploadCustom.cpp"
#include "JSXPathResultCustom.cpp"
#include "JSXSLTProcessorCustom.cpp"
#include "JavaScriptCallFrame.cpp"
#include "MemoryInfo.cpp"
#include "PageScriptDebugServer.cpp"
#include "ScheduledAction.cpp"
#include "ScriptCachedFrameData.cpp"
#include "ScriptCallStackFactory.cpp"
#include "ScriptController.cpp"
#include "ScriptControllerWin.cpp"
#include "ScriptDebugServer.cpp"
#include "ScriptEventListener.cpp"
#include "ScriptFunctionCall.cpp"
#include "ScriptGCEvent.cpp"
#include "ScriptProfiler.cpp"
#include "ScriptState.cpp"
#include "SerializedScriptValue.cpp"
#include "WorkerScriptController.cpp"
#include "WorkerScriptDebugServer.cpp"
