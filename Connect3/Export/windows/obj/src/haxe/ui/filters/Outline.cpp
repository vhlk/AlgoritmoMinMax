// Generated by Haxe 4.2.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_filters_Filter
#include <haxe/ui/filters/Filter.h>
#endif
#ifndef INCLUDED_haxe_ui_filters_Outline
#include <haxe/ui/filters/Outline.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_92196a44910df42d_3_new,"haxe.ui.filters.Outline","new",0xab22fa4f,"haxe.ui.filters.Outline.new","haxe/ui/filters/Outline.hx",3,0x3b7ecde2)
namespace haxe{
namespace ui{
namespace filters{

void Outline_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_92196a44910df42d_3_new)
HXDLIN(   3)		super::__construct();
            	}

Dynamic Outline_obj::__CreateEmpty() { return new Outline_obj; }

void *Outline_obj::_hx_vtable = 0;

Dynamic Outline_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Outline_obj > _hx_result = new Outline_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Outline_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x119fa7c1) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x119fa7c1;
	} else {
		return inClassId==(int)0x2b166675;
	}
}


Outline_obj::Outline_obj()
{
}

::hx::Val Outline_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return ::hx::Val( size ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return ::hx::Val( color ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Outline_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Outline_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("size",c1,a0,53,4c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Outline_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Outline_obj,color),HX_("color",63,71,5c,4a)},
	{::hx::fsInt,(int)offsetof(Outline_obj,size),HX_("size",c1,a0,53,4c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Outline_obj_sStaticStorageInfo = 0;
#endif

static ::String Outline_obj_sMemberFields[] = {
	HX_("color",63,71,5c,4a),
	HX_("size",c1,a0,53,4c),
	::String(null()) };

::hx::Class Outline_obj::__mClass;

void Outline_obj::__register()
{
	Outline_obj _hx_dummy;
	Outline_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.filters.Outline",dd,26,ce,13);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Outline_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Outline_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Outline_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Outline_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace filters
