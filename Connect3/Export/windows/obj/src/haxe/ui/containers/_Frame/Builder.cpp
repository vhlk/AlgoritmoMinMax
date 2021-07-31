// Generated by Haxe 4.2.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Frame
#include <haxe/ui/containers/Frame.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__Frame_Builder
#include <haxe/ui/containers/_Frame/Builder.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_b544dc02a32ede0e_56_new,"haxe.ui.containers._Frame.Builder","new",0x592cf4d7,"haxe.ui.containers._Frame.Builder.new","haxe/ui/containers/Frame.hx",56,0x566bdf3c)
HX_LOCAL_STACK_FRAME(_hx_pos_b544dc02a32ede0e_61_create,"haxe.ui.containers._Frame.Builder","create",0x8b2d26e5,"haxe.ui.containers._Frame.Builder.create","haxe/ui/containers/Frame.hx",61,0x566bdf3c)
HX_LOCAL_STACK_FRAME(_hx_pos_b544dc02a32ede0e_87_addComponent,"haxe.ui.containers._Frame.Builder","addComponent",0x2e282705,"haxe.ui.containers._Frame.Builder.addComponent","haxe/ui/containers/Frame.hx",87,0x566bdf3c)
namespace haxe{
namespace ui{
namespace containers{
namespace _Frame{

void Builder_obj::__construct( ::haxe::ui::containers::Frame frame){
            	HX_STACKFRAME(&_hx_pos_b544dc02a32ede0e_56_new)
HXLINE(  57)		super::__construct(frame);
HXLINE(  58)		this->_frame = frame;
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
		return inClassId==(int)0x06b0123d;
	}
}

void Builder_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_b544dc02a32ede0e_61_create)
HXLINE(  62)		this->_contents =  ::haxe::ui::containers::Box_obj::__alloc( HX_CTX );
HXLINE(  63)		this->_contents->set_id(HX_("frame-contents",7a,14,f8,89));
HXLINE(  64)		this->_contents->addClass(HX_("frame-contents",7a,14,f8,89),null(),null());
HXLINE(  65)		this->_frame->addComponent(this->_contents);
HXLINE(  67)		this->_label =  ::haxe::ui::components::Label_obj::__alloc( HX_CTX );
HXLINE(  68)		this->_label->set_text(HX_("My Frame",79,e8,ed,40));
HXLINE(  69)		this->_label->set_id(HX_("frame-title",38,aa,fd,b7));
HXLINE(  70)		this->_label->addClass(HX_("frame-title",38,aa,fd,b7),null(),null());
HXLINE(  71)		this->_label->set_includeInLayout(false);
HXLINE(  72)		this->_frame->addComponent(this->_label);
HXLINE(  74)		 ::haxe::ui::core::Component line =  ::haxe::ui::core::Component_obj::__alloc( HX_CTX );
HXLINE(  75)		line->set_id(HX_("frame-left-line",da,15,27,d1));
HXLINE(  76)		line->addClass(HX_("frame-left-line",da,15,27,d1),null(),null());
HXLINE(  77)		line->set_includeInLayout(false);
HXLINE(  78)		this->_frame->addComponent(line);
HXLINE(  80)		 ::haxe::ui::core::Component line1 =  ::haxe::ui::core::Component_obj::__alloc( HX_CTX );
HXLINE(  81)		line1->set_id(HX_("frame-right-line",a5,50,d1,63));
HXLINE(  82)		line1->addClass(HX_("frame-right-line",a5,50,d1,63),null(),null());
HXLINE(  83)		line1->set_includeInLayout(false);
HXLINE(  84)		this->_frame->addComponent(line1);
            	}


 ::haxe::ui::core::Component Builder_obj::addComponent( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_b544dc02a32ede0e_87_addComponent)
HXLINE(  88)		bool _hx_tmp;
HXDLIN(  88)		bool _hx_tmp1;
HXDLIN(  88)		bool _hx_tmp2;
HXDLIN(  88)		bool _hx_tmp3;
HXDLIN(  88)		if ((child->get_id() != HX_("frame-contents",7a,14,f8,89))) {
HXLINE(  88)			_hx_tmp3 = (child->get_id() != HX_("frame-title",38,aa,fd,b7));
            		}
            		else {
HXLINE(  88)			_hx_tmp3 = false;
            		}
HXDLIN(  88)		if (_hx_tmp3) {
HXLINE(  88)			_hx_tmp2 = (child->get_id() != HX_("frame-icon",d9,c6,b3,7e));
            		}
            		else {
HXLINE(  88)			_hx_tmp2 = false;
            		}
HXDLIN(  88)		if (_hx_tmp2) {
HXLINE(  88)			_hx_tmp1 = (child->get_id() != HX_("frame-left-line",da,15,27,d1));
            		}
            		else {
HXLINE(  88)			_hx_tmp1 = false;
            		}
HXDLIN(  88)		if (_hx_tmp1) {
HXLINE(  88)			_hx_tmp = (child->get_id() != HX_("frame-right-line",a5,50,d1,63));
            		}
            		else {
HXLINE(  88)			_hx_tmp = false;
            		}
HXDLIN(  88)		if (_hx_tmp) {
HXLINE(  89)			return this->_contents->addComponent(child);
            		}
HXLINE(  91)		return this->super::addComponent(child);
            	}



::hx::ObjectPtr< Builder_obj > Builder_obj::__new( ::haxe::ui::containers::Frame frame) {
	::hx::ObjectPtr< Builder_obj > __this = new Builder_obj();
	__this->__construct(frame);
	return __this;
}

::hx::ObjectPtr< Builder_obj > Builder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::Frame frame) {
	Builder_obj *__this = (Builder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Builder_obj), true, "haxe.ui.containers._Frame.Builder"));
	*(void **)__this = Builder_obj::_hx_vtable;
	__this->__construct(frame);
	return __this;
}

Builder_obj::Builder_obj()
{
}

void Builder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Builder);
	HX_MARK_MEMBER_NAME(_frame,"_frame");
	HX_MARK_MEMBER_NAME(_contents,"_contents");
	HX_MARK_MEMBER_NAME(_label,"_label");
	 ::haxe::ui::core::CompositeBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Builder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_frame,"_frame");
	HX_VISIT_MEMBER_NAME(_contents,"_contents");
	HX_VISIT_MEMBER_NAME(_label,"_label");
	 ::haxe::ui::core::CompositeBuilder_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Builder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_frame") ) { return ::hx::Val( _frame ); }
		if (HX_FIELD_EQ(inName,"_label") ) { return ::hx::Val( _label ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_contents") ) { return ::hx::Val( _contents ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addComponent") ) { return ::hx::Val( addComponent_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Builder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_frame") ) { _frame=inValue.Cast<  ::haxe::ui::containers::Frame >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_label") ) { _label=inValue.Cast<  ::haxe::ui::components::Label >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_contents") ) { _contents=inValue.Cast<  ::haxe::ui::containers::Box >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Builder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_frame",6e,bf,6a,02));
	outFields->push(HX_("_contents",79,fc,b9,76));
	outFields->push(HX_("_label",35,55,96,6b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Builder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::Frame */ ,(int)offsetof(Builder_obj,_frame),HX_("_frame",6e,bf,6a,02)},
	{::hx::fsObject /*  ::haxe::ui::containers::Box */ ,(int)offsetof(Builder_obj,_contents),HX_("_contents",79,fc,b9,76)},
	{::hx::fsObject /*  ::haxe::ui::components::Label */ ,(int)offsetof(Builder_obj,_label),HX_("_label",35,55,96,6b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Builder_obj_sStaticStorageInfo = 0;
#endif

static ::String Builder_obj_sMemberFields[] = {
	HX_("_frame",6e,bf,6a,02),
	HX_("_contents",79,fc,b9,76),
	HX_("_label",35,55,96,6b),
	HX_("create",fc,66,0f,7c),
	HX_("addComponent",5c,12,a8,0e),
	::String(null()) };

::hx::Class Builder_obj::__mClass;

void Builder_obj::__register()
{
	Builder_obj _hx_dummy;
	Builder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._Frame.Builder",65,3d,96,9e);
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
} // end namespace containers
} // end namespace _Frame
