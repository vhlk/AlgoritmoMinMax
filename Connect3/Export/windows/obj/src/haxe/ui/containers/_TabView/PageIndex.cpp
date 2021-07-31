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
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TabBar
#include <haxe/ui/components/TabBar.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TabView_Builder
#include <haxe/ui/containers/_TabView/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TabView_PageIndex
#include <haxe/ui/containers/_TabView/PageIndex.h>
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
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_27055f30c44997fe_112_new,"haxe.ui.containers._TabView.PageIndex","new",0x5fa29b2c,"haxe.ui.containers._TabView.PageIndex.new","haxe/ui/containers/TabView.hx",112,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_27055f30c44997fe_113_validateData,"haxe.ui.containers._TabView.PageIndex","validateData",0xdb42d194,"haxe.ui.containers._TabView.PageIndex.validateData","haxe/ui/containers/TabView.hx",113,0xfd8842ef)
namespace haxe{
namespace ui{
namespace containers{
namespace _TabView{

void PageIndex_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_27055f30c44997fe_112_new)
HXDLIN( 112)		super::__construct(component);
            	}

Dynamic PageIndex_obj::__CreateEmpty() { return new PageIndex_obj; }

void *PageIndex_obj::_hx_vtable = 0;

Dynamic PageIndex_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PageIndex_obj > _hx_result = new PageIndex_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PageIndex_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x588e0d98 || inClassId==(int)0x7e17fa9f;
	}
}

void PageIndex_obj::validateData(){
            	HX_GC_STACKFRAME(&_hx_pos_27055f30c44997fe_113_validateData)
HXLINE( 114)		if (::hx::IsEq( this->_component->get_native(),true )) {
HXLINE( 115)			return;
            		}
HXLINE( 118)		 ::haxe::ui::containers::_TabView::Builder builder = ::hx::TCast<  ::haxe::ui::containers::_TabView::Builder >::cast(this->_component->_compositeBuilder);
HXLINE( 120)		 ::haxe::ui::util::VariantType _hx_tmp = this->_value;
HXDLIN( 120)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::lt(_hx_tmp,::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(0))) {
HXLINE( 121)			return;
            		}
HXLINE( 123)		 ::haxe::ui::util::VariantType _hx_tmp1 = this->_value;
HXDLIN( 123)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::gt(_hx_tmp1,::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt((builder->_views->length - 1)))) {
HXLINE( 124)			this->_value = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt((builder->_views->length - 1));
HXLINE( 125)			return;
            		}
HXLINE( 128)		 ::haxe::ui::components::TabBar builder1 = builder->_tabs;
HXDLIN( 128)		builder1->set_selectedIndex(( (int)(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->_value)) ));
HXLINE( 129)		 ::haxe::ui::core::Component view = builder->_views->__get(( (int)(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->_value)) )).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 130)		if (::hx::IsNotNull( view )) {
HXLINE( 131)			if (::hx::IsNotNull( builder->_currentView )) {
HXLINE( 133)				builder->_currentView->hide();
            			}
HXLINE( 135)			if ((builder->_content->getComponentIndex(view) == -1)) {
HXLINE( 136)				builder->_content->addComponent(view);
            			}
            			else {
HXLINE( 138)				view->show();
            			}
HXLINE( 141)			builder->_currentView = view;
            		}
HXLINE( 144)		 ::haxe::ui::core::Component _hx_tmp2 = this->_component;
HXDLIN( 144)		_hx_tmp2->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),null(),null()));
            	}



::hx::ObjectPtr< PageIndex_obj > PageIndex_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< PageIndex_obj > __this = new PageIndex_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< PageIndex_obj > PageIndex_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	PageIndex_obj *__this = (PageIndex_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PageIndex_obj), true, "haxe.ui.containers._TabView.PageIndex"));
	*(void **)__this = PageIndex_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

PageIndex_obj::PageIndex_obj()
{
}

::hx::Val PageIndex_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PageIndex_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PageIndex_obj_sStaticStorageInfo = 0;
#endif

static ::String PageIndex_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class PageIndex_obj::__mClass;

void PageIndex_obj::__register()
{
	PageIndex_obj _hx_dummy;
	PageIndex_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._TabView.PageIndex",3a,d5,1a,ed);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PageIndex_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PageIndex_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PageIndex_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PageIndex_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TabView