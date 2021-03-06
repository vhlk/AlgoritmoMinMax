// Generated by Haxe 4.2.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Range_Builder
#include <haxe/ui/components/_Range/Builder.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_7df4828395dc0608_197_new,"haxe.ui.components._Range.Builder","new",0x2c44dbe3,"haxe.ui.components._Range.Builder.new","haxe/ui/components/Range.hx",197,0x313cba28)
HX_LOCAL_STACK_FRAME(_hx_pos_7df4828395dc0608_198_create,"haxe.ui.components._Range.Builder","create",0x38ae2f59,"haxe.ui.components._Range.Builder.create","haxe/ui/components/Range.hx",198,0x313cba28)
namespace haxe{
namespace ui{
namespace components{
namespace _Range{

void Builder_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_7df4828395dc0608_197_new)
HXDLIN( 197)		super::__construct(component);
            	}

Dynamic Builder_obj::__CreateEmpty() { return new Builder_obj; }

void *Builder_obj::_hx_vtable = 0;

Dynamic Builder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Builder_obj > _hx_result = new Builder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Builder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0472fd8d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0472fd8d;
	} else {
		return inClassId==(int)0x2a30390d;
	}
}

void Builder_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_7df4828395dc0608_198_create)
HXLINE( 199)		this->super::create();
HXLINE( 200)		if (::hx::IsNull( this->_component->findComponent(HX_("${_component.cssName}-value",ac,ff,7a,bc),null(),null(),null()) )) {
HXLINE( 201)			 ::haxe::ui::core::Component v =  ::haxe::ui::core::Component_obj::__alloc( HX_CTX );
HXLINE( 202)			v->set_id(((HX_("",00,00,00,00) + this->_component->get_cssName()) + HX_("-value",24,bc,c7,2f)));
HXLINE( 203)			v->addClass(((HX_("",00,00,00,00) + this->_component->get_cssName()) + HX_("-value",24,bc,c7,2f)),false,null());
HXLINE( 204)			this->_component->addComponent(v);
            		}
            	}



::hx::ObjectPtr< Builder_obj > Builder_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< Builder_obj > __this = new Builder_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< Builder_obj > Builder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	Builder_obj *__this = (Builder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Builder_obj), true, "haxe.ui.components._Range.Builder"));
	*(void **)__this = Builder_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

Builder_obj::Builder_obj()
{
}

::hx::Val Builder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Builder_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Builder_obj_sStaticStorageInfo = 0;
#endif

static ::String Builder_obj_sMemberFields[] = {
	HX_("create",fc,66,0f,7c),
	::String(null()) };

::hx::Class Builder_obj::__mClass;

void Builder_obj::__register()
{
	Builder_obj _hx_dummy;
	Builder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Range.Builder",71,ae,52,33);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Builder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Builder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Builder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Builder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Range
