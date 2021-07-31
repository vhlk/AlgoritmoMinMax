// Generated by Haxe 4.2.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ButtonBuilder
#include <haxe/ui/components/ButtonBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Image
#include <haxe/ui/components/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
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
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_61138f5cefa2f7a4_522_new,"haxe.ui.components.ButtonBuilder","new",0x8df4c555,"haxe.ui.components.ButtonBuilder.new","haxe/ui/components/Button.hx",522,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_61138f5cefa2f7a4_527_applyStyle,"haxe.ui.components.ButtonBuilder","applyStyle",0x67dbe48e,"haxe.ui.components.ButtonBuilder.applyStyle","haxe/ui/components/Button.hx",527,0x45086125)
namespace haxe{
namespace ui{
namespace components{

void ButtonBuilder_obj::__construct( ::haxe::ui::components::Button button){
            	HX_STACKFRAME(&_hx_pos_61138f5cefa2f7a4_522_new)
HXLINE( 523)		super::__construct(button);
HXLINE( 524)		this->_button = button;
            	}

Dynamic ButtonBuilder_obj::__CreateEmpty() { return new ButtonBuilder_obj; }

void *ButtonBuilder_obj::_hx_vtable = 0;

Dynamic ButtonBuilder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ButtonBuilder_obj > _hx_result = new ButtonBuilder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ButtonBuilder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0472fd8d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0472fd8d;
	} else {
		return inClassId==(int)0x69fc3099;
	}
}

void ButtonBuilder_obj::applyStyle( ::haxe::ui::styles::Style style){
            	HX_STACKFRAME(&_hx_pos_61138f5cefa2f7a4_527_applyStyle)
HXLINE( 528)		 ::haxe::ui::components::Label label = this->_button->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Label >(),null(),null()).StaticCast<  ::haxe::ui::components::Label >();
HXLINE( 529)		bool _hx_tmp;
HXDLIN( 529)		if (::hx::IsNotNull( label )) {
HXLINE( 530)			bool _hx_tmp1;
HXDLIN( 530)			bool _hx_tmp2;
HXDLIN( 530)			bool _hx_tmp3;
HXDLIN( 530)			if (::hx::IsEq( label->customStyle->color,style->color )) {
HXLINE( 530)				_hx_tmp3 = (label->customStyle->fontName != style->fontName);
            			}
            			else {
HXLINE( 530)				_hx_tmp3 = true;
            			}
HXDLIN( 530)			if (!(_hx_tmp3)) {
HXLINE( 530)				_hx_tmp2 = ::hx::IsNotEq( label->customStyle->fontSize,style->fontSize );
            			}
            			else {
HXLINE( 530)				_hx_tmp2 = true;
            			}
HXDLIN( 530)			if (!(_hx_tmp2)) {
HXLINE( 530)				_hx_tmp1 = (label->customStyle->cursor != style->cursor);
            			}
            			else {
HXLINE( 530)				_hx_tmp1 = true;
            			}
HXDLIN( 530)			if (!(_hx_tmp1)) {
HXLINE( 529)				_hx_tmp = (label->customStyle->textAlign != style->textAlign);
            			}
            			else {
HXLINE( 529)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE( 529)			_hx_tmp = false;
            		}
HXDLIN( 529)		if (_hx_tmp) {
HXLINE( 536)			label->customStyle->color = style->color;
HXLINE( 537)			label->customStyle->fontName = style->fontName;
HXLINE( 538)			label->customStyle->fontSize = style->fontSize;
HXLINE( 539)			label->customStyle->cursor = style->cursor;
HXLINE( 540)			label->customStyle->textAlign = style->textAlign;
HXLINE( 541)			{
HXLINE( 541)				label->invalidateComponent(HX_("style",31,a5,1d,84));
HXDLIN( 541)				{
            				}
            			}
            		}
HXLINE( 544)		 ::haxe::ui::components::Image icon = this->_button->findComponent(HX_("button-icon",f4,52,38,e9),null(),false,null()).StaticCast<  ::haxe::ui::components::Image >();
HXLINE( 545)		bool _hx_tmp1;
HXDLIN( 545)		if (::hx::IsNotNull( icon )) {
HXLINE( 545)			_hx_tmp1 = (icon->customStyle->cursor != style->cursor);
            		}
            		else {
HXLINE( 545)			_hx_tmp1 = false;
            		}
HXDLIN( 545)		if (_hx_tmp1) {
HXLINE( 546)			icon->customStyle->cursor = style->cursor;
HXLINE( 547)			{
HXLINE( 547)				icon->invalidateComponent(HX_("style",31,a5,1d,84));
HXDLIN( 547)				{
            				}
            			}
            		}
            	}



::hx::ObjectPtr< ButtonBuilder_obj > ButtonBuilder_obj::__new( ::haxe::ui::components::Button button) {
	::hx::ObjectPtr< ButtonBuilder_obj > __this = new ButtonBuilder_obj();
	__this->__construct(button);
	return __this;
}

::hx::ObjectPtr< ButtonBuilder_obj > ButtonBuilder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::Button button) {
	ButtonBuilder_obj *__this = (ButtonBuilder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ButtonBuilder_obj), true, "haxe.ui.components.ButtonBuilder"));
	*(void **)__this = ButtonBuilder_obj::_hx_vtable;
	__this->__construct(button);
	return __this;
}

ButtonBuilder_obj::ButtonBuilder_obj()
{
}

void ButtonBuilder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ButtonBuilder);
	HX_MARK_MEMBER_NAME(_button,"_button");
	 ::haxe::ui::core::CompositeBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ButtonBuilder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_button,"_button");
	 ::haxe::ui::core::CompositeBuilder_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ButtonBuilder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_button") ) { return ::hx::Val( _button ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return ::hx::Val( applyStyle_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ButtonBuilder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_button") ) { _button=inValue.Cast<  ::haxe::ui::components::Button >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ButtonBuilder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_button",91,73,57,48));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ButtonBuilder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::components::Button */ ,(int)offsetof(ButtonBuilder_obj,_button),HX_("_button",91,73,57,48)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ButtonBuilder_obj_sStaticStorageInfo = 0;
#endif

static ::String ButtonBuilder_obj_sMemberFields[] = {
	HX_("_button",91,73,57,48),
	HX_("applyStyle",e3,20,6f,2f),
	::String(null()) };

::hx::Class ButtonBuilder_obj::__mClass;

void ButtonBuilder_obj::__register()
{
	ButtonBuilder_obj _hx_dummy;
	ButtonBuilder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.ButtonBuilder",e3,76,d0,ca);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ButtonBuilder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ButtonBuilder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ButtonBuilder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ButtonBuilder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
