// Generated by Haxe 4.2.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentFieldMap
#include <haxe/ui/core/ComponentFieldMap.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_549ce3f89719ef90_9_mapField,"haxe.ui.core.ComponentFieldMap","mapField",0xaecdd4ea,"haxe.ui.core.ComponentFieldMap.mapField","haxe/ui/core/ComponentFieldMap.hx",9,0x4455ee5d)
HX_LOCAL_STACK_FRAME(_hx_pos_549ce3f89719ef90_4_boot,"haxe.ui.core.ComponentFieldMap","boot",0x3a6fae9e,"haxe.ui.core.ComponentFieldMap.boot","haxe/ui/core/ComponentFieldMap.hx",4,0x4455ee5d)
namespace haxe{
namespace ui{
namespace core{

void ComponentFieldMap_obj::__construct() { }

Dynamic ComponentFieldMap_obj::__CreateEmpty() { return new ComponentFieldMap_obj; }

void *ComponentFieldMap_obj::_hx_vtable = 0;

Dynamic ComponentFieldMap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ComponentFieldMap_obj > _hx_result = new ComponentFieldMap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ComponentFieldMap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x029a2c22;
}

 ::haxe::ds::StringMap ComponentFieldMap_obj::MAP;

::String ComponentFieldMap_obj::mapField(::String name){
            	HX_STACKFRAME(&_hx_pos_549ce3f89719ef90_9_mapField)
HXLINE(  10)		if (::haxe::ui::core::ComponentFieldMap_obj::MAP->exists(name)) {
HXLINE(  11)			return ::haxe::ui::core::ComponentFieldMap_obj::MAP->get_string(name);
            		}
HXLINE(  13)		return name;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ComponentFieldMap_obj,mapField,return )


ComponentFieldMap_obj::ComponentFieldMap_obj()
{
}

bool ComponentFieldMap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"MAP") ) { outValue = ( MAP ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mapField") ) { outValue = mapField_dyn(); return true; }
	}
	return false;
}

bool ComponentFieldMap_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"MAP") ) { MAP=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ComponentFieldMap_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ComponentFieldMap_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &ComponentFieldMap_obj::MAP,HX_("MAP",7c,a6,3a,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void ComponentFieldMap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ComponentFieldMap_obj::MAP,"MAP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ComponentFieldMap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ComponentFieldMap_obj::MAP,"MAP");
};

#endif

::hx::Class ComponentFieldMap_obj::__mClass;

static ::String ComponentFieldMap_obj_sStaticFields[] = {
	HX_("MAP",7c,a6,3a,00),
	HX_("mapField",7e,04,d6,77),
	::String(null())
};

void ComponentFieldMap_obj::__register()
{
	ComponentFieldMap_obj _hx_dummy;
	ComponentFieldMap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.core.ComponentFieldMap",82,4d,48,13);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ComponentFieldMap_obj::__GetStatic;
	__mClass->mSetStaticField = &ComponentFieldMap_obj::__SetStatic;
	__mClass->mMarkFunc = ComponentFieldMap_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ComponentFieldMap_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ComponentFieldMap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ComponentFieldMap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ComponentFieldMap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ComponentFieldMap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ComponentFieldMap_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::haxe::ds::StringMap _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_549ce3f89719ef90_4_boot)
HXDLIN(   4)			 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(   4)			_g->set(HX_("group",3f,b3,f4,99),HX_("componentGroup",42,65,fb,e8));
HXDLIN(   4)			_g->set(HX_("contentLayout",c3,e0,b3,2e),HX_("contentLayoutName",ae,9c,1f,41));
HXDLIN(   4)			return _g;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_549ce3f89719ef90_4_boot)
HXDLIN(   4)		MAP = ( ( ::haxe::ds::StringMap)( ::Dynamic(new _hx_Closure_0())()) );
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
