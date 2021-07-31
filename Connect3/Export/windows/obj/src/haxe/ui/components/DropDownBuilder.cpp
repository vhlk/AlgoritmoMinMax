// Generated by Haxe 4.2.0
#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenImpl
#include <haxe/ui/backend/ScreenImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ButtonBuilder
#include <haxe/ui/components/ButtonBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ButtonEvents
#include <haxe/ui/components/ButtonEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_components_CalendarDropDownHandler
#include <haxe/ui/components/CalendarDropDownHandler.h>
#endif
#ifndef INCLUDED_haxe_ui_components_DropDown
#include <haxe/ui/components/DropDown.h>
#endif
#ifndef INCLUDED_haxe_ui_components_DropDownBuilder
#include <haxe/ui/components/DropDownBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_components_DropDownEvents
#include <haxe/ui/components/DropDownEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_components_DropDownHandler
#include <haxe/ui/components/DropDownHandler.h>
#endif
#ifndef INCLUDED_haxe_ui_components_IDropDownHandler
#include <haxe/ui/components/IDropDownHandler.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ListDropDownHandler
#include <haxe/ui/components/ListDropDownHandler.h>
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
#ifndef INCLUDED_haxe_ui_core_CompositeBuilder
#include <haxe/ui/core/CompositeBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IComponentBase
#include <haxe/ui/core/IComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_ff5df7ac87c4dee2_627_new,"haxe.ui.components.DropDownBuilder","new",0xc1a41bf6,"haxe.ui.components.DropDownBuilder.new","haxe/ui/components/DropDown.hx",627,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_ff5df7ac87c4dee2_636_get_handler,"haxe.ui.components.DropDownBuilder","get_handler",0xb056e177,"haxe.ui.components.DropDownBuilder.get_handler","haxe/ui/components/DropDown.hx",636,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_ff5df7ac87c4dee2_648_onReady,"haxe.ui.components.DropDownBuilder","onReady",0x91e50d5a,"haxe.ui.components.DropDownBuilder.onReady","haxe/ui/components/DropDown.hx",648,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_ff5df7ac87c4dee2_656_create,"haxe.ui.components.DropDownBuilder","create",0x62e5fd26,"haxe.ui.components.DropDownBuilder.create","haxe/ui/components/DropDown.hx",656,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_ff5df7ac87c4dee2_659_destroy,"haxe.ui.components.DropDownBuilder","destroy",0x3972fb90,"haxe.ui.components.DropDownBuilder.destroy","haxe/ui/components/DropDown.hx",659,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_ff5df7ac87c4dee2_669_onThemeChanged,"haxe.ui.components.DropDownBuilder","onThemeChanged",0xe4304dd4,"haxe.ui.components.DropDownBuilder.onThemeChanged","haxe/ui/components/DropDown.hx",669,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_ff5df7ac87c4dee2_622_boot,"haxe.ui.components.DropDownBuilder","boot",0xa60d5bdc,"haxe.ui.components.DropDownBuilder.boot","haxe/ui/components/DropDown.hx",622,0x145b8c86)
namespace haxe{
namespace ui{
namespace components{

void DropDownBuilder_obj::__construct( ::haxe::ui::components::DropDown dropdown){
            	HX_STACKFRAME(&_hx_pos_ff5df7ac87c4dee2_627_new)
HXLINE( 628)		super::__construct(dropdown);
HXLINE( 629)		this->_dropdown = dropdown;
HXLINE( 631)		{
HXLINE( 631)			::Dynamic this1 = ::haxe::ui::components::DropDownBuilder_obj::HANDLER_MAP;
HXDLIN( 631)			( ( ::haxe::ds::StringMap)(this1) )->set(HX_("list",5e,1c,b3,47),::Type_obj::getClassName(::hx::ClassOf< ::haxe::ui::components::ListDropDownHandler >()));
            		}
HXLINE( 632)		{
HXLINE( 632)			::Dynamic this2 = ::haxe::ui::components::DropDownBuilder_obj::HANDLER_MAP;
HXDLIN( 632)			( ( ::haxe::ds::StringMap)(this2) )->set(HX_("date",2e,56,63,42),::Type_obj::getClassName(::hx::ClassOf< ::haxe::ui::components::CalendarDropDownHandler >()));
            		}
            	}

Dynamic DropDownBuilder_obj::__CreateEmpty() { return new DropDownBuilder_obj; }

void *DropDownBuilder_obj::_hx_vtable = 0;

Dynamic DropDownBuilder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DropDownBuilder_obj > _hx_result = new DropDownBuilder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DropDownBuilder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x12e64056) {
		if (inClassId<=(int)0x0472fd8d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0472fd8d;
		} else {
			return inClassId==(int)0x12e64056;
		}
	} else {
		return inClassId==(int)0x69fc3099;
	}
}

::Dynamic DropDownBuilder_obj::get_handler(){
            	HX_STACKFRAME(&_hx_pos_ff5df7ac87c4dee2_636_get_handler)
HXLINE( 637)		if (::hx::IsNull( this->_handler )) {
HXLINE( 638)			::Dynamic this1 = ::haxe::ui::components::DropDownBuilder_obj::HANDLER_MAP;
HXDLIN( 638)			::String handlerClass = ( ( ::haxe::ds::StringMap)(this1) )->get_string(this->_dropdown->get_type());
HXLINE( 639)			if (::hx::IsNull( handlerClass )) {
HXLINE( 640)				handlerClass = this->_dropdown->get_type();
            			}
HXLINE( 642)			::hx::Class _hx_tmp = ::Type_obj::resolveClass(handlerClass);
HXDLIN( 642)			this->_handler = ::Type_obj::createInstance(_hx_tmp,::cpp::VirtualArray_obj::__new(1)->init(0,this->_dropdown));
            		}
HXLINE( 645)		return this->_handler;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDownBuilder_obj,get_handler,return )

void DropDownBuilder_obj::onReady(){
            	HX_STACKFRAME(&_hx_pos_ff5df7ac87c4dee2_648_onReady)
HXLINE( 649)		this->super::onReady();
HXLINE( 650)		if (::hx::IsNull( this->_dropdown->get_text() )) {
HXLINE( 651)			::haxe::ui::components::IDropDownHandler_obj::applyDefault(this->get_handler());
            		}
            	}


void DropDownBuilder_obj::create(){
            	HX_STACKFRAME(&_hx_pos_ff5df7ac87c4dee2_656_create)
HXDLIN( 656)		this->_dropdown->set_toggle(true);
            	}


void DropDownBuilder_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_ff5df7ac87c4dee2_659_destroy)
HXLINE( 660)		 ::haxe::ui::components::DropDownEvents events = ::hx::TCast<  ::haxe::ui::components::DropDownEvents >::cast(this->_dropdown->_internalEvents);
HXLINE( 661)		events->hideDropDown();
HXLINE( 662)		bool _hx_tmp;
HXDLIN( 662)		if (::hx::IsNotNull( this->_handler )) {
HXLINE( 662)			_hx_tmp = ::hx::IsNotNull( ::haxe::ui::components::IDropDownHandler_obj::get_component(this->_handler) );
            		}
            		else {
HXLINE( 662)			_hx_tmp = false;
            		}
HXDLIN( 662)		if (_hx_tmp) {
HXLINE( 663)			::haxe::ui::components::IDropDownHandler_obj::get_component(this->_handler)->destroyComponent();
            		}
            	}


void DropDownBuilder_obj::onThemeChanged(){
            	HX_STACKFRAME(&_hx_pos_ff5df7ac87c4dee2_669_onThemeChanged)
HXDLIN( 669)		if (::hx::IsNotNull( this->_handler )) {
HXLINE( 670)			 ::haxe::ui::core::Screen _hx_tmp = ::haxe::ui::core::Screen_obj::get_instance();
HXDLIN( 670)			_hx_tmp->invalidateChildren(::haxe::ui::components::IDropDownHandler_obj::get_component(this->_handler));
HXLINE( 671)			 ::haxe::ui::core::Screen _hx_tmp1 = ::haxe::ui::core::Screen_obj::get_instance();
HXDLIN( 671)			_hx_tmp1->onThemeChangedChildren(::haxe::ui::components::IDropDownHandler_obj::get_component(this->_handler));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDownBuilder_obj,onThemeChanged,(void))

 ::haxe::ds::StringMap DropDownBuilder_obj::HANDLER_MAP;


::hx::ObjectPtr< DropDownBuilder_obj > DropDownBuilder_obj::__new( ::haxe::ui::components::DropDown dropdown) {
	::hx::ObjectPtr< DropDownBuilder_obj > __this = new DropDownBuilder_obj();
	__this->__construct(dropdown);
	return __this;
}

::hx::ObjectPtr< DropDownBuilder_obj > DropDownBuilder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::DropDown dropdown) {
	DropDownBuilder_obj *__this = (DropDownBuilder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DropDownBuilder_obj), true, "haxe.ui.components.DropDownBuilder"));
	*(void **)__this = DropDownBuilder_obj::_hx_vtable;
	__this->__construct(dropdown);
	return __this;
}

DropDownBuilder_obj::DropDownBuilder_obj()
{
}

void DropDownBuilder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DropDownBuilder);
	HX_MARK_MEMBER_NAME(_dropdown,"_dropdown");
	HX_MARK_MEMBER_NAME(_handler,"_handler");
	HX_MARK_MEMBER_NAME(handler,"handler");
	 ::haxe::ui::components::ButtonBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DropDownBuilder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_dropdown,"_dropdown");
	HX_VISIT_MEMBER_NAME(_handler,"_handler");
	HX_VISIT_MEMBER_NAME(handler,"handler");
	 ::haxe::ui::components::ButtonBuilder_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DropDownBuilder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"handler") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_handler() : handler ); }
		if (HX_FIELD_EQ(inName,"onReady") ) { return ::hx::Val( onReady_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_handler") ) { return ::hx::Val( _handler ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_dropdown") ) { return ::hx::Val( _dropdown ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_handler") ) { return ::hx::Val( get_handler_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onThemeChanged") ) { return ::hx::Val( onThemeChanged_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool DropDownBuilder_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"HANDLER_MAP") ) { outValue = ( HANDLER_MAP ); return true; }
	}
	return false;
}

::hx::Val DropDownBuilder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"handler") ) { handler=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_handler") ) { _handler=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_dropdown") ) { _dropdown=inValue.Cast<  ::haxe::ui::components::DropDown >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DropDownBuilder_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"HANDLER_MAP") ) { HANDLER_MAP=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void DropDownBuilder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_dropdown",70,6b,c5,44));
	outFields->push(HX_("_handler",4b,09,8e,7f));
	outFields->push(HX_("handler",ca,af,d5,45));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DropDownBuilder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::components::DropDown */ ,(int)offsetof(DropDownBuilder_obj,_dropdown),HX_("_dropdown",70,6b,c5,44)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(DropDownBuilder_obj,_handler),HX_("_handler",4b,09,8e,7f)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(DropDownBuilder_obj,handler),HX_("handler",ca,af,d5,45)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo DropDownBuilder_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &DropDownBuilder_obj::HANDLER_MAP,HX_("HANDLER_MAP",27,8c,4b,ed)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String DropDownBuilder_obj_sMemberFields[] = {
	HX_("_dropdown",70,6b,c5,44),
	HX_("_handler",4b,09,8e,7f),
	HX_("handler",ca,af,d5,45),
	HX_("get_handler",e1,0f,d0,cb),
	HX_("onReady",c4,3e,f8,7c),
	HX_("create",fc,66,0f,7c),
	HX_("destroy",fa,2c,86,24),
	HX_("onThemeChanged",aa,7d,38,28),
	::String(null()) };

static void DropDownBuilder_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DropDownBuilder_obj::HANDLER_MAP,"HANDLER_MAP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DropDownBuilder_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DropDownBuilder_obj::HANDLER_MAP,"HANDLER_MAP");
};

#endif

::hx::Class DropDownBuilder_obj::__mClass;

static ::String DropDownBuilder_obj_sStaticFields[] = {
	HX_("HANDLER_MAP",27,8c,4b,ed),
	::String(null())
};

void DropDownBuilder_obj::__register()
{
	DropDownBuilder_obj _hx_dummy;
	DropDownBuilder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.DropDownBuilder",04,a9,c5,56);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DropDownBuilder_obj::__GetStatic;
	__mClass->mSetStaticField = &DropDownBuilder_obj::__SetStatic;
	__mClass->mMarkFunc = DropDownBuilder_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DropDownBuilder_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DropDownBuilder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DropDownBuilder_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DropDownBuilder_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DropDownBuilder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DropDownBuilder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DropDownBuilder_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_ff5df7ac87c4dee2_622_boot)
HXDLIN( 622)		HANDLER_MAP =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
