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
#ifndef INCLUDED_haxe_ui_components_Range
#include <haxe/ui/components/Range.h>
#endif
#ifndef INCLUDED_haxe_ui_components_SliderBuilder
#include <haxe/ui/components/SliderBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Slider_Events
#include <haxe/ui/components/_Slider/Events.h>
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
#ifndef INCLUDED_haxe_ui_core_IDirectionalComponent
#include <haxe/ui/core/IDirectionalComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_e608daf1e719b833_275_new,"haxe.ui.components.SliderBuilder","new",0xfb480186,"haxe.ui.components.SliderBuilder.new","haxe/ui/components/Slider.hx",275,0x55cb8456)
HX_LOCAL_STACK_FRAME(_hx_pos_e608daf1e719b833_276_create,"haxe.ui.components.SliderBuilder","create",0x4e2df196,"haxe.ui.components.SliderBuilder.create","haxe/ui/components/Slider.hx",276,0x55cb8456)
HX_LOCAL_STACK_FRAME(_hx_pos_e608daf1e719b833_290_getStartOffset,"haxe.ui.components.SliderBuilder","getStartOffset",0x87b5fd39,"haxe.ui.components.SliderBuilder.getStartOffset","haxe/ui/components/Slider.hx",290,0x55cb8456)
HX_LOCAL_STACK_FRAME(_hx_pos_e608daf1e719b833_294_createValueComponent,"haxe.ui.components.SliderBuilder","createValueComponent",0x14dc3b42,"haxe.ui.components.SliderBuilder.createValueComponent","haxe/ui/components/Slider.hx",294,0x55cb8456)
HX_LOCAL_STACK_FRAME(_hx_pos_e608daf1e719b833_297_createThumb,"haxe.ui.components.SliderBuilder","createThumb",0xccf0a0a0,"haxe.ui.components.SliderBuilder.createThumb","haxe/ui/components/Slider.hx",297,0x55cb8456)
namespace haxe{
namespace ui{
namespace components{

void SliderBuilder_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_e608daf1e719b833_275_new)
HXDLIN( 275)		super::__construct(component);
            	}

Dynamic SliderBuilder_obj::__CreateEmpty() { return new SliderBuilder_obj; }

void *SliderBuilder_obj::_hx_vtable = 0;

Dynamic SliderBuilder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SliderBuilder_obj > _hx_result = new SliderBuilder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SliderBuilder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0472fd8d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0472fd8d;
	} else {
		return inClassId==(int)0x72194566;
	}
}

void SliderBuilder_obj::create(){
            	HX_STACKFRAME(&_hx_pos_e608daf1e719b833_276_create)
HXLINE( 277)		if (::hx::IsNull( this->_component->findComponent(HX_("range",bd,a5,1f,e4),null(),null(),null()) )) {
HXLINE( 278)			 ::haxe::ui::components::Range v = this->createValueComponent();
HXLINE( 279)			v->scriptAccess = false;
HXLINE( 280)			v->set_id(HX_("range",bd,a5,1f,e4));
HXLINE( 281)			v->addClass(HX_("slider-value",05,51,e9,70),null(),null());
HXLINE( 282)			v->set_start(v->set_end(( (Float)(0) )));
HXLINE( 283)			this->_component->addComponent(v);
            		}
HXLINE( 286)		this->createThumb(HX_("end-thumb",e4,b8,ef,18));
            	}


Float SliderBuilder_obj::getStartOffset(){
            	HX_STACKFRAME(&_hx_pos_e608daf1e719b833_290_getStartOffset)
HXDLIN( 290)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(SliderBuilder_obj,getStartOffset,return )

 ::haxe::ui::components::Range SliderBuilder_obj::createValueComponent(){
            	HX_STACKFRAME(&_hx_pos_e608daf1e719b833_294_createValueComponent)
HXDLIN( 294)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SliderBuilder_obj,createValueComponent,return )

void SliderBuilder_obj::createThumb(::String id){
            	HX_GC_STACKFRAME(&_hx_pos_e608daf1e719b833_297_createThumb)
HXLINE( 298)		if (::hx::IsNotNull( this->_component->findComponent(id,null(),null(),null()) )) {
HXLINE( 299)			return;
            		}
HXLINE( 302)		 ::haxe::ui::components::Button b =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 303)		b->scriptAccess = false;
HXLINE( 304)		b->set_id(id);
HXLINE( 305)		b->addClass(id,null(),null());
HXLINE( 306)		b->set_remainPressed(true);
HXLINE( 307)		this->_component->addComponent(b);
HXLINE( 309)		this->_component->registerInternalEvents(::hx::ClassOf< ::haxe::ui::components::_Slider::Events >(),true);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SliderBuilder_obj,createThumb,(void))


::hx::ObjectPtr< SliderBuilder_obj > SliderBuilder_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< SliderBuilder_obj > __this = new SliderBuilder_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< SliderBuilder_obj > SliderBuilder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	SliderBuilder_obj *__this = (SliderBuilder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SliderBuilder_obj), true, "haxe.ui.components.SliderBuilder"));
	*(void **)__this = SliderBuilder_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

SliderBuilder_obj::SliderBuilder_obj()
{
}

::hx::Val SliderBuilder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createThumb") ) { return ::hx::Val( createThumb_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getStartOffset") ) { return ::hx::Val( getStartOffset_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"createValueComponent") ) { return ::hx::Val( createValueComponent_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SliderBuilder_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SliderBuilder_obj_sStaticStorageInfo = 0;
#endif

static ::String SliderBuilder_obj_sMemberFields[] = {
	HX_("create",fc,66,0f,7c),
	HX_("getStartOffset",9f,48,c4,5f),
	HX_("createValueComponent",28,17,c2,c6),
	HX_("createThumb",7a,d9,0d,39),
	::String(null()) };

::hx::Class SliderBuilder_obj::__mClass;

void SliderBuilder_obj::__register()
{
	SliderBuilder_obj _hx_dummy;
	SliderBuilder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.SliderBuilder",94,86,03,36);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SliderBuilder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SliderBuilder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SliderBuilder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SliderBuilder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components