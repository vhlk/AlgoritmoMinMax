// Generated by Haxe 4.2.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_PlatformBase
#include <haxe/ui/backend/PlatformBase.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5f6a4436ed5b466b_4_new,"haxe.ui.backend.PlatformBase","new",0x67b89e22,"haxe.ui.backend.PlatformBase.new","haxe/ui/backend/PlatformBase.hx",4,0x3041c20d)
HX_LOCAL_STACK_FRAME(_hx_pos_5f6a4436ed5b466b_8_getMetric,"haxe.ui.backend.PlatformBase","getMetric",0xc3799ca8,"haxe.ui.backend.PlatformBase.getMetric","haxe/ui/backend/PlatformBase.hx",8,0x3041c20d)
HX_LOCAL_STACK_FRAME(_hx_pos_5f6a4436ed5b466b_12_getColor,"haxe.ui.backend.PlatformBase","getColor",0xb28393eb,"haxe.ui.backend.PlatformBase.getColor","haxe/ui/backend/PlatformBase.hx",12,0x3041c20d)
HX_LOCAL_STACK_FRAME(_hx_pos_5f6a4436ed5b466b_16_getSystemLocale,"haxe.ui.backend.PlatformBase","getSystemLocale",0x4d829b61,"haxe.ui.backend.PlatformBase.getSystemLocale","haxe/ui/backend/PlatformBase.hx",16,0x3041c20d)
namespace haxe{
namespace ui{
namespace backend{

void PlatformBase_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_5f6a4436ed5b466b_4_new)
            	}

Dynamic PlatformBase_obj::__CreateEmpty() { return new PlatformBase_obj; }

void *PlatformBase_obj::_hx_vtable = 0;

Dynamic PlatformBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PlatformBase_obj > _hx_result = new PlatformBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PlatformBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7903ebde;
}

Float PlatformBase_obj::getMetric(::String id){
            	HX_STACKFRAME(&_hx_pos_5f6a4436ed5b466b_8_getMetric)
HXDLIN(   8)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(PlatformBase_obj,getMetric,return )

 ::Dynamic PlatformBase_obj::getColor(::String id){
            	HX_STACKFRAME(&_hx_pos_5f6a4436ed5b466b_12_getColor)
HXDLIN(  12)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(PlatformBase_obj,getColor,return )

::String PlatformBase_obj::getSystemLocale(){
            	HX_STACKFRAME(&_hx_pos_5f6a4436ed5b466b_16_getSystemLocale)
HXDLIN(  16)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlatformBase_obj,getSystemLocale,return )


PlatformBase_obj::PlatformBase_obj()
{
}

::hx::Val PlatformBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"getColor") ) { return ::hx::Val( getColor_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getMetric") ) { return ::hx::Val( getMetric_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getSystemLocale") ) { return ::hx::Val( getSystemLocale_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PlatformBase_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PlatformBase_obj_sStaticStorageInfo = 0;
#endif

static ::String PlatformBase_obj_sMemberFields[] = {
	HX_("getMetric",66,11,b9,85),
	HX_("getColor",ed,80,33,aa),
	HX_("getSystemLocale",9f,32,bf,5f),
	::String(null()) };

::hx::Class PlatformBase_obj::__mClass;

void PlatformBase_obj::__register()
{
	PlatformBase_obj _hx_dummy;
	PlatformBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.PlatformBase",30,a5,0a,3b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PlatformBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PlatformBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlatformBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlatformBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
