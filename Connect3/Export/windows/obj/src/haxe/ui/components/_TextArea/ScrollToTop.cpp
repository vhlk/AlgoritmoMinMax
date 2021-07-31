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
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_VerticalScroll
#include <haxe/ui/components/VerticalScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TextArea_ScrollToTop
#include <haxe/ui/components/_TextArea/ScrollToTop.h>
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
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_ab8e31ef5801bd44_180_new,"haxe.ui.components._TextArea.ScrollToTop","new",0x61affe84,"haxe.ui.components._TextArea.ScrollToTop.new","haxe/ui/components/TextArea.hx",180,0xfe441d7d)
HX_LOCAL_STACK_FRAME(_hx_pos_ab8e31ef5801bd44_181_call,"haxe.ui.components._TextArea.ScrollToTop","call",0x110649fa,"haxe.ui.components._TextArea.ScrollToTop.call","haxe/ui/components/TextArea.hx",181,0xfe441d7d)
namespace haxe{
namespace ui{
namespace components{
namespace _TextArea{

void ScrollToTop_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_ab8e31ef5801bd44_180_new)
HXDLIN( 180)		super::__construct(component);
            	}

Dynamic ScrollToTop_obj::__CreateEmpty() { return new ScrollToTop_obj; }

void *ScrollToTop_obj::_hx_vtable = 0;

Dynamic ScrollToTop_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScrollToTop_obj > _hx_result = new ScrollToTop_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ScrollToTop_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3c5dd90d;
	} else {
		return inClassId==(int)0x6ecefc44;
	}
}

 ::haxe::ui::util::VariantType ScrollToTop_obj::call( ::Dynamic param){
            	HX_STACKFRAME(&_hx_pos_ab8e31ef5801bd44_181_call)
HXLINE( 182)		 ::haxe::ui::components::VerticalScroll vscroll = this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE( 183)		if (::hx::IsNotNull( vscroll )) {
HXLINE( 184)			vscroll->set_pos(( (Float)(0) ));
            		}
HXLINE( 186)		return null();
            	}



::hx::ObjectPtr< ScrollToTop_obj > ScrollToTop_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ScrollToTop_obj > __this = new ScrollToTop_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ScrollToTop_obj > ScrollToTop_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ScrollToTop_obj *__this = (ScrollToTop_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScrollToTop_obj), true, "haxe.ui.components._TextArea.ScrollToTop"));
	*(void **)__this = ScrollToTop_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ScrollToTop_obj::ScrollToTop_obj()
{
}

::hx::Val ScrollToTop_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ScrollToTop_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ScrollToTop_obj_sStaticStorageInfo = 0;
#endif

static ::String ScrollToTop_obj_sMemberFields[] = {
	HX_("call",9e,18,ba,41),
	::String(null()) };

::hx::Class ScrollToTop_obj::__mClass;

void ScrollToTop_obj::__register()
{
	ScrollToTop_obj _hx_dummy;
	ScrollToTop_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._TextArea.ScrollToTop",92,ac,2d,2c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScrollToTop_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScrollToTop_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScrollToTop_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScrollToTop_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _TextArea
