// Generated by Haxe 4.2.0
#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentBounds
#include <haxe/ui/core/ComponentBounds.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentCommon
#include <haxe/ui/core/ComponentCommon.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentContainer
#include <haxe/ui/core/ComponentContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentEvents
#include <haxe/ui/core/ComponentEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentLayout
#include <haxe/ui/core/ComponentLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentValidation
#include <haxe/ui/core/ComponentValidation.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IComponentBase
#include <haxe/ui/core/IComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_scripting_ScriptInterp
#include <haxe/ui/scripting/ScriptInterp.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_hscript_Error
#include <hscript/Error.h>
#endif
#ifndef INCLUDED_hscript_Interp
#include <hscript/Interp.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_55532131ebe49e89_12_new,"haxe.ui.scripting.ScriptInterp","new",0x8097e6fa,"haxe.ui.scripting.ScriptInterp.new","haxe/ui/scripting/ScriptInterp.hx",12,0x61b37435)
HX_LOCAL_STACK_FRAME(_hx_pos_55532131ebe49e89_24_isVar,"haxe.ui.scripting.ScriptInterp","isVar",0xebc27a37,"haxe.ui.scripting.ScriptInterp.isVar","haxe/ui/scripting/ScriptInterp.hx",24,0x61b37435)
HX_LOCAL_STACK_FRAME(_hx_pos_55532131ebe49e89_27_cnew,"haxe.ui.scripting.ScriptInterp","cnew",0xfd13a003,"haxe.ui.scripting.ScriptInterp.cnew","haxe/ui/scripting/ScriptInterp.hx",27,0x61b37435)
HX_LOCAL_STACK_FRAME(_hx_pos_55532131ebe49e89_34_get,"haxe.ui.scripting.ScriptInterp","get",0x80929730,"haxe.ui.scripting.ScriptInterp.get","haxe/ui/scripting/ScriptInterp.hx",34,0x61b37435)
HX_LOCAL_STACK_FRAME(_hx_pos_55532131ebe49e89_42_parseResult,"haxe.ui.scripting.ScriptInterp","parseResult",0x8c44560a,"haxe.ui.scripting.ScriptInterp.parseResult","haxe/ui/scripting/ScriptInterp.hx",42,0x61b37435)
HX_LOCAL_STACK_FRAME(_hx_pos_55532131ebe49e89_73_set,"haxe.ui.scripting.ScriptInterp","set",0x809bb23c,"haxe.ui.scripting.ScriptInterp.set","haxe/ui/scripting/ScriptInterp.hx",73,0x61b37435)
HX_LOCAL_STACK_FRAME(_hx_pos_55532131ebe49e89_81_addClassAlias,"haxe.ui.scripting.ScriptInterp","addClassAlias",0x6f40e2d3,"haxe.ui.scripting.ScriptInterp.addClassAlias","haxe/ui/scripting/ScriptInterp.hx",81,0x61b37435)
HX_LOCAL_STACK_FRAME(_hx_pos_55532131ebe49e89_89_addStaticClass,"haxe.ui.scripting.ScriptInterp","addStaticClass",0x91cbf7af,"haxe.ui.scripting.ScriptInterp.addStaticClass","haxe/ui/scripting/ScriptInterp.hx",89,0x61b37435)
namespace haxe{
namespace ui{
namespace scripting{

void ScriptInterp_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_55532131ebe49e89_12_new)
HXLINE(  13)		super::__construct();
HXLINE(  14)		if (::hx::IsNotNull( ::haxe::ui::scripting::ScriptInterp_obj::_staticClasses )) {
HXLINE(  15)			 ::Dynamic name = ::haxe::ui::scripting::ScriptInterp_obj::_staticClasses->keys();
HXDLIN(  15)			while(( (bool)(name->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  15)				::String name1 = ( (::String)(name->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  16)				 ::Dynamic c = ::haxe::ui::scripting::ScriptInterp_obj::_staticClasses->get(name1);
HXLINE(  17)				this->variables->set(name1,c);
            			}
            		}
HXLINE(  20)		this->variables->set(HX_("isVar",1d,09,58,c1),this->isVar_dyn());
            	}

Dynamic ScriptInterp_obj::__CreateEmpty() { return new ScriptInterp_obj; }

void *ScriptInterp_obj::_hx_vtable = 0;

Dynamic ScriptInterp_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScriptInterp_obj > _hx_result = new ScriptInterp_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ScriptInterp_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2a95eb9f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2a95eb9f;
	} else {
		return inClassId==(int)0x3fd3261c;
	}
}

bool ScriptInterp_obj::isVar(::String varName){
            	HX_STACKFRAME(&_hx_pos_55532131ebe49e89_24_isVar)
HXDLIN(  24)		return this->variables->exists(varName);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScriptInterp_obj,isVar,return )

 ::Dynamic ScriptInterp_obj::cnew(::String cl,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_55532131ebe49e89_27_cnew)
HXLINE(  28)		bool _hx_tmp;
HXDLIN(  28)		if (::hx::IsNotNull( ::haxe::ui::scripting::ScriptInterp_obj::_classAliases )) {
HXLINE(  28)			_hx_tmp = ::haxe::ui::scripting::ScriptInterp_obj::_classAliases->exists(cl);
            		}
            		else {
HXLINE(  28)			_hx_tmp = false;
            		}
HXDLIN(  28)		if (_hx_tmp) {
HXLINE(  29)			cl = ::haxe::ui::scripting::ScriptInterp_obj::_classAliases->get_string(cl);
            		}
HXLINE(  31)		return this->super::cnew(cl,args);
            	}


 ::Dynamic ScriptInterp_obj::get( ::Dynamic o,::String f){
            	HX_STACKFRAME(&_hx_pos_55532131ebe49e89_34_get)
HXLINE(  35)		if (::hx::IsNull( o )) {
HXLINE(  36)			 ::hscript::Error e = ::hscript::Error_obj::EInvalidAccess(f);
HXDLIN(  36)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            		}
HXLINE(  38)		 ::Dynamic v = ::Reflect_obj::getProperty(o,f);
HXLINE(  39)		return this->parseResult(v);
            	}


 ::Dynamic ScriptInterp_obj::parseResult( ::Dynamic v){
            	HX_GC_STACKFRAME(&_hx_pos_55532131ebe49e89_42_parseResult)
HXLINE(  43)		if (::hx::IsNull( v )) {
HXLINE(  44)			return v;
            		}
HXLINE(  47)		bool _hx_tmp;
HXDLIN(  47)		if (!(::Std_obj::isOfType(v,::hx::ClassOf< ::haxe::ui::core::Component >()))) {
HXLINE(  47)			_hx_tmp = ::Std_obj::isOfType(v,::hx::ArrayBase::__mClass);
            		}
            		else {
HXLINE(  47)			_hx_tmp = true;
            		}
HXDLIN(  47)		if (_hx_tmp) {
HXLINE(  48)			return v;
            		}
HXLINE(  51)		::String temp = ::Std_obj::string(v);
HXLINE(  52)		 ::EReg regexp =  ::EReg_obj::__alloc( HX_CTX ,HX_("^_?(Bool|Float|Int|String)\\((.*)\\)",61,e0,3c,41),HX_("g",67,00,00,00));
HXLINE(  53)		if ((regexp->match(temp) == false)) {
HXLINE(  54)			return v;
            		}
HXLINE(  57)		::String m1 = regexp->matched(1);
HXLINE(  58)		::String m2 = regexp->matched(2);
HXLINE(  59)		::String _hx_switch_0 = m1;
            		if (  (_hx_switch_0==HX_("Bool",4a,b0,f4,2b)) ){
HXLINE(  61)			return ::Std_obj::parseFloat(m2);
HXDLIN(  61)			goto _hx_goto_5;
            		}
            		if (  (_hx_switch_0==HX_("Float",7c,35,c4,95)) ){
HXLINE(  63)			return ::Std_obj::parseFloat(m2);
HXDLIN(  63)			goto _hx_goto_5;
            		}
            		if (  (_hx_switch_0==HX_("Int",cf,c4,37,00)) ){
HXLINE(  65)			return ::Std_obj::parseInt(m2);
HXDLIN(  65)			goto _hx_goto_5;
            		}
            		if (  (_hx_switch_0==HX_("String",f1,9c,c4,45)) ){
HXLINE(  67)			return ::Std_obj::string(m2);
HXDLIN(  67)			goto _hx_goto_5;
            		}
            		/* default */{
            		}
            		_hx_goto_5:;
HXLINE(  70)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScriptInterp_obj,parseResult,return )

 ::Dynamic ScriptInterp_obj::set( ::Dynamic o,::String f, ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_55532131ebe49e89_73_set)
HXLINE(  74)		if (::hx::IsNull( o )) {
HXLINE(  75)			 ::hscript::Error e = ::hscript::Error_obj::EInvalidAccess(f);
HXDLIN(  75)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            		}
HXLINE(  77)		::Reflect_obj::setProperty(o,f,v);
HXLINE(  78)		return v;
            	}


 ::haxe::ds::StringMap ScriptInterp_obj::_classAliases;

 ::haxe::ds::StringMap ScriptInterp_obj::_staticClasses;

void ScriptInterp_obj::addClassAlias(::String alias,::String classPath){
            	HX_GC_STACKFRAME(&_hx_pos_55532131ebe49e89_81_addClassAlias)
HXLINE(  82)		if (::hx::IsNull( ::haxe::ui::scripting::ScriptInterp_obj::_classAliases )) {
HXLINE(  83)			::haxe::ui::scripting::ScriptInterp_obj::_classAliases =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  86)		::haxe::ui::scripting::ScriptInterp_obj::_classAliases->set(alias,classPath);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ScriptInterp_obj,addClassAlias,(void))

void ScriptInterp_obj::addStaticClass(::String alias, ::Dynamic c){
            	HX_GC_STACKFRAME(&_hx_pos_55532131ebe49e89_89_addStaticClass)
HXLINE(  90)		if (::hx::IsNull( ::haxe::ui::scripting::ScriptInterp_obj::_staticClasses )) {
HXLINE(  91)			::haxe::ui::scripting::ScriptInterp_obj::_staticClasses =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  93)		::haxe::ui::scripting::ScriptInterp_obj::_staticClasses->set(alias,c);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ScriptInterp_obj,addStaticClass,(void))


::hx::ObjectPtr< ScriptInterp_obj > ScriptInterp_obj::__new() {
	::hx::ObjectPtr< ScriptInterp_obj > __this = new ScriptInterp_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ScriptInterp_obj > ScriptInterp_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ScriptInterp_obj *__this = (ScriptInterp_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScriptInterp_obj), true, "haxe.ui.scripting.ScriptInterp"));
	*(void **)__this = ScriptInterp_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ScriptInterp_obj::ScriptInterp_obj()
{
}

::hx::Val ScriptInterp_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"cnew") ) { return ::hx::Val( cnew_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"isVar") ) { return ::hx::Val( isVar_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"parseResult") ) { return ::hx::Val( parseResult_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ScriptInterp_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"_classAliases") ) { outValue = ( _classAliases ); return true; }
		if (HX_FIELD_EQ(inName,"addClassAlias") ) { outValue = addClassAlias_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_staticClasses") ) { outValue = ( _staticClasses ); return true; }
		if (HX_FIELD_EQ(inName,"addStaticClass") ) { outValue = addStaticClass_dyn(); return true; }
	}
	return false;
}

bool ScriptInterp_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"_classAliases") ) { _classAliases=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_staticClasses") ) { _staticClasses=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ScriptInterp_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ScriptInterp_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &ScriptInterp_obj::_classAliases,HX_("_classAliases",85,67,a4,70)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &ScriptInterp_obj::_staticClasses,HX_("_staticClasses",d9,9b,f5,2e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ScriptInterp_obj_sMemberFields[] = {
	HX_("isVar",1d,09,58,c1),
	HX_("cnew",dd,ef,c3,41),
	HX_("get",96,80,4e,00),
	HX_("parseResult",70,15,c1,83),
	HX_("set",a2,9b,57,00),
	::String(null()) };

static void ScriptInterp_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScriptInterp_obj::_classAliases,"_classAliases");
	HX_MARK_MEMBER_NAME(ScriptInterp_obj::_staticClasses,"_staticClasses");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ScriptInterp_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScriptInterp_obj::_classAliases,"_classAliases");
	HX_VISIT_MEMBER_NAME(ScriptInterp_obj::_staticClasses,"_staticClasses");
};

#endif

::hx::Class ScriptInterp_obj::__mClass;

static ::String ScriptInterp_obj_sStaticFields[] = {
	HX_("_classAliases",85,67,a4,70),
	HX_("_staticClasses",d9,9b,f5,2e),
	HX_("addClassAlias",b9,c7,f8,ce),
	HX_("addStaticClass",09,5c,fc,f2),
	::String(null())
};

void ScriptInterp_obj::__register()
{
	ScriptInterp_obj _hx_dummy;
	ScriptInterp_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.scripting.ScriptInterp",08,a2,ae,6d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ScriptInterp_obj::__GetStatic;
	__mClass->mSetStaticField = &ScriptInterp_obj::__SetStatic;
	__mClass->mMarkFunc = ScriptInterp_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ScriptInterp_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScriptInterp_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScriptInterp_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ScriptInterp_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScriptInterp_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScriptInterp_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace scripting
