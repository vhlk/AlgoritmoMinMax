// Generated by Haxe 4.2.0
#include <hxcpp.h>

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
#ifndef INCLUDED_haxe_ui_backend_TimerImpl
#include <haxe/ui/backend/TimerImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ButtonEvents
#include <haxe/ui/components/ButtonEvents.h>
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
#ifndef INCLUDED_haxe_ui_focus_FocusInfo
#include <haxe/ui/focus/FocusInfo.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_FocusManager
#include <haxe/ui/focus/FocusManager.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Timer
#include <haxe/ui/util/Timer.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_4199bc2c55ae9744_357_new,"haxe.ui.components.ButtonEvents","new",0x374de1c3,"haxe.ui.components.ButtonEvents.new","haxe/ui/components/Button.hx",357,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_4199bc2c55ae9744_371_register,"haxe.ui.components.ButtonEvents","register",0xb5dcae20,"haxe.ui.components.ButtonEvents.register","haxe/ui/components/Button.hx",371,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_4199bc2c55ae9744_390_unregister,"haxe.ui.components.ButtonEvents","unregister",0xcabfbeb9,"haxe.ui.components.ButtonEvents.unregister","haxe/ui/components/Button.hx",390,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_4199bc2c55ae9744_398_onMouseOver,"haxe.ui.components.ButtonEvents","onMouseOver",0x749ed95d,"haxe.ui.components.ButtonEvents.onMouseOver","haxe/ui/components/Button.hx",398,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_4199bc2c55ae9744_410_onMouseOut,"haxe.ui.components.ButtonEvents","onMouseOut",0xf630eca5,"haxe.ui.components.ButtonEvents.onMouseOut","haxe/ui/components/Button.hx",410,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_4199bc2c55ae9744_421_onMouseDown,"haxe.ui.components.ButtonEvents","onMouseDown",0x6d54406b,"haxe.ui.components.ButtonEvents.onMouseDown","haxe/ui/components/Button.hx",421,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_4199bc2c55ae9744_439_onMouseDown,"haxe.ui.components.ButtonEvents","onMouseDown",0x6d54406b,"haxe.ui.components.ButtonEvents.onMouseDown","haxe/ui/components/Button.hx",439,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_4199bc2c55ae9744_452_onMouseUp,"haxe.ui.components.ButtonEvents","onMouseUp",0x48476a24,"haxe.ui.components.ButtonEvents.onMouseUp","haxe/ui/components/Button.hx",452,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_4199bc2c55ae9744_477_onMove,"haxe.ui.components.ButtonEvents","onMove",0x4a419a4d,"haxe.ui.components.ButtonEvents.onMove","haxe/ui/components/Button.hx",477,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_4199bc2c55ae9744_493_onRepeatTimer,"haxe.ui.components.ButtonEvents","onRepeatTimer",0x52e3f6ae,"haxe.ui.components.ButtonEvents.onRepeatTimer","haxe/ui/components/Button.hx",493,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_4199bc2c55ae9744_499_onMouseClick,"haxe.ui.components.ButtonEvents","onMouseClick",0xa6f73c1f,"haxe.ui.components.ButtonEvents.onMouseClick","haxe/ui/components/Button.hx",499,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_4199bc2c55ae9744_510_dispatchChanged,"haxe.ui.components.ButtonEvents","dispatchChanged",0x0c56cf3d,"haxe.ui.components.ButtonEvents.dispatchChanged","haxe/ui/components/Button.hx",510,0x45086125)
namespace haxe{
namespace ui{
namespace components{

void ButtonEvents_obj::__construct( ::haxe::ui::components::Button button){
            	HX_STACKFRAME(&_hx_pos_4199bc2c55ae9744_357_new)
HXLINE( 451)		this->_lastScreenEvent = null();
HXLINE( 364)		this->lastMouseEvent = null();
HXLINE( 362)		this->_repeatInterval = 0;
HXLINE( 361)		this->_repeater = false;
HXLINE( 359)		this->_down = false;
HXLINE( 367)		super::__construct(button);
HXLINE( 368)		this->_button = button;
            	}

Dynamic ButtonEvents_obj::__CreateEmpty() { return new ButtonEvents_obj; }

void *ButtonEvents_obj::_hx_vtable = 0;

Dynamic ButtonEvents_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ButtonEvents_obj > _hx_result = new ButtonEvents_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ButtonEvents_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0426c5bf) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0426c5bf;
	} else {
		return inClassId==(int)0x0548a7cc;
	}
}

void ButtonEvents_obj::_hx_register(){
            	HX_STACKFRAME(&_hx_pos_4199bc2c55ae9744_371_register)
HXLINE( 372)		if ((this->hasEvent(HX_("mouseover",f9,1d,34,0b),this->onMouseOver_dyn()) == false)) {
HXLINE( 373)			this->registerEvent(HX_("mouseover",f9,1d,34,0b),this->onMouseOver_dyn(),null());
            		}
HXLINE( 375)		if ((this->hasEvent(HX_("mouseout",89,2f,36,a4),this->onMouseOut_dyn()) == false)) {
HXLINE( 376)			this->registerEvent(HX_("mouseout",89,2f,36,a4),this->onMouseOut_dyn(),null());
            		}
HXLINE( 378)		if ((this->hasEvent(HX_("mousedown",07,85,e9,03),this->onMouseDown_dyn()) == false)) {
HXLINE( 379)			this->registerEvent(HX_("mousedown",07,85,e9,03),this->onMouseDown_dyn(),null());
            		}
HXLINE( 381)		if ((this->hasEvent(HX_("move",11,e3,60,48),this->onMove_dyn()) == false)) {
HXLINE( 382)			this->registerEvent(HX_("move",11,e3,60,48),this->onMove_dyn(),null());
            		}
HXLINE( 385)		if ((this->_button->get_toggle() == true)) {
HXLINE( 386)			this->registerEvent(HX_("click",48,7c,5e,48),this->onMouseClick_dyn(),null());
            		}
            	}


void ButtonEvents_obj::unregister(){
            	HX_STACKFRAME(&_hx_pos_4199bc2c55ae9744_390_unregister)
HXLINE( 391)		this->unregisterEvent(HX_("mouseover",f9,1d,34,0b),this->onMouseOver_dyn());
HXLINE( 392)		this->unregisterEvent(HX_("mouseout",89,2f,36,a4),this->onMouseOut_dyn());
HXLINE( 393)		this->unregisterEvent(HX_("mousedown",07,85,e9,03),this->onMouseDown_dyn());
HXLINE( 394)		this->unregisterEvent(HX_("click",48,7c,5e,48),this->onMouseClick_dyn());
HXLINE( 395)		this->unregisterEvent(HX_("move",11,e3,60,48),this->onMove_dyn());
            	}


void ButtonEvents_obj::onMouseOver( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_4199bc2c55ae9744_398_onMouseOver)
HXLINE( 399)		bool _hx_tmp;
HXDLIN( 399)		if ((this->_button->get_toggle() == true)) {
HXLINE( 399)			_hx_tmp = this->_button->hasClass(HX_(":down",9c,9d,ab,a7));
            		}
            		else {
HXLINE( 399)			_hx_tmp = false;
            		}
HXDLIN( 399)		if (_hx_tmp) {
HXLINE( 400)			return;
            		}
HXLINE( 403)		bool _hx_tmp1;
HXDLIN( 403)		if ((event->buttonDown != false)) {
HXLINE( 403)			_hx_tmp1 = (this->_down == false);
            		}
            		else {
HXLINE( 403)			_hx_tmp1 = true;
            		}
HXDLIN( 403)		if (_hx_tmp1) {
HXLINE( 404)			this->_button->addClass(HX_(":hover",42,d3,17,5c),true,true);
            		}
            		else {
HXLINE( 406)			this->_button->addClass(HX_(":down",9c,9d,ab,a7),true,true);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonEvents_obj,onMouseOver,(void))

void ButtonEvents_obj::onMouseOut( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_4199bc2c55ae9744_410_onMouseOut)
HXLINE( 411)		bool _hx_tmp;
HXDLIN( 411)		if ((this->_button->get_toggle() == true)) {
HXLINE( 411)			_hx_tmp = (this->_button->get_selected() == true);
            		}
            		else {
HXLINE( 411)			_hx_tmp = false;
            		}
HXDLIN( 411)		if (_hx_tmp) {
HXLINE( 412)			return;
            		}
HXLINE( 415)		if ((this->_button->get_remainPressed() == false)) {
HXLINE( 416)			this->_button->removeClass(HX_(":down",9c,9d,ab,a7),true,true);
            		}
HXLINE( 418)		this->_button->removeClass(HX_(":hover",42,d3,17,5c),true,true);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonEvents_obj,onMouseOut,(void))

void ButtonEvents_obj::onMouseDown( ::haxe::ui::events::MouseEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_4199bc2c55ae9744_421_onMouseDown)
HXDLIN( 421)		 ::haxe::ui::components::ButtonEvents _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 422)		bool _hx_tmp;
HXDLIN( 422)		bool _hx_tmp1;
HXDLIN( 422)		if ((this->_button->get_allowFocus() == true)) {
HXLINE( 422)			_hx_tmp1 = ::hx::IsNotNull( ::haxe::ui::focus::FocusManager_obj::get_instance()->get_focusInfo() );
            		}
            		else {
HXLINE( 422)			_hx_tmp1 = false;
            		}
HXDLIN( 422)		if (_hx_tmp1) {
HXLINE( 422)			_hx_tmp = ::hx::IsNotNull( ::haxe::ui::focus::FocusManager_obj::get_instance()->get_focusInfo()->currentFocus );
            		}
            		else {
HXLINE( 422)			_hx_tmp = false;
            		}
HXDLIN( 422)		if (_hx_tmp) {
HXLINE( 423)			::haxe::ui::focus::IFocusable_obj::set_focus(::haxe::ui::focus::FocusManager_obj::get_instance()->get_focusInfo()->currentFocus,false);
            		}
HXLINE( 425)		bool _hx_tmp2;
HXDLIN( 425)		if ((this->_button->get_repeater() == true)) {
HXLINE( 425)			_hx_tmp2 = (this->_repeatInterval == 0);
            		}
            		else {
HXLINE( 425)			_hx_tmp2 = false;
            		}
HXDLIN( 425)		if (_hx_tmp2) {
HXLINE( 426)			int _hx_tmp;
HXDLIN( 426)			if (this->_button->get_easeInRepeater()) {
HXLINE( 426)				_hx_tmp = (this->_button->get_repeatInterval() * 2);
            			}
            			else {
HXLINE( 426)				_hx_tmp = this->_button->get_repeatInterval();
            			}
HXDLIN( 426)			this->_repeatInterval = _hx_tmp;
            		}
HXLINE( 428)		this->_down = true;
HXLINE( 429)		this->_button->addClass(HX_(":down",9c,9d,ab,a7),true,true);
HXLINE( 430)		this->_button->get_screen()->registerEvent(HX_("mouseup",c0,0f,73,c0),this->onMouseUp_dyn(),null());
HXLINE( 431)		bool _hx_tmp3;
HXDLIN( 431)		if ((this->_repeater == true)) {
HXLINE( 431)			int _hx_tmp = this->_repeatInterval;
HXDLIN( 431)			_hx_tmp3 = (_hx_tmp == this->_button->get_repeatInterval());
            		}
            		else {
HXLINE( 431)			_hx_tmp3 = false;
            		}
HXDLIN( 431)		if (_hx_tmp3) {
HXLINE( 432)			this->_repeatTimer =  ::haxe::ui::util::Timer_obj::__alloc( HX_CTX ,this->_repeatInterval,this->onRepeatTimer_dyn());
            		}
            		else {
HXLINE( 433)			if ((this->_button->get_repeater() == true)) {
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::components::ButtonEvents,_gthis, ::haxe::ui::events::MouseEvent,event) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_4199bc2c55ae9744_439_onMouseDown)
HXLINE( 439)					bool _hx_tmp;
HXDLIN( 439)					if ((_gthis->_repeater == true)) {
HXLINE( 439)						_hx_tmp = ::hx::IsNull( _gthis->_repeatTimer );
            					}
            					else {
HXLINE( 439)						_hx_tmp = false;
            					}
HXDLIN( 439)					if (_hx_tmp) {
HXLINE( 440)						bool _hx_tmp;
HXDLIN( 440)						if ((_gthis->_button->get_easeInRepeater() == true)) {
HXLINE( 440)							int _gthis1 = _gthis->_repeatInterval;
HXDLIN( 440)							_hx_tmp = (_gthis1 > _gthis->_button->get_repeatInterval());
            						}
            						else {
HXLINE( 440)							_hx_tmp = false;
            						}
HXDLIN( 440)						if (_hx_tmp) {
HXLINE( 441)							int _gthis1 = _gthis->_repeatInterval;
HXDLIN( 441)							int _gthis2 = _gthis->_repeatInterval;
HXDLIN( 441)							Float _hx_tmp = (( (Float)(_gthis1) ) - (( (Float)((_gthis2 - _gthis->_button->get_repeatInterval())) ) / ( (Float)(2) )));
HXDLIN( 441)							_gthis->_repeatInterval = ::Std_obj::_hx_int(_hx_tmp);
HXLINE( 442)							_gthis->onRepeatTimer();
            						}
HXLINE( 444)						_gthis->onMouseDown(event);
            					}
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE( 434)				if (::hx::IsNotNull( this->_repeatTimer )) {
HXLINE( 435)					this->_repeatTimer->stop();
HXLINE( 436)					this->_repeatTimer = null();
            				}
HXLINE( 438)				::haxe::ui::util::Timer_obj::delay( ::Dynamic(new _hx_Closure_0(_gthis,event)),this->_repeatInterval);
            			}
            		}
HXLINE( 448)		this->_repeater = this->_button->get_repeater();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonEvents_obj,onMouseDown,(void))

void ButtonEvents_obj::onMouseUp( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_4199bc2c55ae9744_452_onMouseUp)
HXLINE( 454)		this->_down = (this->_repeater = false);
HXLINE( 455)		int _hx_tmp;
HXDLIN( 455)		if (this->_button->get_easeInRepeater()) {
HXLINE( 455)			_hx_tmp = (this->_button->get_repeatInterval() * 2);
            		}
            		else {
HXLINE( 455)			_hx_tmp = this->_button->get_repeatInterval();
            		}
HXDLIN( 455)		this->_repeatInterval = _hx_tmp;
HXLINE( 456)		this->_button->get_screen()->unregisterEvent(HX_("mouseup",c0,0f,73,c0),this->onMouseUp_dyn());
HXLINE( 458)		if ((this->_button->get_toggle() == true)) {
HXLINE( 459)			return;
            		}
HXLINE( 462)		this->_lastScreenEvent = event;
HXLINE( 463)		this->_button->removeClass(HX_(":down",9c,9d,ab,a7),true,true);
HXLINE( 464)		bool over = this->_button->hitTest(event->screenX,event->screenY);
HXLINE( 465)		bool _hx_tmp1;
HXDLIN( 465)		if ((event->touchEvent == false)) {
HXLINE( 465)			_hx_tmp1 = (over == true);
            		}
            		else {
HXLINE( 465)			_hx_tmp1 = false;
            		}
HXDLIN( 465)		if (_hx_tmp1) {
HXLINE( 466)			this->_button->addClass(HX_(":hover",42,d3,17,5c),true,true);
            		}
            		else {
HXLINE( 467)			if ((over == false)) {
HXLINE( 468)				this->_button->removeClass(HX_(":hover",42,d3,17,5c),true,true);
            			}
            		}
HXLINE( 471)		if (::hx::IsNotNull( this->_repeatTimer )) {
HXLINE( 472)			this->_repeatTimer->stop();
HXLINE( 473)			this->_repeatTimer = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonEvents_obj,onMouseUp,(void))

void ButtonEvents_obj::onMove( ::haxe::ui::events::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_4199bc2c55ae9744_477_onMove)
HXLINE( 478)		if (::hx::IsNull( this->_lastScreenEvent )) {
HXLINE( 479)			return;
            		}
HXLINE( 482)		bool over = this->_button->hitTest(this->_lastScreenEvent->screenX,this->_lastScreenEvent->screenY);
HXLINE( 483)		bool _hx_tmp;
HXDLIN( 483)		if ((this->_lastScreenEvent->touchEvent == false)) {
HXLINE( 483)			_hx_tmp = (over == true);
            		}
            		else {
HXLINE( 483)			_hx_tmp = false;
            		}
HXDLIN( 483)		if (_hx_tmp) {
HXLINE( 484)			this->_button->addClass(HX_(":hover",42,d3,17,5c),true,true);
            		}
            		else {
HXLINE( 485)			if ((over == false)) {
HXLINE( 486)				this->_button->removeClass(HX_(":hover",42,d3,17,5c),true,true);
            			}
            		}
HXLINE( 489)		this->_lastScreenEvent = null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonEvents_obj,onMove,(void))

void ButtonEvents_obj::onRepeatTimer(){
            	HX_GC_STACKFRAME(&_hx_pos_4199bc2c55ae9744_493_onRepeatTimer)
HXDLIN( 493)		bool _hx_tmp;
HXDLIN( 493)		if (this->_button->hasClass(HX_(":hover",42,d3,17,5c))) {
HXDLIN( 493)			_hx_tmp = (this->_down == true);
            		}
            		else {
HXDLIN( 493)			_hx_tmp = false;
            		}
HXDLIN( 493)		if (_hx_tmp) {
HXLINE( 494)			 ::haxe::ui::events::MouseEvent event =  ::haxe::ui::events::MouseEvent_obj::__alloc( HX_CTX ,HX_("click",48,7c,5e,48));
HXLINE( 495)			this->_button->dispatch(event);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ButtonEvents_obj,onRepeatTimer,(void))

void ButtonEvents_obj::onMouseClick( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_4199bc2c55ae9744_499_onMouseClick)
HXLINE( 500)		 ::haxe::ui::components::Button _hx_tmp = this->_button;
HXDLIN( 500)		_hx_tmp->set_selected(!(this->_button->get_selected()));
HXLINE( 501)		if ((this->_button->get_selected() == false)) {
HXLINE( 502)			this->_button->removeClass(HX_(":down",9c,9d,ab,a7),true,true);
            		}
HXLINE( 504)		if (this->_button->hitTest(event->screenX,event->screenY)) {
HXLINE( 505)			this->_button->addClass(HX_(":hover",42,d3,17,5c),true,true);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonEvents_obj,onMouseClick,(void))

void ButtonEvents_obj::dispatchChanged(){
            	HX_GC_STACKFRAME(&_hx_pos_4199bc2c55ae9744_510_dispatchChanged)
HXDLIN( 510)		 ::haxe::ui::components::Button _hx_tmp = this->_button;
HXDLIN( 510)		_hx_tmp->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ButtonEvents_obj,dispatchChanged,(void))


::hx::ObjectPtr< ButtonEvents_obj > ButtonEvents_obj::__new( ::haxe::ui::components::Button button) {
	::hx::ObjectPtr< ButtonEvents_obj > __this = new ButtonEvents_obj();
	__this->__construct(button);
	return __this;
}

::hx::ObjectPtr< ButtonEvents_obj > ButtonEvents_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::Button button) {
	ButtonEvents_obj *__this = (ButtonEvents_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ButtonEvents_obj), true, "haxe.ui.components.ButtonEvents"));
	*(void **)__this = ButtonEvents_obj::_hx_vtable;
	__this->__construct(button);
	return __this;
}

ButtonEvents_obj::ButtonEvents_obj()
{
}

void ButtonEvents_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ButtonEvents);
	HX_MARK_MEMBER_NAME(_button,"_button");
	HX_MARK_MEMBER_NAME(_down,"_down");
	HX_MARK_MEMBER_NAME(_repeatTimer,"_repeatTimer");
	HX_MARK_MEMBER_NAME(_repeater,"_repeater");
	HX_MARK_MEMBER_NAME(_repeatInterval,"_repeatInterval");
	HX_MARK_MEMBER_NAME(lastMouseEvent,"lastMouseEvent");
	HX_MARK_MEMBER_NAME(_lastScreenEvent,"_lastScreenEvent");
	 ::haxe::ui::events::Events_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ButtonEvents_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_button,"_button");
	HX_VISIT_MEMBER_NAME(_down,"_down");
	HX_VISIT_MEMBER_NAME(_repeatTimer,"_repeatTimer");
	HX_VISIT_MEMBER_NAME(_repeater,"_repeater");
	HX_VISIT_MEMBER_NAME(_repeatInterval,"_repeatInterval");
	HX_VISIT_MEMBER_NAME(lastMouseEvent,"lastMouseEvent");
	HX_VISIT_MEMBER_NAME(_lastScreenEvent,"_lastScreenEvent");
	 ::haxe::ui::events::Events_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ButtonEvents_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_down") ) { return ::hx::Val( _down ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onMove") ) { return ::hx::Val( onMove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_button") ) { return ::hx::Val( _button ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"register") ) { return ::hx::Val( _hx_register_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_repeater") ) { return ::hx::Val( _repeater ); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return ::hx::Val( onMouseUp_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"unregister") ) { return ::hx::Val( unregister_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMouseOut") ) { return ::hx::Val( onMouseOut_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMouseOver") ) { return ::hx::Val( onMouseOver_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return ::hx::Val( onMouseDown_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_repeatTimer") ) { return ::hx::Val( _repeatTimer ); }
		if (HX_FIELD_EQ(inName,"onMouseClick") ) { return ::hx::Val( onMouseClick_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onRepeatTimer") ) { return ::hx::Val( onRepeatTimer_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lastMouseEvent") ) { return ::hx::Val( lastMouseEvent ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_repeatInterval") ) { return ::hx::Val( _repeatInterval ); }
		if (HX_FIELD_EQ(inName,"dispatchChanged") ) { return ::hx::Val( dispatchChanged_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_lastScreenEvent") ) { return ::hx::Val( _lastScreenEvent ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ButtonEvents_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_down") ) { _down=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_button") ) { _button=inValue.Cast<  ::haxe::ui::components::Button >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_repeater") ) { _repeater=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_repeatTimer") ) { _repeatTimer=inValue.Cast<  ::haxe::ui::util::Timer >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lastMouseEvent") ) { lastMouseEvent=inValue.Cast<  ::haxe::ui::events::MouseEvent >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_repeatInterval") ) { _repeatInterval=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_lastScreenEvent") ) { _lastScreenEvent=inValue.Cast<  ::haxe::ui::events::MouseEvent >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ButtonEvents_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_button",91,73,57,48));
	outFields->push(HX_("_down",41,14,7f,f5));
	outFields->push(HX_("_repeatTimer",6b,bc,66,47));
	outFields->push(HX_("_repeater",e7,b3,eb,57));
	outFields->push(HX_("_repeatInterval",5f,68,ca,8e));
	outFields->push(HX_("lastMouseEvent",ab,51,18,07));
	outFields->push(HX_("_lastScreenEvent",d9,f8,65,ba));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ButtonEvents_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::components::Button */ ,(int)offsetof(ButtonEvents_obj,_button),HX_("_button",91,73,57,48)},
	{::hx::fsBool,(int)offsetof(ButtonEvents_obj,_down),HX_("_down",41,14,7f,f5)},
	{::hx::fsObject /*  ::haxe::ui::util::Timer */ ,(int)offsetof(ButtonEvents_obj,_repeatTimer),HX_("_repeatTimer",6b,bc,66,47)},
	{::hx::fsBool,(int)offsetof(ButtonEvents_obj,_repeater),HX_("_repeater",e7,b3,eb,57)},
	{::hx::fsInt,(int)offsetof(ButtonEvents_obj,_repeatInterval),HX_("_repeatInterval",5f,68,ca,8e)},
	{::hx::fsObject /*  ::haxe::ui::events::MouseEvent */ ,(int)offsetof(ButtonEvents_obj,lastMouseEvent),HX_("lastMouseEvent",ab,51,18,07)},
	{::hx::fsObject /*  ::haxe::ui::events::MouseEvent */ ,(int)offsetof(ButtonEvents_obj,_lastScreenEvent),HX_("_lastScreenEvent",d9,f8,65,ba)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ButtonEvents_obj_sStaticStorageInfo = 0;
#endif

static ::String ButtonEvents_obj_sMemberFields[] = {
	HX_("_button",91,73,57,48),
	HX_("_down",41,14,7f,f5),
	HX_("_repeatTimer",6b,bc,66,47),
	HX_("_repeater",e7,b3,eb,57),
	HX_("_repeatInterval",5f,68,ca,8e),
	HX_("lastMouseEvent",ab,51,18,07),
	HX_("register",63,a6,9f,d0),
	HX_("unregister",bc,8d,63,56),
	HX_("onMouseOver",fa,2c,50,18),
	HX_("onMouseOut",a8,bb,d4,81),
	HX_("onMouseDown",08,94,05,11),
	HX_("_lastScreenEvent",d9,f8,65,ba),
	HX_("onMouseUp",81,ac,1d,98),
	HX_("onMove",d0,eb,ea,ea),
	HX_("onRepeatTimer",8b,2b,47,44),
	HX_("onMouseClick",e2,11,6f,3e),
	HX_("dispatchChanged",5a,b5,96,84),
	::String(null()) };

::hx::Class ButtonEvents_obj::__mClass;

void ButtonEvents_obj::__register()
{
	ButtonEvents_obj _hx_dummy;
	ButtonEvents_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.ButtonEvents",51,44,2b,44);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ButtonEvents_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ButtonEvents_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ButtonEvents_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ButtonEvents_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
