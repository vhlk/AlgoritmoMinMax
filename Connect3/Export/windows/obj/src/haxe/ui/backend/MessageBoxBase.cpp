// Generated by Haxe 4.2.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_DialogBase
#include <haxe/ui/backend/DialogBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_MessageBoxBase
#include <haxe/ui/backend/MessageBoxBase.h>
#endif
#ifndef INCLUDED_haxe_ui_binding_BindingManager
#include <haxe/ui/binding/BindingManager.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Image
#include <haxe/ui/components/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_dialogs_Dialog
#include <haxe/ui/containers/dialogs/Dialog.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_dialogs__MessageBox_MessageBoxType_Impl_
#include <haxe/ui/containers/dialogs/_MessageBox/MessageBoxType_Impl_.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_f4bb8fca1fb65fdc_16_new,"haxe.ui.backend.MessageBoxBase","new",0x5238c5f3,"haxe.ui.backend.MessageBoxBase.new","haxe/ui/backend/MessageBoxBase.hx",16,0xf06d1d1c)
HX_LOCAL_STACK_FRAME(_hx_pos_f4bb8fca1fb65fdc_45_get_message,"haxe.ui.backend.MessageBoxBase","get_message",0x200cd671,"haxe.ui.backend.MessageBoxBase.get_message","haxe/ui/backend/MessageBoxBase.hx",45,0xf06d1d1c)
HX_LOCAL_STACK_FRAME(_hx_pos_f4bb8fca1fb65fdc_47_set_message,"haxe.ui.backend.MessageBoxBase","set_message",0x2a79dd7d,"haxe.ui.backend.MessageBoxBase.set_message","haxe/ui/backend/MessageBoxBase.hx",47,0xf06d1d1c)
HX_LOCAL_STACK_FRAME(_hx_pos_f4bb8fca1fb65fdc_55_get_type,"haxe.ui.backend.MessageBoxBase","get_type",0x563ca3d0,"haxe.ui.backend.MessageBoxBase.get_type","haxe/ui/backend/MessageBoxBase.hx",55,0xf06d1d1c)
HX_LOCAL_STACK_FRAME(_hx_pos_f4bb8fca1fb65fdc_57_set_type,"haxe.ui.backend.MessageBoxBase","set_type",0x0499fd44,"haxe.ui.backend.MessageBoxBase.set_type","haxe/ui/backend/MessageBoxBase.hx",57,0xf06d1d1c)
HX_LOCAL_STACK_FRAME(_hx_pos_9ab3100e56f4c583_370_registerBehaviours,"haxe.ui.backend.MessageBoxBase","registerBehaviours",0x1b05efa6,"haxe.ui.backend.MessageBoxBase.registerBehaviours","haxe/ui/macros/Macros.hx",370,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_9e25eb43b50e10a3_525_cloneComponent,"haxe.ui.backend.MessageBoxBase","cloneComponent",0x0bc806ed,"haxe.ui.backend.MessageBoxBase.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",525,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_9ab3100e56f4c583_351_self,"haxe.ui.backend.MessageBoxBase","self",0xa2c27699,"haxe.ui.backend.MessageBoxBase.self","haxe/ui/macros/Macros.hx",351,0x27866361)
namespace haxe{
namespace ui{
namespace backend{

void MessageBoxBase_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_f4bb8fca1fb65fdc_16_new)
HXLINE(  52)		this->_type = null();
HXLINE(  23)		super::__construct();
HXLINE(  26)		 ::haxe::ui::containers::HBox hbox =  ::haxe::ui::containers::HBox_obj::__alloc( HX_CTX );
HXLINE(  27)		hbox->set_percentWidth(100);
HXLINE(  28)		hbox->set_styleString(HX_("spacing:10px;",fd,34,84,a5));
HXLINE(  29)		this->addComponent(hbox);
HXLINE(  31)		this->iconImage =  ::haxe::ui::components::Image_obj::__alloc( HX_CTX );
HXLINE(  32)		this->iconImage->set_id(HX_("iconImage",22,f1,2c,f7));
HXLINE(  33)		hbox->addComponent(this->iconImage);
HXLINE(  35)		this->messageLabel =  ::haxe::ui::components::Label_obj::__alloc( HX_CTX );
HXLINE(  36)		this->messageLabel->set_id(HX_("messageLabel",ad,f6,4f,c6));
HXLINE(  37)		this->messageLabel->set_percentWidth(100);
HXLINE(  38)		hbox->addComponent(this->messageLabel);
            	}

Dynamic MessageBoxBase_obj::__CreateEmpty() { return new MessageBoxBase_obj; }

void *MessageBoxBase_obj::_hx_vtable = 0;

Dynamic MessageBoxBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MessageBoxBase_obj > _hx_result = new MessageBoxBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MessageBoxBase_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x241810fb) {
		if (inClassId<=(int)0x1395e371) {
			if (inClassId<=(int)0x0c89e854) {
				if (inClassId<=(int)0x0330636f) {
					if (inClassId<=(int)0x01557b4b) {
						return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
					} else {
						return inClassId==(int)0x0330636f;
					}
				} else {
					return inClassId==(int)0x0c89e854;
				}
			} else {
				return inClassId==(int)0x0f2dd418 || inClassId==(int)0x1395e371;
			}
		} else {
			if (inClassId<=(int)0x1f4df417) {
				if (inClassId<=(int)0x1e1df847) {
					return inClassId==(int)0x13d76ae7 || inClassId==(int)0x1e1df847;
				} else {
					return inClassId==(int)0x1f4df417;
				}
			} else {
				return inClassId==(int)0x241810fb;
			}
		}
	} else {
		if (inClassId<=(int)0x6b353933) {
			if (inClassId<=(int)0x3424f103) {
				if (inClassId<=(int)0x2ccba775) {
					return inClassId==(int)0x241b0321 || inClassId==(int)0x2ccba775;
				} else {
					return inClassId==(int)0x3424f103;
				}
			} else {
				return inClassId==(int)0x4af7dd8e || inClassId==(int)0x6b353933;
			}
		} else {
			if (inClassId<=(int)0x7ec24579) {
				if (inClassId<=(int)0x72c347e4) {
					return inClassId==(int)0x715d6dae || inClassId==(int)0x72c347e4;
				} else {
					return inClassId==(int)0x7ec24579;
				}
			} else {
				return inClassId==(int)0x7f2ed947;
			}
		}
	}
}

::String MessageBoxBase_obj::get_message(){
            	HX_STACKFRAME(&_hx_pos_f4bb8fca1fb65fdc_45_get_message)
HXDLIN(  45)		return this->messageLabel->get_text();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MessageBoxBase_obj,get_message,return )

::String MessageBoxBase_obj::set_message(::String value){
            	HX_STACKFRAME(&_hx_pos_f4bb8fca1fb65fdc_47_set_message)
HXLINE(  48)		this->messageLabel->set_text(value);
HXLINE(  49)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MessageBoxBase_obj,set_message,return )

::String MessageBoxBase_obj::get_type(){
            	HX_STACKFRAME(&_hx_pos_f4bb8fca1fb65fdc_55_get_type)
HXDLIN(  55)		return this->_type;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MessageBoxBase_obj,get_type,return )

::String MessageBoxBase_obj::set_type(::String value){
            	HX_STACKFRAME(&_hx_pos_f4bb8fca1fb65fdc_57_set_type)
HXLINE(  58)		this->_type = ::haxe::ui::containers::dialogs::_MessageBox::MessageBoxType_Impl__obj::toString(value);
HXLINE(  59)		this->iconImage->addClass(this->_type,null(),null());
HXLINE(  60)		this->addClass(this->_type,null(),null());
HXLINE(  61)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MessageBoxBase_obj,set_type,return )

void MessageBoxBase_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_9ab3100e56f4c583_370_registerBehaviours)
HXDLIN( 370)		this->super::registerBehaviours();
            	}


 ::haxe::ui::core::ComponentContainer MessageBoxBase_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_9e25eb43b50e10a3_525_cloneComponent)
HXLINE( 300)		 ::haxe::ui::backend::MessageBoxBase c = ( ( ::haxe::ui::backend::MessageBoxBase)(this->super::cloneComponent()) );
HXLINE( 316)		::Array< ::Dynamic> _hx_tmp;
HXDLIN( 316)		if (::hx::IsNull( this->_children )) {
HXLINE( 316)			_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE( 316)			_hx_tmp = this->_children;
            		}
HXDLIN( 316)		::Array< ::Dynamic> _hx_tmp1;
HXDLIN( 316)		if (::hx::IsNull( c->_children )) {
HXLINE( 316)			_hx_tmp1 = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE( 316)			_hx_tmp1 = c->_children;
            		}
HXDLIN( 316)		if ((_hx_tmp->length != _hx_tmp1->length)) {
HXLINE( 317)			int _g = 0;
HXDLIN( 317)			::Array< ::Dynamic> _g1;
HXDLIN( 317)			if (::hx::IsNull( this->_children )) {
HXLINE( 317)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 317)				_g1 = this->_children;
            			}
HXDLIN( 317)			while((_g < _g1->length)){
HXLINE( 317)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 317)				_g = (_g + 1);
HXLINE( 318)				c->addComponent(Dynamic( child->cloneComponent()).StaticCast<  ::haxe::ui::core::Component >());
            			}
            		}
HXLINE( 322)		::haxe::ui::binding::BindingManager_obj::get_instance()->cloneBinding(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),( ( ::haxe::ui::core::Component)(c) ));
HXLINE( 323)		return c;
            	}


 ::haxe::ui::core::ComponentContainer MessageBoxBase_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_9ab3100e56f4c583_351_self)
HXDLIN( 351)		return  ::haxe::ui::backend::MessageBoxBase_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< MessageBoxBase_obj > MessageBoxBase_obj::__new() {
	::hx::ObjectPtr< MessageBoxBase_obj > __this = new MessageBoxBase_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< MessageBoxBase_obj > MessageBoxBase_obj::__alloc(::hx::Ctx *_hx_ctx) {
	MessageBoxBase_obj *__this = (MessageBoxBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MessageBoxBase_obj), true, "haxe.ui.backend.MessageBoxBase"));
	*(void **)__this = MessageBoxBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

MessageBoxBase_obj::MessageBoxBase_obj()
{
}

void MessageBoxBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MessageBoxBase);
	HX_MARK_MEMBER_NAME(iconImage,"iconImage");
	HX_MARK_MEMBER_NAME(messageLabel,"messageLabel");
	HX_MARK_MEMBER_NAME(_type,"_type");
	 ::haxe::ui::containers::dialogs::Dialog_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MessageBoxBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(iconImage,"iconImage");
	HX_VISIT_MEMBER_NAME(messageLabel,"messageLabel");
	HX_VISIT_MEMBER_NAME(_type,"_type");
	 ::haxe::ui::containers::dialogs::Dialog_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MessageBoxBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_type() ); }
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_type") ) { return ::hx::Val( _type ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_message() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_type") ) { return ::hx::Val( get_type_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_type") ) { return ::hx::Val( set_type_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"iconImage") ) { return ::hx::Val( iconImage ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_message") ) { return ::hx::Val( get_message_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_message") ) { return ::hx::Val( set_message_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"messageLabel") ) { return ::hx::Val( messageLabel ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MessageBoxBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_type(inValue.Cast< ::String >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_type") ) { _type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_message(inValue.Cast< ::String >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"iconImage") ) { iconImage=inValue.Cast<  ::haxe::ui::components::Image >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"messageLabel") ) { messageLabel=inValue.Cast<  ::haxe::ui::components::Label >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MessageBoxBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("iconImage",22,f1,2c,f7));
	outFields->push(HX_("messageLabel",ad,f6,4f,c6));
	outFields->push(HX_("message",c7,35,11,9a));
	outFields->push(HX_("_type",99,0e,1a,00));
	outFields->push(HX_("type",ba,f2,08,4d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MessageBoxBase_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::components::Image */ ,(int)offsetof(MessageBoxBase_obj,iconImage),HX_("iconImage",22,f1,2c,f7)},
	{::hx::fsObject /*  ::haxe::ui::components::Label */ ,(int)offsetof(MessageBoxBase_obj,messageLabel),HX_("messageLabel",ad,f6,4f,c6)},
	{::hx::fsString,(int)offsetof(MessageBoxBase_obj,_type),HX_("_type",99,0e,1a,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MessageBoxBase_obj_sStaticStorageInfo = 0;
#endif

static ::String MessageBoxBase_obj_sMemberFields[] = {
	HX_("iconImage",22,f1,2c,f7),
	HX_("messageLabel",ad,f6,4f,c6),
	HX_("get_message",de,95,0b,20),
	HX_("set_message",ea,9c,78,2a),
	HX_("_type",99,0e,1a,00),
	HX_("get_type",43,ae,c3,cc),
	HX_("set_type",b7,07,21,7b),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class MessageBoxBase_obj::__mClass;

void MessageBoxBase_obj::__register()
{
	MessageBoxBase_obj _hx_dummy;
	MessageBoxBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.MessageBoxBase",81,50,64,dc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MessageBoxBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MessageBoxBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MessageBoxBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MessageBoxBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
