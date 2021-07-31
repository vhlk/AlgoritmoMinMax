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
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Header
#include <haxe/ui/containers/Header.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TableView_RemoveColumn
#include <haxe/ui/containers/_TableView/RemoveColumn.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_3ac0b4693b34d312_785_new,"haxe.ui.containers._TableView.RemoveColumn","new",0x258122fc,"haxe.ui.containers._TableView.RemoveColumn.new","haxe/ui/containers/TableView.hx",785,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_3ac0b4693b34d312_786_call,"haxe.ui.containers._TableView.RemoveColumn","call",0xa4350e82,"haxe.ui.containers._TableView.RemoveColumn.call","haxe/ui/containers/TableView.hx",786,0x8a42a716)
namespace haxe{
namespace ui{
namespace containers{
namespace _TableView{

void RemoveColumn_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_3ac0b4693b34d312_785_new)
HXDLIN( 785)		super::__construct(component);
            	}

Dynamic RemoveColumn_obj::__CreateEmpty() { return new RemoveColumn_obj; }

void *RemoveColumn_obj::_hx_vtable = 0;

Dynamic RemoveColumn_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RemoveColumn_obj > _hx_result = new RemoveColumn_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool RemoveColumn_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x02c20a96) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x02c20a96;
	} else {
		return inClassId==(int)0x3c5dd90d;
	}
}

 ::haxe::ui::util::VariantType RemoveColumn_obj::call( ::Dynamic param){
            	HX_STACKFRAME(&_hx_pos_3ac0b4693b34d312_786_call)
HXLINE( 787)		 ::haxe::ui::containers::Header header = this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::containers::Header >(),null(),null()).StaticCast<  ::haxe::ui::containers::Header >();
HXLINE( 788)		if (::hx::IsNull( header )) {
HXLINE( 789)			return null();
            		}
HXLINE( 791)		{
HXLINE( 791)			int _g = 0;
HXDLIN( 791)			::Array< ::Dynamic> _g1;
HXDLIN( 791)			if (::hx::IsNull( header->_children )) {
HXLINE( 791)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 791)				_g1 = header->_children;
            			}
HXDLIN( 791)			while((_g < _g1->length)){
HXLINE( 791)				 ::haxe::ui::core::Component c = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 791)				_g = (_g + 1);
HXLINE( 792)				if (::hx::IsEq( c->get_text(),param )) {
HXLINE( 793)					header->removeComponent(c,null(),null());
HXLINE( 794)					goto _hx_goto_1;
            				}
            			}
            			_hx_goto_1:;
            		}
HXLINE( 797)		return null();
            	}



::hx::ObjectPtr< RemoveColumn_obj > RemoveColumn_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< RemoveColumn_obj > __this = new RemoveColumn_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< RemoveColumn_obj > RemoveColumn_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	RemoveColumn_obj *__this = (RemoveColumn_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RemoveColumn_obj), true, "haxe.ui.containers._TableView.RemoveColumn"));
	*(void **)__this = RemoveColumn_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

RemoveColumn_obj::RemoveColumn_obj()
{
}

::hx::Val RemoveColumn_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *RemoveColumn_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *RemoveColumn_obj_sStaticStorageInfo = 0;
#endif

static ::String RemoveColumn_obj_sMemberFields[] = {
	HX_("call",9e,18,ba,41),
	::String(null()) };

::hx::Class RemoveColumn_obj::__mClass;

void RemoveColumn_obj::__register()
{
	RemoveColumn_obj _hx_dummy;
	RemoveColumn_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._TableView.RemoveColumn",0a,35,85,61);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RemoveColumn_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RemoveColumn_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RemoveColumn_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RemoveColumn_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TableView
