// Generated by Haxe 4.2.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextBase
#include <haxe/ui/backend/TextBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextDisplayImpl
#include <haxe/ui/backend/TextDisplayImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextInputImpl
#include <haxe/ui/backend/TextInputImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TextArea
#include <haxe/ui/components/TextArea.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TextArea_TextAreaHelper
#include <haxe/ui/components/_TextArea/TextAreaHelper.h>
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
#ifndef INCLUDED_haxe_ui_core_TextInput
#include <haxe/ui/core/TextInput.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_fd7e3fb1a3e661c8_205_validateText,"haxe.ui.components._TextArea.TextAreaHelper","validateText",0x34c77eae,"haxe.ui.components._TextArea.TextAreaHelper.validateText","haxe/ui/components/TextArea.hx",205,0xfe441d7d)
namespace haxe{
namespace ui{
namespace components{
namespace _TextArea{

void TextAreaHelper_obj::__construct() { }

Dynamic TextAreaHelper_obj::__CreateEmpty() { return new TextAreaHelper_obj; }

void *TextAreaHelper_obj::_hx_vtable = 0;

Dynamic TextAreaHelper_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextAreaHelper_obj > _hx_result = new TextAreaHelper_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextAreaHelper_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6b3c3ec9;
}

void TextAreaHelper_obj::validateText( ::haxe::ui::components::TextArea textarea,::String text){
            	HX_STACKFRAME(&_hx_pos_fd7e3fb1a3e661c8_205_validateText)
HXLINE( 206)		if (::hx::IsNull( text )) {
HXLINE( 207)			text = HX_("",00,00,00,00);
            		}
HXLINE( 210)		bool _hx_tmp;
HXDLIN( 210)		if ((textarea->get_focus() == false)) {
HXLINE( 210)			_hx_tmp = ::hx::IsNotNull( textarea->get_placeholder() );
            		}
            		else {
HXLINE( 210)			_hx_tmp = false;
            		}
HXDLIN( 210)		if (_hx_tmp) {
HXLINE( 211)			if ((text == HX_("",00,00,00,00))) {
HXLINE( 212)				text = textarea->get_placeholder();
HXLINE( 213)				textarea->addClass(HX_(":empty",13,28,8d,a0),null(),null());
            			}
            			else {
HXLINE( 215)				textarea->removeClass(HX_(":empty",13,28,8d,a0),null(),null());
            			}
            		}
            		else {
HXLINE( 218)			bool placeholderVisible = (text.length == 0);
HXLINE( 219)			if ((placeholderVisible == true)) {
HXLINE( 220)				text = HX_("",00,00,00,00);
HXLINE( 221)				textarea->removeClass(HX_(":empty",13,28,8d,a0),null(),null());
            			}
            		}
HXLINE( 225)		textarea->getTextInput()->set_text((HX_("",00,00,00,00) + text));
HXLINE( 226)		textarea->getTextInput()->invalidateComponent(HX_("measure",5e,fb,e9,3c));
HXLINE( 227)		bool _hx_tmp1;
HXDLIN( 227)		if (::hx::IsNotNull( textarea->_layout )) {
HXLINE( 227)			_hx_tmp1 = (textarea->_layoutLocked == true);
            		}
            		else {
HXLINE( 227)			_hx_tmp1 = true;
            		}
HXDLIN( 227)		if (!(_hx_tmp1)) {
HXLINE( 227)			textarea->invalidateComponent(HX_("layout",aa,ae,b8,58));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TextAreaHelper_obj,validateText,(void))


TextAreaHelper_obj::TextAreaHelper_obj()
{
}

bool TextAreaHelper_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateText") ) { outValue = validateText_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TextAreaHelper_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TextAreaHelper_obj_sStaticStorageInfo = 0;
#endif

::hx::Class TextAreaHelper_obj::__mClass;

static ::String TextAreaHelper_obj_sStaticFields[] = {
	HX_("validateText",63,cc,f9,a0),
	::String(null())
};

void TextAreaHelper_obj::__register()
{
	TextAreaHelper_obj _hx_dummy;
	TextAreaHelper_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._TextArea.TextAreaHelper",03,b5,e3,f6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextAreaHelper_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TextAreaHelper_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< TextAreaHelper_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextAreaHelper_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextAreaHelper_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _TextArea
