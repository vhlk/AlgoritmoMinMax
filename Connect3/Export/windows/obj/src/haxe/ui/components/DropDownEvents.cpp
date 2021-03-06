// Generated by Haxe 4.2.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_Toolkit
#include <haxe/ui/Toolkit.h>
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
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ButtonBuilder
#include <haxe/ui/components/ButtonBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ButtonEvents
#include <haxe/ui/components/ButtonEvents.h>
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
#ifndef INCLUDED_haxe_ui_components_IDropDownHandler
#include <haxe/ui/components/IDropDownHandler.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
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
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_d600fe9af254ec13_475_new,"haxe.ui.components.DropDownEvents","new",0xf4f3fa42,"haxe.ui.components.DropDownEvents.new","haxe/ui/components/DropDown.hx",475,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_d600fe9af254ec13_483_register,"haxe.ui.components.DropDownEvents","register",0x16726941,"haxe.ui.components.DropDownEvents.register","haxe/ui/components/DropDown.hx",483,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_d600fe9af254ec13_488_unregister,"haxe.ui.components.DropDownEvents","unregister",0xc893441a,"haxe.ui.components.DropDownEvents.unregister","haxe/ui/components/DropDown.hx",488,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_d600fe9af254ec13_493_onClick,"haxe.ui.components.DropDownEvents","onClick",0x3193dd8b,"haxe.ui.components.DropDownEvents.onClick","haxe/ui/components/DropDown.hx",493,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_d600fe9af254ec13_502_onMouseClick,"haxe.ui.components.DropDownEvents","onMouseClick",0x64bf9bc0,"haxe.ui.components.DropDownEvents.onMouseClick","haxe/ui/components/DropDown.hx",502,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_d600fe9af254ec13_508_showDropDown,"haxe.ui.components.DropDownEvents","showDropDown",0x39e6802c,"haxe.ui.components.DropDownEvents.showDropDown","haxe/ui/components/DropDown.hx",508,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_d600fe9af254ec13_576_hideDropDown,"haxe.ui.components.DropDownEvents","hideDropDown",0xcf5eacf1,"haxe.ui.components.DropDownEvents.hideDropDown","haxe/ui/components/DropDown.hx",576,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_d600fe9af254ec13_596_onScreenMouseDown,"haxe.ui.components.DropDownEvents","onScreenMouseDown",0x9cf23b1e,"haxe.ui.components.DropDownEvents.onScreenMouseDown","haxe/ui/components/DropDown.hx",596,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_d600fe9af254ec13_610_dispatchChanged,"haxe.ui.components.DropDownEvents","dispatchChanged",0x513f2a3c,"haxe.ui.components.DropDownEvents.dispatchChanged","haxe/ui/components/DropDown.hx",610,0x145b8c86)
namespace haxe{
namespace ui{
namespace components{

void DropDownEvents_obj::__construct( ::haxe::ui::components::DropDown dropdown){
            	HX_STACKFRAME(&_hx_pos_d600fe9af254ec13_475_new)
HXLINE( 507)		this->_wrapper = null();
HXLINE( 506)		this->_overlay = null();
HXLINE( 479)		super::__construct(dropdown);
HXLINE( 480)		this->_dropdown = dropdown;
            	}

Dynamic DropDownEvents_obj::__CreateEmpty() { return new DropDownEvents_obj; }

void *DropDownEvents_obj::_hx_vtable = 0;

Dynamic DropDownEvents_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DropDownEvents_obj > _hx_result = new DropDownEvents_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DropDownEvents_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0548a7cc) {
		if (inClassId<=(int)0x0426c5bf) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0426c5bf;
		} else {
			return inClassId==(int)0x0548a7cc;
		}
	} else {
		return inClassId==(int)0x533436da;
	}
}

void DropDownEvents_obj::_hx_register(){
            	HX_STACKFRAME(&_hx_pos_d600fe9af254ec13_483_register)
HXLINE( 484)		this->super::_hx_register();
HXLINE( 485)		this->registerEvent(HX_("mousedown",07,85,e9,03),this->onClick_dyn(),null());
            	}


void DropDownEvents_obj::unregister(){
            	HX_STACKFRAME(&_hx_pos_d600fe9af254ec13_488_unregister)
HXLINE( 489)		this->super::unregister();
HXLINE( 490)		this->unregisterEvent(HX_("mousedown",07,85,e9,03),this->onClick_dyn());
            	}


void DropDownEvents_obj::onClick( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_d600fe9af254ec13_493_onClick)
HXLINE( 494)		 ::haxe::ui::components::DropDown _hx_tmp = this->_dropdown;
HXDLIN( 494)		_hx_tmp->set_selected(!(this->_dropdown->get_selected()));
HXLINE( 495)		if ((this->_dropdown->get_selected() == true)) {
HXLINE( 496)			this->showDropDown();
            		}
            		else {
HXLINE( 498)			this->hideDropDown();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDownEvents_obj,onClick,(void))

void DropDownEvents_obj::onMouseClick( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_d600fe9af254ec13_502_onMouseClick)
            	}


void DropDownEvents_obj::showDropDown(){
            	HX_GC_STACKFRAME(&_hx_pos_d600fe9af254ec13_508_showDropDown)
HXLINE( 509)		::Dynamic handler = ::hx::TCast<  ::haxe::ui::components::DropDownBuilder >::cast(this->_dropdown->_compositeBuilder)->get_handler();
HXLINE( 510)		if (::hx::IsNull( handler )) {
HXLINE( 511)			return;
            		}
HXLINE( 514)		if (::hx::IsNull( this->_wrapper )) {
HXLINE( 515)			this->_wrapper =  ::haxe::ui::containers::Box_obj::__alloc( HX_CTX );
HXLINE( 516)			this->_wrapper->addClass(HX_("popup",2c,0a,95,c6),null(),null());
HXLINE( 517)			this->_wrapper->addClass(HX_("dropdown-popup",b0,9d,cf,cb),null(),null());
HXLINE( 518)			 ::haxe::ui::containers::Box _hx_tmp = this->_wrapper;
HXDLIN( 518)			_hx_tmp->set_styleNames(this->_dropdown->get_handlerStyleNames());
HXLINE( 519)			 ::haxe::ui::containers::Box _hx_tmp1 = this->_wrapper;
HXDLIN( 519)			_hx_tmp1->addComponent(::haxe::ui::components::IDropDownHandler_obj::get_component(handler));
HXLINE( 521)			 ::haxe::ui::core::Component filler =  ::haxe::ui::core::Component_obj::__alloc( HX_CTX );
HXLINE( 522)			filler->set_horizontalAlign(HX_("right",dc,0b,64,e9));
HXLINE( 523)			filler->set_includeInLayout(false);
HXLINE( 524)			filler->addClass(HX_("dropdown-filler",ac,8d,35,13),null(),null());
HXLINE( 525)			filler->set_id(HX_("dropdown-filler",ac,8d,35,13));
HXLINE( 526)			this->_wrapper->addComponent(filler);
            		}
HXLINE( 529)		 ::haxe::ui::geom::Point componentOffset = this->_dropdown->getComponentOffset();
HXLINE( 531)		bool _hx_tmp;
HXDLIN( 531)		if (::hx::IsNotNull( this->_dropdown->get_style()->mode )) {
HXLINE( 531)			_hx_tmp = (this->_dropdown->get_style()->mode == HX_("mobile",62,ac,77,bf));
            		}
            		else {
HXLINE( 531)			_hx_tmp = false;
            		}
HXDLIN( 531)		if (_hx_tmp) {
HXLINE( 532)			if (::hx::IsNull( this->_overlay )) {
HXLINE( 533)				this->_overlay =  ::haxe::ui::core::Component_obj::__alloc( HX_CTX );
HXLINE( 534)				this->_overlay->set_id(HX_("modal-background",4e,93,38,6c));
HXLINE( 535)				this->_overlay->addClass(HX_("modal-background",4e,93,38,6c),null(),null());
HXLINE( 536)				 ::haxe::ui::core::Component _hx_tmp = this->_overlay;
HXDLIN( 536)				_hx_tmp->set_percentWidth(this->_overlay->set_percentHeight(100));
            			}
HXLINE( 538)			::haxe::ui::core::Screen_obj::get_instance()->addComponent(this->_overlay);
HXLINE( 540)			::haxe::ui::components::IDropDownHandler_obj::prepare(handler,this->_wrapper);
HXLINE( 541)			::haxe::ui::core::Screen_obj::get_instance()->addComponent(this->_wrapper);
HXLINE( 542)			 ::haxe::ui::containers::Box _hx_tmp = this->_wrapper;
HXDLIN( 542)			Float _hx_tmp1 = (::haxe::ui::core::Screen_obj::get_instance()->get_width() / ( (Float)(2) ));
HXDLIN( 542)			_hx_tmp->set_left((_hx_tmp1 - (this->_wrapper->get_actualComponentWidth() / ( (Float)(2) ))));
HXLINE( 543)			 ::haxe::ui::containers::Box _hx_tmp2 = this->_wrapper;
HXDLIN( 543)			Float _hx_tmp3 = (::haxe::ui::core::Screen_obj::get_instance()->get_height() / ( (Float)(2) ));
HXDLIN( 543)			_hx_tmp2->set_top((_hx_tmp3 - (this->_wrapper->get_actualComponentHeight() / ( (Float)(2) ))));
            		}
            		else {
HXLINE( 545)			 ::haxe::ui::containers::Box _hx_tmp = this->_wrapper;
HXDLIN( 545)			Float _hx_tmp1 = this->_dropdown->get_screenLeft();
HXDLIN( 545)			_hx_tmp->set_left((_hx_tmp1 + componentOffset->x));
HXLINE( 546)			 ::haxe::ui::containers::Box _hx_tmp2 = this->_wrapper;
HXDLIN( 546)			Float _hx_tmp3 = this->_dropdown->get_screenTop();
HXDLIN( 546)			Float _hx_tmp4 = this->_dropdown->get_actualComponentHeight();
HXDLIN( 546)			Float _hx_tmp5 = (_hx_tmp3 + (_hx_tmp4 - ::haxe::ui::Toolkit_obj::get_scaleY()));
HXDLIN( 546)			_hx_tmp2->set_top((_hx_tmp5 + componentOffset->y));
HXLINE( 547)			::haxe::ui::core::Screen_obj::get_instance()->addComponent(this->_wrapper);
HXLINE( 548)			::haxe::ui::components::IDropDownHandler_obj::prepare(handler,this->_wrapper);
HXLINE( 549)			this->_wrapper->syncComponentValidation(null());
HXLINE( 551)			Float cx = this->_wrapper->get_width();
HXDLIN( 551)			Float cx1 = (cx - this->_dropdown->get_width());
HXLINE( 552)			 ::haxe::ui::core::Component filler = this->_wrapper->findComponent(HX_("dropdown-filler",ac,8d,35,13),null(),false,null()).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 553)			bool _hx_tmp6;
HXDLIN( 553)			if ((cx1 > 0)) {
HXLINE( 553)				_hx_tmp6 = ::hx::IsNotNull( filler );
            			}
            			else {
HXLINE( 553)				_hx_tmp6 = false;
            			}
HXDLIN( 553)			if (_hx_tmp6) {
HXLINE( 554)				this->_wrapper->addClass(HX_("dropdown-popup-expanded",b6,b2,45,af),null(),null());
HXLINE( 555)				cx1 = (cx1 + 2);
HXLINE( 556)				filler->set_width(cx1);
HXLINE( 557)				filler->set_left((this->_wrapper->get_width() - cx1));
HXLINE( 558)				filler->set_hidden(false);
            			}
            			else {
HXLINE( 559)				if (::hx::IsNotNull( filler )) {
HXLINE( 560)					filler->set_hidden(true);
HXLINE( 561)					this->_wrapper->removeClass(HX_("dropdown-popup-expanded",b6,b2,45,af),null(),null());
            				}
            			}
HXLINE( 564)			Float _hx_tmp7 = this->_wrapper->get_screenLeft();
HXDLIN( 564)			Float _hx_tmp8 = (_hx_tmp7 + this->_wrapper->get_actualComponentWidth());
HXDLIN( 564)			if ((_hx_tmp8 > ::haxe::ui::core::Screen_obj::get_instance()->get_width())) {
HXLINE( 565)				 ::haxe::ui::containers::Box _hx_tmp = this->_wrapper;
HXDLIN( 565)				Float _hx_tmp1 = this->_wrapper->get_screenLeft();
HXDLIN( 565)				Float _hx_tmp2 = (_hx_tmp1 - this->_wrapper->get_actualComponentWidth());
HXDLIN( 565)				_hx_tmp->set_left((_hx_tmp2 + this->_dropdown->get_actualComponentWidth()));
            			}
HXLINE( 567)			Float _hx_tmp9 = this->_wrapper->get_screenTop();
HXDLIN( 567)			Float _hx_tmp10 = (_hx_tmp9 + this->_wrapper->get_actualComponentHeight());
HXDLIN( 567)			if ((_hx_tmp10 > ::haxe::ui::core::Screen_obj::get_instance()->get_height())) {
HXLINE( 568)				 ::haxe::ui::containers::Box _hx_tmp = this->_wrapper;
HXDLIN( 568)				Float _hx_tmp1 = this->_dropdown->get_screenTop();
HXDLIN( 568)				_hx_tmp->set_top((_hx_tmp1 - this->_wrapper->get_actualComponentHeight()));
            			}
            		}
HXLINE( 572)		::haxe::ui::core::Screen_obj::get_instance()->registerEvent(HX_("mousedown",07,85,e9,03),this->onScreenMouseDown_dyn(),null());
HXLINE( 573)		::haxe::ui::core::Screen_obj::get_instance()->registerEvent(HX_("rightmousedown",ab,1d,2b,41),this->onScreenMouseDown_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDownEvents_obj,showDropDown,(void))

void DropDownEvents_obj::hideDropDown(){
            	HX_STACKFRAME(&_hx_pos_d600fe9af254ec13_576_hideDropDown)
HXLINE( 577)		::Dynamic handler = ::hx::TCast<  ::haxe::ui::components::DropDownBuilder >::cast(this->_dropdown->_compositeBuilder)->get_handler();
HXLINE( 578)		if (::hx::IsNull( handler )) {
HXLINE( 579)			return;
            		}
HXLINE( 582)		if (::hx::IsNotNull( this->_overlay )) {
HXLINE( 583)			::haxe::ui::core::Screen_obj::get_instance()->removeComponent(this->_overlay);
HXLINE( 584)			this->_overlay = null();
            		}
HXLINE( 587)		this->_dropdown->set_selected(false);
HXLINE( 589)		if (::hx::IsNotNull( this->_wrapper )) {
HXLINE( 590)			::haxe::ui::core::Screen_obj::get_instance()->removeComponent(this->_wrapper);
            		}
HXLINE( 592)		::haxe::ui::core::Screen_obj::get_instance()->unregisterEvent(HX_("mousedown",07,85,e9,03),this->onScreenMouseDown_dyn());
HXLINE( 593)		::haxe::ui::core::Screen_obj::get_instance()->unregisterEvent(HX_("rightmousedown",ab,1d,2b,41),this->onScreenMouseDown_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDownEvents_obj,hideDropDown,(void))

void DropDownEvents_obj::onScreenMouseDown( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_d600fe9af254ec13_596_onScreenMouseDown)
HXLINE( 597)		::Dynamic handler = ::hx::TCast<  ::haxe::ui::components::DropDownBuilder >::cast(this->_dropdown->_compositeBuilder)->get_handler();
HXLINE( 598)		if ((::haxe::ui::components::IDropDownHandler_obj::get_component(handler)->hitTest(event->screenX,event->screenY) == true)) {
HXLINE( 599)			return;
            		}
HXLINE( 601)		 ::haxe::ui::geom::Point componentOffset = this->_dropdown->getComponentOffset();
HXLINE( 602)		if ((this->_dropdown->hitTest((event->screenX - componentOffset->x),(event->screenY - componentOffset->y)) == true)) {
HXLINE( 603)			return;
            		}
HXLINE( 606)		this->hideDropDown();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDownEvents_obj,onScreenMouseDown,(void))

void DropDownEvents_obj::dispatchChanged(){
            	HX_STACKFRAME(&_hx_pos_d600fe9af254ec13_610_dispatchChanged)
            	}



::hx::ObjectPtr< DropDownEvents_obj > DropDownEvents_obj::__new( ::haxe::ui::components::DropDown dropdown) {
	::hx::ObjectPtr< DropDownEvents_obj > __this = new DropDownEvents_obj();
	__this->__construct(dropdown);
	return __this;
}

::hx::ObjectPtr< DropDownEvents_obj > DropDownEvents_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::DropDown dropdown) {
	DropDownEvents_obj *__this = (DropDownEvents_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DropDownEvents_obj), true, "haxe.ui.components.DropDownEvents"));
	*(void **)__this = DropDownEvents_obj::_hx_vtable;
	__this->__construct(dropdown);
	return __this;
}

DropDownEvents_obj::DropDownEvents_obj()
{
}

void DropDownEvents_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DropDownEvents);
	HX_MARK_MEMBER_NAME(_dropdown,"_dropdown");
	HX_MARK_MEMBER_NAME(_overlay,"_overlay");
	HX_MARK_MEMBER_NAME(_wrapper,"_wrapper");
	 ::haxe::ui::components::ButtonEvents_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DropDownEvents_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_dropdown,"_dropdown");
	HX_VISIT_MEMBER_NAME(_overlay,"_overlay");
	HX_VISIT_MEMBER_NAME(_wrapper,"_wrapper");
	 ::haxe::ui::components::ButtonEvents_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DropDownEvents_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"onClick") ) { return ::hx::Val( onClick_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"register") ) { return ::hx::Val( _hx_register_dyn() ); }
		if (HX_FIELD_EQ(inName,"_overlay") ) { return ::hx::Val( _overlay ); }
		if (HX_FIELD_EQ(inName,"_wrapper") ) { return ::hx::Val( _wrapper ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_dropdown") ) { return ::hx::Val( _dropdown ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"unregister") ) { return ::hx::Val( unregister_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onMouseClick") ) { return ::hx::Val( onMouseClick_dyn() ); }
		if (HX_FIELD_EQ(inName,"showDropDown") ) { return ::hx::Val( showDropDown_dyn() ); }
		if (HX_FIELD_EQ(inName,"hideDropDown") ) { return ::hx::Val( hideDropDown_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dispatchChanged") ) { return ::hx::Val( dispatchChanged_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onScreenMouseDown") ) { return ::hx::Val( onScreenMouseDown_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DropDownEvents_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_overlay") ) { _overlay=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_wrapper") ) { _wrapper=inValue.Cast<  ::haxe::ui::containers::Box >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_dropdown") ) { _dropdown=inValue.Cast<  ::haxe::ui::components::DropDown >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DropDownEvents_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_dropdown",70,6b,c5,44));
	outFields->push(HX_("_overlay",11,9d,c8,e2));
	outFields->push(HX_("_wrapper",d4,2e,1d,47));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DropDownEvents_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::components::DropDown */ ,(int)offsetof(DropDownEvents_obj,_dropdown),HX_("_dropdown",70,6b,c5,44)},
	{::hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(DropDownEvents_obj,_overlay),HX_("_overlay",11,9d,c8,e2)},
	{::hx::fsObject /*  ::haxe::ui::containers::Box */ ,(int)offsetof(DropDownEvents_obj,_wrapper),HX_("_wrapper",d4,2e,1d,47)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DropDownEvents_obj_sStaticStorageInfo = 0;
#endif

static ::String DropDownEvents_obj_sMemberFields[] = {
	HX_("_dropdown",70,6b,c5,44),
	HX_("register",63,a6,9f,d0),
	HX_("unregister",bc,8d,63,56),
	HX_("onClick",a9,1a,9c,de),
	HX_("onMouseClick",e2,11,6f,3e),
	HX_("_overlay",11,9d,c8,e2),
	HX_("_wrapper",d4,2e,1d,47),
	HX_("showDropDown",4e,f6,95,13),
	HX_("hideDropDown",13,23,0e,a9),
	HX_("onScreenMouseDown",bc,49,99,fd),
	HX_("dispatchChanged",5a,b5,96,84),
	::String(null()) };

::hx::Class DropDownEvents_obj::__mClass;

void DropDownEvents_obj::__register()
{
	DropDownEvents_obj _hx_dummy;
	DropDownEvents_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.DropDownEvents",50,71,1d,ac);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DropDownEvents_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DropDownEvents_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DropDownEvents_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DropDownEvents_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
