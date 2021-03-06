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
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Range
#include <haxe/ui/components/Range.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Slider_MaxBehaviour
#include <haxe/ui/components/_Slider/MaxBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_df31aa73b4efb3a2_103_new,"haxe.ui.components._Slider.MaxBehaviour","new",0x7411575f,"haxe.ui.components._Slider.MaxBehaviour.new","haxe/ui/components/Slider.hx",103,0x55cb8456)
HX_LOCAL_STACK_FRAME(_hx_pos_df31aa73b4efb3a2_104_validateData,"haxe.ui.components._Slider.MaxBehaviour","validateData",0xc7f27701,"haxe.ui.components._Slider.MaxBehaviour.validateData","haxe/ui/components/Slider.hx",104,0x55cb8456)
namespace haxe{
namespace ui{
namespace components{
namespace _Slider{

void MaxBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_df31aa73b4efb3a2_103_new)
HXDLIN( 103)		super::__construct(component);
            	}

Dynamic MaxBehaviour_obj::__CreateEmpty() { return new MaxBehaviour_obj; }

void *MaxBehaviour_obj::_hx_vtable = 0;

Dynamic MaxBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MaxBehaviour_obj > _hx_result = new MaxBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MaxBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x477e7561 || inClassId==(int)0x7e17fa9f;
	}
}

void MaxBehaviour_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_df31aa73b4efb3a2_104_validateData)
HXLINE( 105)		 ::haxe::ui::components::Range _hx_tmp = this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Range >(),null(),null()).StaticCast<  ::haxe::ui::components::Range >();
HXDLIN( 105)		_hx_tmp->set_max(( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->_value)) ));
HXLINE( 106)		{
HXLINE( 106)			 ::haxe::ui::core::Component _this = this->_component;
HXDLIN( 106)			bool _hx_tmp1;
HXDLIN( 106)			if (::hx::IsNotNull( _this->_layout )) {
HXLINE( 106)				_hx_tmp1 = (_this->_layoutLocked == true);
            			}
            			else {
HXLINE( 106)				_hx_tmp1 = true;
            			}
HXDLIN( 106)			if (!(_hx_tmp1)) {
HXLINE( 106)				_this->invalidateComponent(HX_("layout",aa,ae,b8,58));
            			}
            		}
            	}



::hx::ObjectPtr< MaxBehaviour_obj > MaxBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< MaxBehaviour_obj > __this = new MaxBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< MaxBehaviour_obj > MaxBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	MaxBehaviour_obj *__this = (MaxBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MaxBehaviour_obj), true, "haxe.ui.components._Slider.MaxBehaviour"));
	*(void **)__this = MaxBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

MaxBehaviour_obj::MaxBehaviour_obj()
{
}

::hx::Val MaxBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MaxBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *MaxBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String MaxBehaviour_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class MaxBehaviour_obj::__mClass;

void MaxBehaviour_obj::__register()
{
	MaxBehaviour_obj _hx_dummy;
	MaxBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Slider.MaxBehaviour",ed,bb,e4,ae);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MaxBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MaxBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MaxBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MaxBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Slider
