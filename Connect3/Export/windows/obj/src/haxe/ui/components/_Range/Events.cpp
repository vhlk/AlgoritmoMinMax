// Generated by Haxe 4.2.0
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
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
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenImpl
#include <haxe/ui/backend/ScreenImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Progress
#include <haxe/ui/components/Progress.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Range
#include <haxe/ui/components/Range.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Range_Events
#include <haxe/ui/components/_Range/Events.h>
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
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
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
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Point
#include <haxe/ui/geom/Point.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_5c81c8ff0e2d9b0c_133_new,"haxe.ui.components._Range.Events","new",0x44a456f5,"haxe.ui.components._Range.Events.new","haxe/ui/components/Range.hx",133,0x313cba28)
HX_LOCAL_STACK_FRAME(_hx_pos_5c81c8ff0e2d9b0c_140_register,"haxe.ui.components._Range.Events","register",0x4fd623ae,"haxe.ui.components._Range.Events.register","haxe/ui/components/Range.hx",140,0x313cba28)
HX_LOCAL_STACK_FRAME(_hx_pos_5c81c8ff0e2d9b0c_144_unregister,"haxe.ui.components._Range.Events","unregister",0xee2c33c7,"haxe.ui.components._Range.Events.unregister","haxe/ui/components/Range.hx",144,0x313cba28)
HX_LOCAL_STACK_FRAME(_hx_pos_5c81c8ff0e2d9b0c_147_onMouseDown,"haxe.ui.components._Range.Events","onMouseDown",0x48ce379d,"haxe.ui.components._Range.Events.onMouseDown","haxe/ui/components/Range.hx",147,0x313cba28)
HX_LOCAL_STACK_FRAME(_hx_pos_5c81c8ff0e2d9b0c_156_onScreenMouseUp,"haxe.ui.components._Range.Events","onScreenMouseUp",0xbc2b5f4a,"haxe.ui.components._Range.Events.onScreenMouseUp","haxe/ui/components/Range.hx",156,0x313cba28)
HX_LOCAL_STACK_FRAME(_hx_pos_5c81c8ff0e2d9b0c_161_onScreenMouseMove,"haxe.ui.components._Range.Events","onScreenMouseMove",0x9fef35c0,"haxe.ui.components._Range.Events.onScreenMouseMove","haxe/ui/components/Range.hx",161,0x313cba28)
HX_LOCAL_STACK_FRAME(_hx_pos_5c81c8ff0e2d9b0c_167_applyPos,"haxe.ui.components._Range.Events","applyPos",0xa42ea611,"haxe.ui.components._Range.Events.applyPos","haxe/ui/components/Range.hx",167,0x313cba28)
namespace haxe{
namespace ui{
namespace components{
namespace _Range{

void Events_obj::__construct( ::haxe::ui::components::Range range){
            	HX_STACKFRAME(&_hx_pos_5c81c8ff0e2d9b0c_133_new)
HXLINE( 134)		super::__construct(range);
HXLINE( 135)		this->_range = range;
HXLINE( 136)		this->_hx_register();
            	}

Dynamic Events_obj::__CreateEmpty() { return new Events_obj; }

void *Events_obj::_hx_vtable = 0;

Dynamic Events_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Events_obj > _hx_result = new Events_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Events_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0548a7cc) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0548a7cc;
	} else {
		return inClassId==(int)0x3270e8cb;
	}
}

void Events_obj::_hx_register(){
            	HX_STACKFRAME(&_hx_pos_5c81c8ff0e2d9b0c_140_register)
HXDLIN( 140)		this->_range->registerEvent(HX_("mousedown",07,85,e9,03),this->onMouseDown_dyn(),null());
            	}


void Events_obj::unregister(){
            	HX_STACKFRAME(&_hx_pos_5c81c8ff0e2d9b0c_144_unregister)
HXDLIN( 144)		this->_range->unregisterEvent(HX_("mousedown",07,85,e9,03),this->onMouseDown_dyn());
            	}


void Events_obj::onMouseDown( ::haxe::ui::events::MouseEvent e){
            	HX_GC_STACKFRAME(&_hx_pos_5c81c8ff0e2d9b0c_147_onMouseDown)
HXLINE( 148)		 ::Dynamic pt = e->get_localX();
HXDLIN( 148)		 ::haxe::ui::geom::Point pt1 =  ::haxe::ui::geom::Point_obj::__alloc( HX_CTX ,pt,e->get_localY());
HXLINE( 149)		Float pos = this->_range->posFromCoord(pt1);
HXLINE( 150)		this->applyPos(pos);
HXLINE( 152)		::haxe::ui::core::Screen_obj::get_instance()->registerEvent(HX_("mouseup",c0,0f,73,c0),this->onScreenMouseUp_dyn(),null());
HXLINE( 153)		::haxe::ui::core::Screen_obj::get_instance()->registerEvent(HX_("mousemove",b6,6f,dc,09),this->onScreenMouseMove_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onMouseDown,(void))

void Events_obj::onScreenMouseUp( ::haxe::ui::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_5c81c8ff0e2d9b0c_156_onScreenMouseUp)
HXLINE( 157)		::haxe::ui::core::Screen_obj::get_instance()->unregisterEvent(HX_("mouseup",c0,0f,73,c0),this->onScreenMouseUp_dyn());
HXLINE( 158)		::haxe::ui::core::Screen_obj::get_instance()->unregisterEvent(HX_("mousemove",b6,6f,dc,09),this->onScreenMouseMove_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onScreenMouseUp,(void))

void Events_obj::onScreenMouseMove( ::haxe::ui::events::MouseEvent e){
            	HX_GC_STACKFRAME(&_hx_pos_5c81c8ff0e2d9b0c_161_onScreenMouseMove)
HXLINE( 162)		Float e1 = e->screenX;
HXDLIN( 162)		Float pt = (e1 - this->_range->get_screenLeft());
HXDLIN( 162)		Float e2 = e->screenY;
HXDLIN( 162)		 ::haxe::ui::geom::Point pt1 =  ::haxe::ui::geom::Point_obj::__alloc( HX_CTX ,pt,(e2 - this->_range->get_screenTop()));
HXLINE( 163)		Float pos = this->_range->posFromCoord(pt1);
HXLINE( 164)		this->applyPos(pos);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onScreenMouseMove,(void))

void Events_obj::applyPos(Float pos){
            	HX_STACKFRAME(&_hx_pos_5c81c8ff0e2d9b0c_167_applyPos)
HXLINE( 168)		int precision = this->_range->get_precision();
HXDLIN( 168)		pos = (( (Float)(::Math_obj::round((pos * ::Math_obj::pow(( (Float)(10) ),( (Float)(precision) ))))) ) / ::Math_obj::pow(( (Float)(10) ),( (Float)(precision) )));
HXLINE( 169)		if ((this->_range->get_step() > 0)) {
HXLINE( 170)			Float pos1 = ::Math_obj::fceil((pos / this->_range->get_step()));
HXDLIN( 170)			pos = (pos1 * this->_range->get_step());
            		}
HXLINE( 173)		if (::Std_obj::isOfType(this->_range,::hx::ClassOf< ::haxe::ui::components::Progress >())) {
HXLINE( 174)			::hx::TCast<  ::haxe::ui::components::Progress >::cast(this->_range)->set_pos(pos);
HXLINE( 175)			return;
            		}
HXLINE( 178)		Float d1 = this->_range->get_end();
HXDLIN( 178)		Float d11 = (d1 - ( (Float)(this->_range->get_start()) ));
HXLINE( 179)		Float d2 = (pos - ( (Float)(this->_range->get_start()) ));
HXLINE( 181)		if ((d2 < (d11 / ( (Float)(2) )))) {
HXLINE( 182)			this->_range->set_start(pos);
            		}
            		else {
HXLINE( 183)			if ((d2 >= (d11 / ( (Float)(2) )))) {
HXLINE( 184)				this->_range->set_end(pos);
            			}
            			else {
HXLINE( 185)				if (::hx::IsGreater( pos,this->_range->get_start() )) {
HXLINE( 186)					this->_range->set_end(pos);
            				}
            				else {
HXLINE( 187)					if ((pos < this->_range->get_end())) {
HXLINE( 188)						this->_range->set_start(pos);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,applyPos,(void))


::hx::ObjectPtr< Events_obj > Events_obj::__new( ::haxe::ui::components::Range range) {
	::hx::ObjectPtr< Events_obj > __this = new Events_obj();
	__this->__construct(range);
	return __this;
}

::hx::ObjectPtr< Events_obj > Events_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::Range range) {
	Events_obj *__this = (Events_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Events_obj), true, "haxe.ui.components._Range.Events"));
	*(void **)__this = Events_obj::_hx_vtable;
	__this->__construct(range);
	return __this;
}

Events_obj::Events_obj()
{
}

void Events_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Events);
	HX_MARK_MEMBER_NAME(_range,"_range");
	 ::haxe::ui::events::Events_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Events_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_range,"_range");
	 ::haxe::ui::events::Events_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Events_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_range") ) { return ::hx::Val( _range ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"register") ) { return ::hx::Val( _hx_register_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyPos") ) { return ::hx::Val( applyPos_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"unregister") ) { return ::hx::Val( unregister_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return ::hx::Val( onMouseDown_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onScreenMouseUp") ) { return ::hx::Val( onScreenMouseUp_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onScreenMouseMove") ) { return ::hx::Val( onScreenMouseMove_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Events_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_range") ) { _range=inValue.Cast<  ::haxe::ui::components::Range >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Events_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_range",fe,ec,06,e0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Events_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::components::Range */ ,(int)offsetof(Events_obj,_range),HX_("_range",fe,ec,06,e0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Events_obj_sStaticStorageInfo = 0;
#endif

static ::String Events_obj_sMemberFields[] = {
	HX_("_range",fe,ec,06,e0),
	HX_("register",63,a6,9f,d0),
	HX_("unregister",bc,8d,63,56),
	HX_("onMouseDown",08,94,05,11),
	HX_("onScreenMouseUp",35,cd,20,e5),
	HX_("onScreenMouseMove",6b,34,8c,03),
	HX_("applyPos",c6,28,f8,24),
	::String(null()) };

::hx::Class Events_obj::__mClass;

void Events_obj::__register()
{
	Events_obj _hx_dummy;
	Events_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Range.Events",83,b8,ae,0e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Events_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Events_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Events_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Events_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Range
