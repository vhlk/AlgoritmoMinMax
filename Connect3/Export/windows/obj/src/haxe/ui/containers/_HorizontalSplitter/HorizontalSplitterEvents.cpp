// Generated by Haxe 4.2.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Splitter
#include <haxe/ui/containers/Splitter.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_SplitterEvents
#include <haxe/ui/containers/SplitterEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__HorizontalSplitter_HorizontalSplitterEvents
#include <haxe/ui/containers/_HorizontalSplitter/HorizontalSplitterEvents.h>
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
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_events_MouseEvent
#include <haxe/ui/events/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Point
#include <haxe/ui/geom/Point.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_c36d2fc32dbe40fc_20_new,"haxe.ui.containers._HorizontalSplitter.HorizontalSplitterEvents","new",0x1169b544,"haxe.ui.containers._HorizontalSplitter.HorizontalSplitterEvents.new","haxe/ui/containers/HorizontalSplitter.hx",20,0x92d8d9e8)
HX_LOCAL_STACK_FRAME(_hx_pos_c36d2fc32dbe40fc_22_onGripperMouseDown,"haxe.ui.containers._HorizontalSplitter.HorizontalSplitterEvents","onGripperMouseDown",0xb91de937,"haxe.ui.containers._HorizontalSplitter.HorizontalSplitterEvents.onGripperMouseDown","haxe/ui/containers/HorizontalSplitter.hx",22,0x92d8d9e8)
HX_LOCAL_STACK_FRAME(_hx_pos_c36d2fc32dbe40fc_28_handleResize,"haxe.ui.containers._HorizontalSplitter.HorizontalSplitterEvents","handleResize",0x9007de58,"haxe.ui.containers._HorizontalSplitter.HorizontalSplitterEvents.handleResize","haxe/ui/containers/HorizontalSplitter.hx",28,0x92d8d9e8)
namespace haxe{
namespace ui{
namespace containers{
namespace _HorizontalSplitter{

void HorizontalSplitterEvents_obj::__construct( ::haxe::ui::containers::Splitter splitter){
            	HX_STACKFRAME(&_hx_pos_c36d2fc32dbe40fc_20_new)
HXDLIN(  20)		super::__construct(splitter);
            	}

Dynamic HorizontalSplitterEvents_obj::__CreateEmpty() { return new HorizontalSplitterEvents_obj; }

void *HorizontalSplitterEvents_obj::_hx_vtable = 0;

Dynamic HorizontalSplitterEvents_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HorizontalSplitterEvents_obj > _hx_result = new HorizontalSplitterEvents_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool HorizontalSplitterEvents_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3090eba2) {
		if (inClassId<=(int)0x0548a7cc) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0548a7cc;
		} else {
			return inClassId==(int)0x3090eba2;
		}
	} else {
		return inClassId==(int)0x51675034;
	}
}

void HorizontalSplitterEvents_obj::onGripperMouseDown( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_c36d2fc32dbe40fc_22_onGripperMouseDown)
HXDLIN(  22)		this->super::onGripperMouseDown(event);
            	}


void HorizontalSplitterEvents_obj::handleResize( ::haxe::ui::core::Component prev, ::haxe::ui::core::Component next, ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_c36d2fc32dbe40fc_28_handleResize)
HXLINE(  29)		Float delta = (event->screenX - this->_currentOffset->x);
HXLINE(  30)		Float prevCX = prev->set_width((prev->get_width() + delta));
HXLINE(  31)		Float nextCX = next->set_width((next->get_width() - delta));
HXLINE(  32)		Float ucx = this->_splitter->get_layout()->get_usableWidth();
HXLINE(  33)		if (::hx::IsNotNull( prev->get_percentWidth() )) {
HXLINE(  34)			prev->set_percentWidth(((prevCX / ucx) * ( (Float)(100) )));
            		}
            		else {
HXLINE(  36)			prev->set_width(prevCX);
            		}
HXLINE(  39)		if (::hx::IsNotNull( next->get_percentWidth() )) {
HXLINE(  40)			next->set_percentWidth(((nextCX / ucx) * ( (Float)(100) )));
            		}
            		else {
HXLINE(  42)			next->set_width(nextCX);
            		}
            	}



::hx::ObjectPtr< HorizontalSplitterEvents_obj > HorizontalSplitterEvents_obj::__new( ::haxe::ui::containers::Splitter splitter) {
	::hx::ObjectPtr< HorizontalSplitterEvents_obj > __this = new HorizontalSplitterEvents_obj();
	__this->__construct(splitter);
	return __this;
}

::hx::ObjectPtr< HorizontalSplitterEvents_obj > HorizontalSplitterEvents_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::Splitter splitter) {
	HorizontalSplitterEvents_obj *__this = (HorizontalSplitterEvents_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HorizontalSplitterEvents_obj), true, "haxe.ui.containers._HorizontalSplitter.HorizontalSplitterEvents"));
	*(void **)__this = HorizontalSplitterEvents_obj::_hx_vtable;
	__this->__construct(splitter);
	return __this;
}

HorizontalSplitterEvents_obj::HorizontalSplitterEvents_obj()
{
}

::hx::Val HorizontalSplitterEvents_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"handleResize") ) { return ::hx::Val( handleResize_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onGripperMouseDown") ) { return ::hx::Val( onGripperMouseDown_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *HorizontalSplitterEvents_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *HorizontalSplitterEvents_obj_sStaticStorageInfo = 0;
#endif

static ::String HorizontalSplitterEvents_obj_sMemberFields[] = {
	HX_("onGripperMouseDown",9b,ad,0e,ff),
	HX_("handleResize",bc,7f,a7,56),
	::String(null()) };

::hx::Class HorizontalSplitterEvents_obj::__mClass;

void HorizontalSplitterEvents_obj::__register()
{
	HorizontalSplitterEvents_obj _hx_dummy;
	HorizontalSplitterEvents_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._HorizontalSplitter.HorizontalSplitterEvents",52,03,95,99);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HorizontalSplitterEvents_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HorizontalSplitterEvents_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HorizontalSplitterEvents_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HorizontalSplitterEvents_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _HorizontalSplitter