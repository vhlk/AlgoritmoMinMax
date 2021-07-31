// Generated by Haxe 4.2.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_haxe_ui_parsers_ui_ComponentInfo
#include <haxe/ui/parsers/ui/ComponentInfo.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_ui_ComponentParser
#include <haxe/ui/parsers/ui/ComponentParser.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_ui_XMLParser
#include <haxe/ui/parsers/ui/XMLParser.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_ui_resolvers_ResourceResolver
#include <haxe/ui/parsers/ui/resolvers/ResourceResolver.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_319fd69890a32220_10_new,"haxe.ui.parsers.ui.ComponentParser","new",0x24a90640,"haxe.ui.parsers.ui.ComponentParser.new","haxe/ui/parsers/ui/ComponentParser.hx",10,0x5811c530)
HX_LOCAL_STACK_FRAME(_hx_pos_319fd69890a32220_14_parse,"haxe.ui.parsers.ui.ComponentParser","parse",0x89cbfe13,"haxe.ui.parsers.ui.ComponentParser.parse","haxe/ui/parsers/ui/ComponentParser.hx",14,0x5811c530)
HX_LOCAL_STACK_FRAME(_hx_pos_319fd69890a32220_17_get,"haxe.ui.parsers.ui.ComponentParser","get",0x24a3b676,"haxe.ui.parsers.ui.ComponentParser.get","haxe/ui/parsers/ui/ComponentParser.hx",17,0x5811c530)
HX_LOCAL_STACK_FRAME(_hx_pos_319fd69890a32220_34_defaultParsers,"haxe.ui.parsers.ui.ComponentParser","defaultParsers",0x043dd613,"haxe.ui.parsers.ui.ComponentParser.defaultParsers","haxe/ui/parsers/ui/ComponentParser.hx",34,0x5811c530)
HX_LOCAL_STACK_FRAME(_hx_pos_319fd69890a32220_39_register,"haxe.ui.parsers.ui.ComponentParser","register",0x523b2483,"haxe.ui.parsers.ui.ComponentParser.register","haxe/ui/parsers/ui/ComponentParser.hx",39,0x5811c530)
HX_LOCAL_STACK_FRAME(_hx_pos_319fd69890a32220_47_nextId,"haxe.ui.parsers.ui.ComponentParser","nextId",0x8d8dddce,"haxe.ui.parsers.ui.ComponentParser.nextId","haxe/ui/parsers/ui/ComponentParser.hx",47,0x5811c530)
HX_LOCAL_STACK_FRAME(_hx_pos_319fd69890a32220_54_float,"haxe.ui.parsers.ui.ComponentParser","float",0xcf0d337c,"haxe.ui.parsers.ui.ComponentParser.float","haxe/ui/parsers/ui/ComponentParser.hx",54,0x5811c530)
HX_LOCAL_STACK_FRAME(_hx_pos_319fd69890a32220_57_isPercentage,"haxe.ui.parsers.ui.ComponentParser","isPercentage",0x9350c9c4,"haxe.ui.parsers.ui.ComponentParser.isPercentage","haxe/ui/parsers/ui/ComponentParser.hx",57,0x5811c530)
HX_LOCAL_STACK_FRAME(_hx_pos_319fd69890a32220_46_boot,"haxe.ui.parsers.ui.ComponentParser","boot",0xe7557252,"haxe.ui.parsers.ui.ComponentParser.boot","haxe/ui/parsers/ui/ComponentParser.hx",46,0x5811c530)
namespace haxe{
namespace ui{
namespace parsers{
namespace ui{

void ComponentParser_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_319fd69890a32220_10_new)
            	}

Dynamic ComponentParser_obj::__CreateEmpty() { return new ComponentParser_obj; }

void *ComponentParser_obj::_hx_vtable = 0;

Dynamic ComponentParser_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ComponentParser_obj > _hx_result = new ComponentParser_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ComponentParser_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x112acbd6;
}

 ::haxe::ui::parsers::ui::ComponentInfo ComponentParser_obj::parse(::String data, ::haxe::ui::parsers::ui::resolvers::ResourceResolver resourceResolver){
            	HX_STACKFRAME(&_hx_pos_319fd69890a32220_14_parse)
HXDLIN(  14)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Component parser not implemented!",2a,94,5e,64)));
HXDLIN(  14)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentParser_obj,parse,return )

 ::haxe::ds::StringMap ComponentParser_obj::_parsers;

 ::haxe::ui::parsers::ui::ComponentParser ComponentParser_obj::get(::String extension){
            	HX_STACKFRAME(&_hx_pos_319fd69890a32220_17_get)
HXLINE(  18)		::haxe::ui::parsers::ui::ComponentParser_obj::defaultParsers();
HXLINE(  20)		::hx::Class cls = ::haxe::ui::parsers::ui::ComponentParser_obj::_parsers->get(extension);
HXLINE(  21)		if (::hx::IsNull( cls )) {
HXLINE(  22)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("No component parser found for \"",ce,d8,9a,20) + extension) + HX_("\"",22,00,00,00))));
            		}
HXLINE(  25)		 ::haxe::ui::parsers::ui::ComponentParser instance = ( ( ::haxe::ui::parsers::ui::ComponentParser)(::Type_obj::createInstance(cls,::cpp::VirtualArray_obj::__new(0))) );
HXLINE(  26)		if (::hx::IsNull( instance )) {
HXLINE(  27)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Could not create component parser instance \"",7d,31,af,ad) + ::Std_obj::string(cls)) + HX_("\"",22,00,00,00))));
            		}
HXLINE(  30)		return instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ComponentParser_obj,get,return )

void ComponentParser_obj::defaultParsers(){
            	HX_STACKFRAME(&_hx_pos_319fd69890a32220_34_defaultParsers)
HXDLIN(  34)		if (::hx::IsNull( ::haxe::ui::parsers::ui::ComponentParser_obj::_parsers )) {
HXLINE(  35)			::haxe::ui::parsers::ui::ComponentParser_obj::_hx_register(HX_("xml",d7,6d,5b,00),::hx::ClassOf< ::haxe::ui::parsers::ui::XMLParser >());
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ComponentParser_obj,defaultParsers,(void))

void ComponentParser_obj::_hx_register(::String extension,::hx::Class cls){
            	HX_GC_STACKFRAME(&_hx_pos_319fd69890a32220_39_register)
HXLINE(  40)		if (::hx::IsNull( ::haxe::ui::parsers::ui::ComponentParser_obj::_parsers )) {
HXLINE(  41)			::haxe::ui::parsers::ui::ComponentParser_obj::_parsers =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  43)		::haxe::ui::parsers::ui::ComponentParser_obj::_parsers->set(extension,cls);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ComponentParser_obj,_hx_register,(void))

int ComponentParser_obj::_nextId;

::String ComponentParser_obj::nextId(::String __o_prefix){
            		::String prefix = __o_prefix;
            		if (::hx::IsNull(__o_prefix)) prefix = HX_("component",bd,f0,53,0f);
            	HX_STACKFRAME(&_hx_pos_319fd69890a32220_47_nextId)
HXLINE(  48)		::String s = (prefix + ::haxe::ui::parsers::ui::ComponentParser_obj::_nextId);
HXLINE(  49)		::haxe::ui::parsers::ui::ComponentParser_obj::_nextId++;
HXLINE(  50)		return s;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ComponentParser_obj,nextId,return )

Float ComponentParser_obj::_hx_float(::String value){
            	HX_STACKFRAME(&_hx_pos_319fd69890a32220_54_float)
HXDLIN(  54)		return ::Std_obj::parseFloat(value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ComponentParser_obj,_hx_float,return )

bool ComponentParser_obj::isPercentage(::String value){
            	HX_STACKFRAME(&_hx_pos_319fd69890a32220_57_isPercentage)
HXLINE(  58)		int _hx_tmp = value.indexOf(HX_("%",25,00,00,00),null());
HXDLIN(  58)		if ((_hx_tmp == (value.length - 1))) {
HXLINE(  59)			return true;
            		}
HXLINE(  61)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ComponentParser_obj,isPercentage,return )


::hx::ObjectPtr< ComponentParser_obj > ComponentParser_obj::__new() {
	::hx::ObjectPtr< ComponentParser_obj > __this = new ComponentParser_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ComponentParser_obj > ComponentParser_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ComponentParser_obj *__this = (ComponentParser_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ComponentParser_obj), true, "haxe.ui.parsers.ui.ComponentParser"));
	*(void **)__this = ComponentParser_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ComponentParser_obj::ComponentParser_obj()
{
}

void ComponentParser_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ComponentParser);
	HX_MARK_MEMBER_NAME(_resourceResolver,"_resourceResolver");
	HX_MARK_END_CLASS();
}

void ComponentParser_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_resourceResolver,"_resourceResolver");
}

::hx::Val ComponentParser_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { return ::hx::Val( parse_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_resourceResolver") ) { return ::hx::Val( _resourceResolver ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ComponentParser_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"float") ) { outValue = _hx_float_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"nextId") ) { outValue = nextId_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_nextId") ) { outValue = ( _nextId ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_parsers") ) { outValue = ( _parsers ); return true; }
		if (HX_FIELD_EQ(inName,"register") ) { outValue = _hx_register_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isPercentage") ) { outValue = isPercentage_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultParsers") ) { outValue = defaultParsers_dyn(); return true; }
	}
	return false;
}

::hx::Val ComponentParser_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"_resourceResolver") ) { _resourceResolver=inValue.Cast<  ::haxe::ui::parsers::ui::resolvers::ResourceResolver >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ComponentParser_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_nextId") ) { _nextId=ioValue.Cast< int >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_parsers") ) { _parsers=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void ComponentParser_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_resourceResolver",53,01,7c,b1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ComponentParser_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::parsers::ui::resolvers::ResourceResolver */ ,(int)offsetof(ComponentParser_obj,_resourceResolver),HX_("_resourceResolver",53,01,7c,b1)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ComponentParser_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &ComponentParser_obj::_parsers,HX_("_parsers",35,00,b9,23)},
	{::hx::fsInt,(void *) &ComponentParser_obj::_nextId,HX_("_nextId",4d,39,db,e0)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ComponentParser_obj_sMemberFields[] = {
	HX_("_resourceResolver",53,01,7c,b1),
	HX_("parse",33,90,55,bd),
	::String(null()) };

static void ComponentParser_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ComponentParser_obj::_parsers,"_parsers");
	HX_MARK_MEMBER_NAME(ComponentParser_obj::_nextId,"_nextId");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ComponentParser_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ComponentParser_obj::_parsers,"_parsers");
	HX_VISIT_MEMBER_NAME(ComponentParser_obj::_nextId,"_nextId");
};

#endif

::hx::Class ComponentParser_obj::__mClass;

static ::String ComponentParser_obj_sStaticFields[] = {
	HX_("_parsers",35,00,b9,23),
	HX_("get",96,80,4e,00),
	HX_("defaultParsers",f3,ff,40,19),
	HX_("register",63,a6,9f,d0),
	HX_("_nextId",4d,39,db,e0),
	HX_("nextId",ae,27,64,72),
	HX_("float",9c,c5,96,02),
	HX_("isPercentage",a4,bb,4b,be),
	::String(null())
};

void ComponentParser_obj::__register()
{
	ComponentParser_obj _hx_dummy;
	ComponentParser_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.parsers.ui.ComponentParser",4e,26,21,be);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ComponentParser_obj::__GetStatic;
	__mClass->mSetStaticField = &ComponentParser_obj::__SetStatic;
	__mClass->mMarkFunc = ComponentParser_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ComponentParser_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ComponentParser_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ComponentParser_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ComponentParser_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ComponentParser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ComponentParser_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ComponentParser_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_319fd69890a32220_46_boot)
HXDLIN(  46)		_nextId = 0;
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace ui