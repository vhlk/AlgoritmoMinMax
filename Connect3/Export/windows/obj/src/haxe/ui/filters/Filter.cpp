// Generated by Haxe 4.2.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_filters_Filter
#include <haxe/ui/filters/Filter.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_573f8742f0e2fb65_4_new,"haxe.ui.filters.Filter","new",0xde70b82f,"haxe.ui.filters.Filter.new","haxe/ui/filters/Filter.hx",4,0xc75b6f60)
namespace haxe{
namespace ui{
namespace filters{

void Filter_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_573f8742f0e2fb65_4_new)
            	}

Dynamic Filter_obj::__CreateEmpty() { return new Filter_obj; }

void *Filter_obj::_hx_vtable = 0;

Dynamic Filter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Filter_obj > _hx_result = new Filter_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Filter_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2b166675;
}


Filter_obj::Filter_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Filter_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Filter_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Filter_obj::__mClass;

void Filter_obj::__register()
{
	Filter_obj _hx_dummy;
	Filter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.filters.Filter",bd,74,2f,2e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Filter_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Filter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Filter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace filters
