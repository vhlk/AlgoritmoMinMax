// Generated by Haxe 4.2.0
#include <hxcpp.h>

#ifndef INCLUDED_User
#include <User.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e9a77c089f21b886_5_new,"User","new",0xd05970dd,"User.new","User.hx",5,0x3ca11933)

void User_obj::__construct(::hx::Null< bool >  __o_isUser){
            		bool isUser = __o_isUser.Default(false);
            	HX_STACKFRAME(&_hx_pos_e9a77c089f21b886_5_new)
HXDLIN(   5)		this->user = isUser;
            	}

Dynamic User_obj::__CreateEmpty() { return new User_obj; }

void *User_obj::_hx_vtable = 0;

Dynamic User_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< User_obj > _hx_result = new User_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool User_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0cd9b48f;
}


User_obj::User_obj()
{
}

::hx::Val User_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"user") ) { return ::hx::Val( user ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val User_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"user") ) { user=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void User_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("user",4b,92,ad,4d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo User_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(User_obj,user),HX_("user",4b,92,ad,4d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *User_obj_sStaticStorageInfo = 0;
#endif

static ::String User_obj_sMemberFields[] = {
	HX_("user",4b,92,ad,4d),
	::String(null()) };

::hx::Class User_obj::__mClass;

void User_obj::__register()
{
	User_obj _hx_dummy;
	User_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("User",6b,be,86,38);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(User_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< User_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = User_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = User_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

