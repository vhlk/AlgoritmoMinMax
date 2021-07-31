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
#ifndef INCLUDED_haxe_ui_backend_PlatformBase
#include <haxe/ui/backend/PlatformBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_PlatformImpl
#include <haxe/ui/backend/PlatformImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_components_HorizontalScroll
#include <haxe/ui/components/HorizontalScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_VerticalScroll
#include <haxe/ui/components/VerticalScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
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
#ifndef INCLUDED_haxe_ui_core_Platform
#include <haxe/ui/core/Platform.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Size
#include <haxe/ui/geom/Size.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ScrollViewLayout
#include <haxe/ui/layouts/ScrollViewLayout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_c64222abbde4bc58_10_new,"haxe.ui.layouts.ScrollViewLayout","new",0xb5cf8485,"haxe.ui.layouts.ScrollViewLayout.new","haxe/ui/layouts/ScrollViewLayout.hx",10,0x4379a48a)
HX_LOCAL_STACK_FRAME(_hx_pos_c64222abbde4bc58_11_repositionChildren,"haxe.ui.layouts.ScrollViewLayout","repositionChildren",0xf08bbe36,"haxe.ui.layouts.ScrollViewLayout.repositionChildren","haxe/ui/layouts/ScrollViewLayout.hx",11,0x4379a48a)
HX_LOCAL_STACK_FRAME(_hx_pos_c64222abbde4bc58_34_resizeChildren,"haxe.ui.layouts.ScrollViewLayout","resizeChildren",0xf153e74e,"haxe.ui.layouts.ScrollViewLayout.resizeChildren","haxe/ui/layouts/ScrollViewLayout.hx",34,0x4379a48a)
HX_LOCAL_STACK_FRAME(_hx_pos_c64222abbde4bc58_70_get_usableSize,"haxe.ui.layouts.ScrollViewLayout","get_usableSize",0x6f19301d,"haxe.ui.layouts.ScrollViewLayout.get_usableSize","haxe/ui/layouts/ScrollViewLayout.hx",70,0x4379a48a)
HX_LOCAL_STACK_FRAME(_hx_pos_c64222abbde4bc58_99_calcAutoSize,"haxe.ui.layouts.ScrollViewLayout","calcAutoSize",0x6770a0c0,"haxe.ui.layouts.ScrollViewLayout.calcAutoSize","haxe/ui/layouts/ScrollViewLayout.hx",99,0x4379a48a)
namespace haxe{
namespace ui{
namespace layouts{

void ScrollViewLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c64222abbde4bc58_10_new)
HXDLIN(  10)		super::__construct();
            	}

Dynamic ScrollViewLayout_obj::__CreateEmpty() { return new ScrollViewLayout_obj; }

void *ScrollViewLayout_obj::_hx_vtable = 0;

Dynamic ScrollViewLayout_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScrollViewLayout_obj > _hx_result = new ScrollViewLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ScrollViewLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x23db4184) {
		if (inClassId<=(int)0x1d75bd8b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1d75bd8b;
		} else {
			return inClassId==(int)0x23db4184;
		}
	} else {
		return inClassId==(int)0x3799f835;
	}
}

void ScrollViewLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_c64222abbde4bc58_11_repositionChildren)
HXLINE(  12)		 ::haxe::ui::core::Component contents = this->get_component()->findComponent(HX_("scrollview-contents",15,b7,70,a7),null(),false,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE(  13)		if (::hx::IsNull( contents )) {
HXLINE(  14)			return;
            		}
HXLINE(  17)		 ::haxe::ui::components::HorizontalScroll hscroll = this->get_component()->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE(  18)		 ::haxe::ui::components::VerticalScroll vscroll = this->get_component()->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE(  20)		bool _hx_tmp;
HXDLIN(  20)		if (::hx::IsNotNull( hscroll )) {
HXLINE(  20)			_hx_tmp = (this->hidden(hscroll) == false);
            		}
            		else {
HXLINE(  20)			_hx_tmp = false;
            		}
HXDLIN(  20)		if (_hx_tmp) {
HXLINE(  21)			Float _hx_tmp = this->get_paddingLeft();
HXDLIN(  21)			 ::Dynamic _hx_tmp1 = this->get_component()->get_componentHeight();
HXDLIN(  21)			Float _hx_tmp2 = (( (Float)(_hx_tmp1) ) - ( (Float)(hscroll->get_componentHeight()) ));
HXDLIN(  21)			Float _hx_tmp3 = (_hx_tmp2 - this->get_paddingBottom());
HXDLIN(  21)			hscroll->moveComponent(_hx_tmp,::Math_obj::fround((_hx_tmp3 + this->marginTop(hscroll))));
            		}
HXLINE(  24)		bool _hx_tmp1;
HXDLIN(  24)		if (::hx::IsNotNull( vscroll )) {
HXLINE(  24)			_hx_tmp1 = (this->hidden(vscroll) == false);
            		}
            		else {
HXLINE(  24)			_hx_tmp1 = false;
            		}
HXDLIN(  24)		if (_hx_tmp1) {
HXLINE(  25)			 ::Dynamic _hx_tmp = this->get_component()->get_componentWidth();
HXDLIN(  25)			Float _hx_tmp1 = (( (Float)(_hx_tmp) ) - ( (Float)(vscroll->get_componentWidth()) ));
HXDLIN(  25)			Float _hx_tmp2 = (_hx_tmp1 - this->get_paddingRight());
HXDLIN(  25)			Float _hx_tmp3 = ::Math_obj::fround((_hx_tmp2 + this->marginLeft(vscroll)));
HXDLIN(  25)			vscroll->moveComponent(_hx_tmp3,this->get_paddingTop());
            		}
HXLINE(  28)		 ::haxe::ui::core::Component contents1 = this->get_component()->findComponent(HX_("scrollview-contents",15,b7,70,a7),null(),false,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE(  29)		if (::hx::IsNotNull( contents1 )) {
HXLINE(  30)			Float _hx_tmp = this->get_paddingLeft();
HXDLIN(  30)			contents1->moveComponent(_hx_tmp,this->get_paddingTop());
            		}
            	}


void ScrollViewLayout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_c64222abbde4bc58_34_resizeChildren)
HXLINE(  35)		this->super::resizeChildren();
HXLINE(  37)		 ::haxe::ui::components::HorizontalScroll hscroll = this->get_component()->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE(  38)		 ::haxe::ui::components::VerticalScroll vscroll = this->get_component()->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE(  40)		 ::haxe::ui::geom::Size usableSize = this->get_usableSize();
HXLINE(  41)		Float percentWidth = ( (Float)(100) );
HXLINE(  42)		Float percentHeight = ( (Float)(100) );
HXLINE(  43)		{
HXLINE(  43)			int _g = 0;
HXDLIN(  43)			 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN(  43)			::Array< ::Dynamic> _g1;
HXDLIN(  43)			if (::hx::IsNull( _this->_children )) {
HXLINE(  43)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(  43)				_g1 = _this->_children;
            			}
HXDLIN(  43)			while((_g < _g1->length)){
HXLINE(  43)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  43)				_g = (_g + 1);
HXLINE(  44)				bool _hx_tmp;
HXDLIN(  44)				if (::hx::IsInstanceNotEq( child,hscroll )) {
HXLINE(  44)					_hx_tmp = ::hx::IsInstanceNotEq( child,vscroll );
            				}
            				else {
HXLINE(  44)					_hx_tmp = false;
            				}
HXDLIN(  44)				if (_hx_tmp) {
HXLINE(  45)					continue;
            				}
HXLINE(  48)				 ::Dynamic cx = null();
HXLINE(  49)				 ::Dynamic cy = null();
HXLINE(  51)				if (::hx::IsNotNull( child->get_percentWidth() )) {
HXLINE(  52)					Float usableSize1 = usableSize->width;
HXDLIN(  52)					Float cx1 = ((usableSize1 * ( (Float)(child->get_percentWidth()) )) / percentWidth);
HXDLIN(  52)					Float cx2 = (cx1 - this->marginLeft(child));
HXDLIN(  52)					cx = (cx2 - this->marginRight(child));
            				}
HXLINE(  54)				if (::hx::IsNotNull( child->get_percentHeight() )) {
HXLINE(  55)					Float usableSize1 = usableSize->height;
HXDLIN(  55)					Float cy1 = ((usableSize1 * ( (Float)(child->get_percentHeight()) )) / percentHeight);
HXDLIN(  55)					Float cy2 = (cy1 - this->marginTop(child));
HXDLIN(  55)					cy = (cy2 - this->marginBottom(child));
            				}
HXLINE(  58)				bool _hx_tmp1;
HXDLIN(  58)				if (this->fixedMinWidth(child)) {
HXLINE(  58)					_hx_tmp1 = ::hx::IsNotNull( child->get_percentWidth() );
            				}
            				else {
HXLINE(  58)					_hx_tmp1 = false;
            				}
HXDLIN(  58)				if (_hx_tmp1) {
HXLINE(  59)					percentWidth = (percentWidth - ( (Float)(child->get_percentWidth()) ));
            				}
HXLINE(  61)				bool _hx_tmp2;
HXDLIN(  61)				if (this->fixedMinHeight(child)) {
HXLINE(  61)					_hx_tmp2 = ::hx::IsNotNull( child->get_percentHeight() );
            				}
            				else {
HXLINE(  61)					_hx_tmp2 = false;
            				}
HXDLIN(  61)				if (_hx_tmp2) {
HXLINE(  62)					percentHeight = (percentHeight - ( (Float)(child->get_percentHeight()) ));
            				}
HXLINE(  65)				child->resizeComponent(cx,cy);
            			}
            		}
            	}


 ::haxe::ui::geom::Size ScrollViewLayout_obj::get_usableSize(){
            	HX_STACKFRAME(&_hx_pos_c64222abbde4bc58_70_get_usableSize)
HXLINE(  71)		 ::haxe::ui::geom::Size size = this->super::get_usableSize();
HXLINE(  72)		 ::haxe::ui::components::HorizontalScroll hscroll = this->get_component()->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE(  73)		 ::haxe::ui::components::VerticalScroll vscroll = this->get_component()->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE(  74)		bool _hx_tmp;
HXDLIN(  74)		bool _hx_tmp1;
HXDLIN(  74)		if (::hx::IsNotNull( hscroll )) {
HXLINE(  74)			_hx_tmp1 = (hscroll->get_includeInLayout() == true);
            		}
            		else {
HXLINE(  74)			_hx_tmp1 = false;
            		}
HXDLIN(  74)		if (_hx_tmp1) {
HXLINE(  74)			_hx_tmp = (this->hidden(hscroll) == false);
            		}
            		else {
HXLINE(  74)			_hx_tmp = false;
            		}
HXDLIN(  74)		if (_hx_tmp) {
HXLINE(  75)			 ::haxe::ui::geom::Size size1 = size;
HXDLIN(  75)			Float size2 = size1->height;
HXDLIN(  75)			size1->height = (size2 - ( (Float)(hscroll->get_componentHeight()) ));
            		}
HXLINE(  77)		bool _hx_tmp2;
HXDLIN(  77)		bool _hx_tmp3;
HXDLIN(  77)		if (::hx::IsNotNull( vscroll )) {
HXLINE(  77)			_hx_tmp3 = (vscroll->get_includeInLayout() == true);
            		}
            		else {
HXLINE(  77)			_hx_tmp3 = false;
            		}
HXDLIN(  77)		if (_hx_tmp3) {
HXLINE(  77)			_hx_tmp2 = (this->hidden(vscroll) == false);
            		}
            		else {
HXLINE(  77)			_hx_tmp2 = false;
            		}
HXDLIN(  77)		if (_hx_tmp2) {
HXLINE(  78)			 ::haxe::ui::geom::Size size1 = size;
HXDLIN(  78)			Float size2 = size1->width;
HXDLIN(  78)			size1->width = (size2 - ( (Float)(vscroll->get_componentWidth()) ));
            		}
HXLINE(  81)		bool _hx_tmp4;
HXDLIN(  81)		if (::hx::IsNotEq( this->get_component()->get_native(),true )) {
HXLINE(  81)			_hx_tmp4 = (this->_component->get_isNativeScroller() == true);
            		}
            		else {
HXLINE(  81)			_hx_tmp4 = true;
            		}
HXDLIN(  81)		if (_hx_tmp4) {
HXLINE(  82)			 ::haxe::ui::core::Component contents = this->get_component()->findComponent(HX_("scrollview-contents",15,b7,70,a7),null(),false,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE(  83)			if (::hx::IsNotNull( contents )) {
HXLINE(  84)				 ::Dynamic _hx_tmp = contents->get_componentWidth();
HXDLIN(  84)				if (::hx::IsGreater( _hx_tmp,size->width )) {
HXLINE(  85)					 ::haxe::ui::geom::Size size1 = size;
HXDLIN(  85)					Float size2 = size1->height;
HXDLIN(  85)					size1->height = (size2 - ::haxe::ui::core::Platform_obj::get_hscrollHeight());
            				}
HXLINE(  87)				 ::Dynamic _hx_tmp1 = contents->get_componentHeight();
HXDLIN(  87)				if (::hx::IsGreater( _hx_tmp1,size->height )) {
HXLINE(  88)					 ::haxe::ui::geom::Size size1 = size;
HXDLIN(  88)					Float size2 = size1->width;
HXDLIN(  88)					size1->width = (size2 - ::haxe::ui::core::Platform_obj::get_vscrollWidth());
            				}
            			}
            		}
HXLINE(  93)		 ::haxe::ui::geom::Size size1 = size;
HXDLIN(  93)		size1->width = (size1->width + 1);
HXLINE(  95)		return size;
            	}


 ::haxe::ui::geom::Size ScrollViewLayout_obj::calcAutoSize(::Array< ::Dynamic> exclusions){
            	HX_STACKFRAME(&_hx_pos_c64222abbde4bc58_99_calcAutoSize)
HXLINE( 100)		 ::haxe::ui::components::HorizontalScroll hscroll = this->get_component()->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE( 101)		 ::haxe::ui::components::VerticalScroll vscroll = this->get_component()->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE( 102)		 ::haxe::ui::geom::Size size = this->super::calcAutoSize(::Array_obj< ::Dynamic>::__new(2)->init(0,hscroll)->init(1,vscroll));
HXLINE( 103)		bool _hx_tmp;
HXDLIN( 103)		if (::hx::IsNotNull( hscroll )) {
HXLINE( 103)			_hx_tmp = (hscroll->get_hidden() == false);
            		}
            		else {
HXLINE( 103)			_hx_tmp = false;
            		}
HXDLIN( 103)		if (_hx_tmp) {
HXLINE( 104)			 ::haxe::ui::geom::Size size1 = size;
HXDLIN( 104)			Float size2 = size1->height;
HXDLIN( 104)			size1->height = (size2 + hscroll->get_componentHeight());
            		}
HXLINE( 106)		bool _hx_tmp1;
HXDLIN( 106)		if (::hx::IsNotNull( vscroll )) {
HXLINE( 106)			_hx_tmp1 = (vscroll->get_hidden() == false);
            		}
            		else {
HXLINE( 106)			_hx_tmp1 = false;
            		}
HXDLIN( 106)		if (_hx_tmp1) {
HXLINE( 107)			 ::haxe::ui::geom::Size size1 = size;
HXDLIN( 107)			Float size2 = size1->width;
HXDLIN( 107)			size1->width = (size2 + vscroll->get_componentWidth());
            		}
HXLINE( 110)		bool _hx_tmp2;
HXDLIN( 110)		if (::hx::IsNotEq( this->get_component()->get_native(),true )) {
HXLINE( 110)			_hx_tmp2 = (this->_component->get_isNativeScroller() == true);
            		}
            		else {
HXLINE( 110)			_hx_tmp2 = true;
            		}
HXDLIN( 110)		if (_hx_tmp2) {
HXLINE( 111)			 ::haxe::ui::core::Component contents = this->get_component()->findComponent(HX_("scrollview-contents",15,b7,70,a7),null(),false,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 112)			if (::hx::IsNotNull( contents )) {
HXLINE( 113)				Float _hx_tmp = contents->get_width();
HXDLIN( 113)				if ((_hx_tmp > this->get_component()->get_width())) {
HXLINE( 114)					 ::haxe::ui::geom::Size size1 = size;
HXDLIN( 114)					Float size2 = size1->height;
HXDLIN( 114)					size1->height = (size2 + ::haxe::ui::core::Platform_obj::get_hscrollHeight());
            				}
HXLINE( 116)				Float _hx_tmp1 = contents->get_height();
HXDLIN( 116)				if ((_hx_tmp1 > this->get_component()->get_height())) {
HXLINE( 117)					 ::haxe::ui::geom::Size size1 = size;
HXDLIN( 117)					Float size2 = size1->width;
HXDLIN( 117)					size1->width = (size2 + ::haxe::ui::core::Platform_obj::get_vscrollWidth());
            				}
            			}
            		}
HXLINE( 122)		return size;
            	}



::hx::ObjectPtr< ScrollViewLayout_obj > ScrollViewLayout_obj::__new() {
	::hx::ObjectPtr< ScrollViewLayout_obj > __this = new ScrollViewLayout_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ScrollViewLayout_obj > ScrollViewLayout_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ScrollViewLayout_obj *__this = (ScrollViewLayout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScrollViewLayout_obj), true, "haxe.ui.layouts.ScrollViewLayout"));
	*(void **)__this = ScrollViewLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ScrollViewLayout_obj::ScrollViewLayout_obj()
{
}

::hx::Val ScrollViewLayout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"calcAutoSize") ) { return ::hx::Val( calcAutoSize_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return ::hx::Val( resizeChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_usableSize") ) { return ::hx::Val( get_usableSize_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return ::hx::Val( repositionChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ScrollViewLayout_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ScrollViewLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String ScrollViewLayout_obj_sMemberFields[] = {
	HX_("repositionChildren",bb,00,c7,9c),
	HX_("resizeChildren",53,43,30,c1),
	HX_("get_usableSize",22,8c,f5,3e),
	HX_("calcAutoSize",85,81,3f,fd),
	::String(null()) };

::hx::Class ScrollViewLayout_obj::__mClass;

void ScrollViewLayout_obj::__register()
{
	ScrollViewLayout_obj _hx_dummy;
	ScrollViewLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.layouts.ScrollViewLayout",13,de,2f,6e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScrollViewLayout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScrollViewLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScrollViewLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScrollViewLayout_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace layouts