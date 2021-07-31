// Generated by Haxe 4.2.0
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Range
#include <haxe/ui/components/Range.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Slider
#include <haxe/ui/components/Slider.h>
#endif
#ifndef INCLUDED_haxe_ui_components_SliderBuilder
#include <haxe/ui/components/SliderBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Slider_StartBehaviour
#include <haxe/ui/components/_Slider/StartBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_core_IDirectionalComponent
#include <haxe/ui/core/IDirectionalComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_f1e815e3ec26f4f3_43_new,"haxe.ui.components._Slider.StartBehaviour","new",0xf908d3e1,"haxe.ui.components._Slider.StartBehaviour.new","haxe/ui/components/Slider.hx",43,0x55cb8456)
HX_LOCAL_STACK_FRAME(_hx_pos_f1e815e3ec26f4f3_44_validateData,"haxe.ui.components._Slider.StartBehaviour","validateData",0x23fc5a3f,"haxe.ui.components._Slider.StartBehaviour.validateData","haxe/ui/components/Slider.hx",44,0x55cb8456)
namespace haxe{
namespace ui{
namespace components{
namespace _Slider{

void StartBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_f1e815e3ec26f4f3_43_new)
HXDLIN(  43)		super::__construct(component);
            	}

Dynamic StartBehaviour_obj::__CreateEmpty() { return new StartBehaviour_obj; }

void *StartBehaviour_obj::_hx_vtable = 0;

Dynamic StartBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StartBehaviour_obj > _hx_result = new StartBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool StartBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37b9aa84) {
		if (inClassId<=(int)0x2f654dab) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2f654dab;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}

void StartBehaviour_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_f1e815e3ec26f4f3_44_validateData)
HXLINE(  45)		 ::haxe::ui::components::SliderBuilder builder = ::hx::TCast<  ::haxe::ui::components::SliderBuilder >::cast(this->_component->_compositeBuilder);
HXLINE(  46)		if (::hx::IsNull( this->_component->findComponent(HX_("start-thumb",ab,c8,f3,50),null(),null(),null()) )) {
HXLINE(  47)			builder->createThumb(HX_("start-thumb",ab,c8,f3,50));
            		}
HXLINE(  50)		 ::haxe::ui::components::Slider slider = ::hx::TCast<  ::haxe::ui::components::Slider >::cast(this->_component);
HXLINE(  51)		bool _hx_tmp;
HXDLIN(  51)		if (::hx::IsNotNull( this->_value )) {
HXLINE(  51)			 ::haxe::ui::util::VariantType _hx_tmp1 = this->_value;
HXDLIN(  51)			_hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::lt(_hx_tmp1,::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(slider->get_min()));
            		}
            		else {
HXLINE(  51)			_hx_tmp = false;
            		}
HXDLIN(  51)		if (_hx_tmp) {
HXLINE(  52)			this->_value = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(slider->get_min());
            		}
HXLINE(  55)		bool _hx_tmp1;
HXDLIN(  55)		if (::hx::IsNotNull( this->_value )) {
HXLINE(  55)			 ::haxe::ui::util::VariantType _hx_tmp = this->_value;
HXDLIN(  55)			_hx_tmp1 = ::haxe::ui::util::_Variant::Variant_Impl__obj::gt(_hx_tmp,::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(slider->get_max()));
            		}
            		else {
HXLINE(  55)			_hx_tmp1 = false;
            		}
HXDLIN(  55)		if (_hx_tmp1) {
HXLINE(  56)			this->_value = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(slider->get_max());
            		}
HXLINE(  59)		if (::hx::IsNotNull( slider->get_precision() )) {
HXLINE(  60)			Float v = ( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->_value)) );
HXDLIN(  60)			int precision = ( (int)(slider->get_precision()) );
HXDLIN(  60)			this->_value = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat((( (Float)(::Math_obj::round((v * ::Math_obj::pow(( (Float)(10) ),( (Float)(precision) ))))) ) / ::Math_obj::pow(( (Float)(10) ),( (Float)(precision) ))));
            		}
HXLINE(  63)		 ::haxe::ui::components::Range _hx_tmp2 = this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Range >(),null(),null()).StaticCast<  ::haxe::ui::components::Range >();
HXDLIN(  63)		_hx_tmp2->set_start(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->_value));
HXLINE(  64)		{
HXLINE(  64)			 ::haxe::ui::core::Component _this = this->_component;
HXDLIN(  64)			bool _hx_tmp3;
HXDLIN(  64)			if (::hx::IsNotNull( _this->_layout )) {
HXLINE(  64)				_hx_tmp3 = (_this->_layoutLocked == true);
            			}
            			else {
HXLINE(  64)				_hx_tmp3 = true;
            			}
HXDLIN(  64)			if (!(_hx_tmp3)) {
HXLINE(  64)				_this->invalidateComponent(HX_("layout",aa,ae,b8,58));
            			}
            		}
            	}



::hx::ObjectPtr< StartBehaviour_obj > StartBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< StartBehaviour_obj > __this = new StartBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< StartBehaviour_obj > StartBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	StartBehaviour_obj *__this = (StartBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StartBehaviour_obj), true, "haxe.ui.components._Slider.StartBehaviour"));
	*(void **)__this = StartBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

StartBehaviour_obj::StartBehaviour_obj()
{
}

::hx::Val StartBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *StartBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *StartBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String StartBehaviour_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class StartBehaviour_obj::__mClass;

void StartBehaviour_obj::__register()
{
	StartBehaviour_obj _hx_dummy;
	StartBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Slider.StartBehaviour",6f,4f,7f,1d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StartBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StartBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StartBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StartBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Slider
