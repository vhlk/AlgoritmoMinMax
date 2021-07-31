// Generated by Haxe 4.2.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DefaultBehaviour
#include <haxe/ui/behaviours/DefaultBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Stepper
#include <haxe/ui/components/Stepper.h>
#endif
#ifndef INCLUDED_haxe_ui_components__NumberStepper_MinBehaviour
#include <haxe/ui/components/_NumberStepper/MinBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_VBox
#include <haxe/ui/containers/VBox.h>
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
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_23354e78db29dc9a_66_new,"haxe.ui.components._NumberStepper.MinBehaviour","new",0x743b4bbc,"haxe.ui.components._NumberStepper.MinBehaviour.new","haxe/ui/components/NumberStepper.hx",66,0xb723c67d)
HX_LOCAL_STACK_FRAME(_hx_pos_23354e78db29dc9a_67_get,"haxe.ui.components._NumberStepper.MinBehaviour","get",0x7435fbf2,"haxe.ui.components._NumberStepper.MinBehaviour.get","haxe/ui/components/NumberStepper.hx",67,0xb723c67d)
HX_LOCAL_STACK_FRAME(_hx_pos_23354e78db29dc9a_72_set,"haxe.ui.components._NumberStepper.MinBehaviour","set",0x743f16fe,"haxe.ui.components._NumberStepper.MinBehaviour.set","haxe/ui/components/NumberStepper.hx",72,0xb723c67d)
namespace haxe{
namespace ui{
namespace components{
namespace _NumberStepper{

void MinBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_23354e78db29dc9a_66_new)
HXDLIN(  66)		super::__construct(component);
            	}

Dynamic MinBehaviour_obj::__CreateEmpty() { return new MinBehaviour_obj; }

void *MinBehaviour_obj::_hx_vtable = 0;

Dynamic MinBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MinBehaviour_obj > _hx_result = new MinBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MinBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x2eef84e4) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2eef84e4;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x6597ec6c;
	}
}

 ::haxe::ui::util::VariantType MinBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_23354e78db29dc9a_67_get)
HXLINE(  68)		 ::haxe::ui::components::Stepper step = this->_component->findComponent(HX_("stepper-step",48,ff,e2,4c),::hx::ClassOf< ::haxe::ui::components::Stepper >(),null(),null()).StaticCast<  ::haxe::ui::components::Stepper >();
HXLINE(  69)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(step->get_min()) ));
            	}


void MinBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_23354e78db29dc9a_72_set)
HXLINE(  73)		 ::haxe::ui::components::Stepper step = this->_component->findComponent(HX_("stepper-step",48,ff,e2,4c),::hx::ClassOf< ::haxe::ui::components::Stepper >(),null(),null()).StaticCast<  ::haxe::ui::components::Stepper >();
HXLINE(  74)		step->set_min(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(value));
            	}



::hx::ObjectPtr< MinBehaviour_obj > MinBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< MinBehaviour_obj > __this = new MinBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< MinBehaviour_obj > MinBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	MinBehaviour_obj *__this = (MinBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MinBehaviour_obj), true, "haxe.ui.components._NumberStepper.MinBehaviour"));
	*(void **)__this = MinBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

MinBehaviour_obj::MinBehaviour_obj()
{
}

::hx::Val MinBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MinBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *MinBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String MinBehaviour_obj_sMemberFields[] = {
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	::String(null()) };

::hx::Class MinBehaviour_obj::__mClass;

void MinBehaviour_obj::__register()
{
	MinBehaviour_obj _hx_dummy;
	MinBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._NumberStepper.MinBehaviour",ca,fd,4b,24);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MinBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MinBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MinBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MinBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _NumberStepper