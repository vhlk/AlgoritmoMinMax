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
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Spacer
#include <haxe/ui/components/Spacer.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Switch_TextBehaviour
#include <haxe/ui/components/_Switch/TextBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_442bb579fcb4e3b1_36_new,"haxe.ui.components._Switch.TextBehaviour","new",0x7700e7e1,"haxe.ui.components._Switch.TextBehaviour.new","haxe/ui/components/Switch.hx",36,0x0342e663)
HX_LOCAL_STACK_FRAME(_hx_pos_442bb579fcb4e3b1_37_validateData,"haxe.ui.components._Switch.TextBehaviour","validateData",0xf861c63f,"haxe.ui.components._Switch.TextBehaviour.validateData","haxe/ui/components/Switch.hx",37,0x0342e663)
namespace haxe{
namespace ui{
namespace components{
namespace _Switch{

void TextBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_442bb579fcb4e3b1_36_new)
HXDLIN(  36)		super::__construct(component);
            	}

Dynamic TextBehaviour_obj::__CreateEmpty() { return new TextBehaviour_obj; }

void *TextBehaviour_obj::_hx_vtable = 0;

Dynamic TextBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextBehaviour_obj > _hx_result = new TextBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TextBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x5251532d || inClassId==(int)0x7e17fa9f;
	}
}

void TextBehaviour_obj::validateData(){
            	HX_GC_STACKFRAME(&_hx_pos_442bb579fcb4e3b1_37_validateData)
HXLINE(  38)		 ::haxe::ui::components::Label label = this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Label >(),false,null()).StaticCast<  ::haxe::ui::components::Label >();
HXLINE(  39)		if (::hx::IsNull( label )) {
HXLINE(  40)			label =  ::haxe::ui::components::Label_obj::__alloc( HX_CTX );
HXLINE(  41)			label->set_styleNames(HX_("switch-label",9b,83,49,55));
HXLINE(  42)			label->set_id(HX_("switch-label",9b,83,49,55));
HXLINE(  43)			label->scriptAccess = false;
HXLINE(  44)			this->_component->addComponentAt(label,0);
HXLINE(  46)			 ::haxe::ui::components::Spacer spacer =  ::haxe::ui::components::Spacer_obj::__alloc( HX_CTX );
HXLINE(  47)			spacer->set_percentWidth(100);
HXLINE(  48)			this->_component->addComponentAt(spacer,1);
HXLINE(  50)			{
HXLINE(  50)				 ::haxe::ui::core::Component _this = this->_component;
HXDLIN(  50)				_this->invalidateComponent(HX_("style",31,a5,1d,84));
HXDLIN(  50)				_this->_style = null();
            			}
            		}
HXLINE(  54)		label->set_text(::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->_value));
            	}



::hx::ObjectPtr< TextBehaviour_obj > TextBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< TextBehaviour_obj > __this = new TextBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< TextBehaviour_obj > TextBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	TextBehaviour_obj *__this = (TextBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextBehaviour_obj), true, "haxe.ui.components._Switch.TextBehaviour"));
	*(void **)__this = TextBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

TextBehaviour_obj::TextBehaviour_obj()
{
}

::hx::Val TextBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TextBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TextBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String TextBehaviour_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class TextBehaviour_obj::__mClass;

void TextBehaviour_obj::__register()
{
	TextBehaviour_obj _hx_dummy;
	TextBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Switch.TextBehaviour",6f,63,dd,90);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Switch
