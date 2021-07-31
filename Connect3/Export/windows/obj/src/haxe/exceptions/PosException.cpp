// Generated by Haxe 4.2.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_exceptions_PosException
#include <haxe/exceptions/PosException.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_38ec925b2c2d0de4_12_new,"haxe.exceptions.PosException","new",0x9ed038cf,"haxe.exceptions.PosException.new","D:\\Victor\\Haxe\\haxe\\std/haxe/exceptions/PosException.hx",12,0x085ccd46)
HX_LOCAL_STACK_FRAME(_hx_pos_38ec925b2c2d0de4_25_toString,"haxe.exceptions.PosException","toString",0x179675dd,"haxe.exceptions.PosException.toString","D:\\Victor\\Haxe\\haxe\\std/haxe/exceptions/PosException.hx",25,0x085ccd46)
namespace haxe{
namespace exceptions{

void PosException_obj::__construct(::String message, ::haxe::Exception previous, ::Dynamic pos){
            	HX_STACKFRAME(&_hx_pos_38ec925b2c2d0de4_12_new)
HXLINE(  13)		super::__construct(message,previous,null());
HXLINE(  14)		if (::hx::IsNull( pos )) {
HXLINE(  15)			this->posInfos = ::hx::SourceInfo(HX_("(unknown)",87,5d,fc,5f),0,HX_("(unknown)",87,5d,fc,5f),HX_("(unknown)",87,5d,fc,5f));
            		}
            		else {
HXLINE(  17)			this->posInfos = pos;
            		}
            	}

Dynamic PosException_obj::__CreateEmpty() { return new PosException_obj; }

void *PosException_obj::_hx_vtable = 0;

Dynamic PosException_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PosException_obj > _hx_result = new PosException_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool PosException_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x65f7252d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x65f7252d;
	} else {
		return inClassId==(int)0x677ddc49;
	}
}

::String PosException_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_38ec925b2c2d0de4_25_toString)
HXDLIN(  25)		::String _hx_tmp = ((HX_("",00,00,00,00) + this->super::toString()) + HX_(" in ",7b,e0,76,15));
HXDLIN(  25)		return ( (::String)((((((((_hx_tmp + this->posInfos->__Field(HX_("className",a3,92,3d,dc),::hx::paccDynamic)) + HX_(".",2e,00,00,00)) + this->posInfos->__Field(HX_("methodName",cc,19,0f,12),::hx::paccDynamic)) + HX_(" at ",ad,d3,70,15)) + this->posInfos->__Field(HX_("fileName",e7,5a,43,62),::hx::paccDynamic)) + HX_(":",3a,00,00,00)) + this->posInfos->__Field(HX_("lineNumber",dd,81,22,76),::hx::paccDynamic))) );
            	}



PosException_obj::PosException_obj()
{
}

void PosException_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PosException);
	HX_MARK_MEMBER_NAME(posInfos,"posInfos");
	 ::haxe::Exception_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PosException_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(posInfos,"posInfos");
	 ::haxe::Exception_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PosException_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"posInfos") ) { return ::hx::Val( posInfos ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PosException_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"posInfos") ) { posInfos=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PosException_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("posInfos",11,82,2e,5a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PosException_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(PosException_obj,posInfos),HX_("posInfos",11,82,2e,5a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PosException_obj_sStaticStorageInfo = 0;
#endif

static ::String PosException_obj_sMemberFields[] = {
	HX_("posInfos",11,82,2e,5a),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class PosException_obj::__mClass;

void PosException_obj::__register()
{
	PosException_obj _hx_dummy;
	PosException_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.exceptions.PosException",5d,25,5a,6b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PosException_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PosException_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PosException_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PosException_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace exceptions