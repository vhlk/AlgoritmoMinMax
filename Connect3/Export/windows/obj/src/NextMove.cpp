// Generated by Haxe 4.2.0
#include <hxcpp.h>

#ifndef INCLUDED_NextMove
#include <NextMove.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b2de0c04482600c2_107_new,"NextMove","new",0x48ab18b6,"NextMove.new","MinMax.hx",107,0xb95455ac)

void NextMove_obj::__construct(int column,Float value){
            	HX_STACKFRAME(&_hx_pos_b2de0c04482600c2_107_new)
HXLINE( 108)		this->column = column;
HXLINE( 109)		this->value = value;
            	}

Dynamic NextMove_obj::__CreateEmpty() { return new NextMove_obj; }

void *NextMove_obj::_hx_vtable = 0;

Dynamic NextMove_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NextMove_obj > _hx_result = new NextMove_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool NextMove_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x29703884;
}


NextMove_obj::NextMove_obj()
{
}

::hx::Val NextMove_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return ::hx::Val( value ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"column") ) { return ::hx::Val( column ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val NextMove_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"column") ) { column=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NextMove_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("column",d6,4e,8b,c6));
	outFields->push(HX_("value",71,7f,b8,31));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NextMove_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(NextMove_obj,column),HX_("column",d6,4e,8b,c6)},
	{::hx::fsFloat,(int)offsetof(NextMove_obj,value),HX_("value",71,7f,b8,31)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *NextMove_obj_sStaticStorageInfo = 0;
#endif

static ::String NextMove_obj_sMemberFields[] = {
	HX_("column",d6,4e,8b,c6),
	HX_("value",71,7f,b8,31),
	::String(null()) };

::hx::Class NextMove_obj::__mClass;

void NextMove_obj::__register()
{
	NextMove_obj _hx_dummy;
	NextMove_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("NextMove",c4,45,df,cd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NextMove_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NextMove_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NextMove_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NextMove_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

