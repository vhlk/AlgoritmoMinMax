// Generated by Haxe 4.2.0
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
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
#ifndef INCLUDED_haxe_ui_binding_BindingManager
#include <haxe/ui/binding/BindingManager.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
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
#ifndef INCLUDED_haxe_ui_core_ItemRenderer
#include <haxe/ui/core/ItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_events_ItemEvent
#include <haxe/ui/events/ItemEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_MouseEvent
#include <haxe/ui/events/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_util_TypeConverter
#include <haxe/ui/util/TypeConverter.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_b9089dc793ca35ae_10_new,"haxe.ui.core.ItemRenderer","new",0x7561ad25,"haxe.ui.core.ItemRenderer.new","haxe/ui/core/ItemRenderer.hx",10,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_20__onItemMouseOver,"haxe.ui.core.ItemRenderer","_onItemMouseOver",0x92442083,"haxe.ui.core.ItemRenderer._onItemMouseOver","haxe/ui/core/ItemRenderer.hx",20,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_24__onItemMouseOut,"haxe.ui.core.ItemRenderer","_onItemMouseOut",0x691f4c3f,"haxe.ui.core.ItemRenderer._onItemMouseOut","haxe/ui/core/ItemRenderer.hx",24,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_28__onItemMouseDown,"haxe.ui.core.ItemRenderer","_onItemMouseDown",0x8af98791,"haxe.ui.core.ItemRenderer._onItemMouseDown","haxe/ui/core/ItemRenderer.hx",28,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_32__onItemMouseUp,"haxe.ui.core.ItemRenderer","_onItemMouseUp",0x16487bca,"haxe.ui.core.ItemRenderer._onItemMouseUp","haxe/ui/core/ItemRenderer.hx",32,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_38_get_allowHover,"haxe.ui.core.ItemRenderer","get_allowHover",0x22bd2817,"haxe.ui.core.ItemRenderer.get_allowHover","haxe/ui/core/ItemRenderer.hx",38,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_40_set_allowHover,"haxe.ui.core.ItemRenderer","set_allowHover",0x42dd108b,"haxe.ui.core.ItemRenderer.set_allowHover","haxe/ui/core/ItemRenderer.hx",40,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_58_get_data,"haxe.ui.core.ItemRenderer","get_data",0x25a0cace,"haxe.ui.core.ItemRenderer.get_data","haxe/ui/core/ItemRenderer.hx",58,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_60_set_data,"haxe.ui.core.ItemRenderer","set_data",0xd3fe2442,"haxe.ui.core.ItemRenderer.set_data","haxe/ui/core/ItemRenderer.hx",60,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_73_validateComponentData,"haxe.ui.core.ItemRenderer","validateComponentData",0x5342e116,"haxe.ui.core.ItemRenderer.validateComponentData","haxe/ui/core/ItemRenderer.hx",73,0x40996daa)
static const ::String _hx_array_data_221936b3_13[] = {
	HX_("text",ad,cc,f9,4c),
};
static const ::String _hx_array_data_221936b3_14[] = {
	HX_("text",ad,cc,f9,4c),
};
static const ::String _hx_array_data_221936b3_15[] = {
	HX_("text",ad,cc,f9,4c),
};
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_112_onItemChange,"haxe.ui.core.ItemRenderer","onItemChange",0x7768df7d,"haxe.ui.core.ItemRenderer.onItemChange","haxe/ui/core/ItemRenderer.hx",112,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_129_onItemClick,"haxe.ui.core.ItemRenderer","onItemClick",0xfe9c6edb,"haxe.ui.core.ItemRenderer.onItemClick","haxe/ui/core/ItemRenderer.hx",129,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_142_updateValues,"haxe.ui.core.ItemRenderer","updateValues",0x491f8d66,"haxe.ui.core.ItemRenderer.updateValues","haxe/ui/core/ItemRenderer.hx",142,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_a11f04ad81e36a66_370_registerBehaviours,"haxe.ui.core.ItemRenderer","registerBehaviours",0x2160f0b4,"haxe.ui.core.ItemRenderer.registerBehaviours","haxe/ui/macros/Macros.hx",370,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_f5f102a918a50d65_525_cloneComponent,"haxe.ui.core.ItemRenderer","cloneComponent",0x7cede8fb,"haxe.ui.core.ItemRenderer.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",525,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_a11f04ad81e36a66_351_self,"haxe.ui.core.ItemRenderer","self",0x4363db27,"haxe.ui.core.ItemRenderer.self","haxe/ui/macros/Macros.hx",351,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_10_boot,"haxe.ui.core.ItemRenderer","boot",0x382ed3cd,"haxe.ui.core.ItemRenderer.boot","haxe/ui/core/ItemRenderer.hx",10,0x40996daa)
namespace haxe{
namespace ui{
namespace core{

void ItemRenderer_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b9089dc793ca35ae_10_new)
HXLINE(  72)		this->_fieldList = null();
HXLINE(  70)		this->itemIndex = -1;
HXLINE(  35)		this->_allowHover = true;
HXLINE(  12)		super::__construct();
HXLINE(  13)		this->registerEvent(HX_("mouseover",f9,1d,34,0b),this->_onItemMouseOver_dyn(),null());
HXLINE(  14)		this->registerEvent(HX_("mouseout",89,2f,36,a4),this->_onItemMouseOut_dyn(),null());
HXLINE(  15)		this->registerEvent(HX_("mousedown",07,85,e9,03),this->_onItemMouseDown_dyn(),null());
HXLINE(  16)		this->registerEvent(HX_("mouseup",c0,0f,73,c0),this->_onItemMouseUp_dyn(),null());
            	}

Dynamic ItemRenderer_obj::__CreateEmpty() { return new ItemRenderer_obj; }

void *ItemRenderer_obj::_hx_vtable = 0;

Dynamic ItemRenderer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ItemRenderer_obj > _hx_result = new ItemRenderer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ItemRenderer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x241810fb) {
		if (inClassId<=(int)0x0f2dd418) {
			if (inClassId<=(int)0x0330636f) {
				if (inClassId<=(int)0x01557b4b) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
				} else {
					return inClassId==(int)0x0330636f;
				}
			} else {
				return inClassId==(int)0x0c89e854 || inClassId==(int)0x0f2dd418;
			}
		} else {
			if (inClassId<=(int)0x1f4df417) {
				if (inClassId<=(int)0x13d76ae7) {
					return inClassId==(int)0x1395e371 || inClassId==(int)0x13d76ae7;
				} else {
					return inClassId==(int)0x1f4df417;
				}
			} else {
				return inClassId==(int)0x241810fb;
			}
		}
	} else {
		if (inClassId<=(int)0x6b353933) {
			if (inClassId<=(int)0x4af7dd8e) {
				if (inClassId<=(int)0x2ccba775) {
					return inClassId==(int)0x241b0321 || inClassId==(int)0x2ccba775;
				} else {
					return inClassId==(int)0x4af7dd8e;
				}
			} else {
				return inClassId==(int)0x5e4d6caf || inClassId==(int)0x6b353933;
			}
		} else {
			if (inClassId<=(int)0x72c347e4) {
				return inClassId==(int)0x715d6dae || inClassId==(int)0x72c347e4;
			} else {
				return inClassId==(int)0x7ec24579;
			}
		}
	}
}

void ItemRenderer_obj::_onItemMouseOver( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_b9089dc793ca35ae_20__onItemMouseOver)
HXDLIN(  20)		this->addClass(HX_(":hover",42,d3,17,5c),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ItemRenderer_obj,_onItemMouseOver,(void))

void ItemRenderer_obj::_onItemMouseOut( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_b9089dc793ca35ae_24__onItemMouseOut)
HXDLIN(  24)		this->removeClass(HX_(":hover",42,d3,17,5c),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ItemRenderer_obj,_onItemMouseOut,(void))

void ItemRenderer_obj::_onItemMouseDown( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_b9089dc793ca35ae_28__onItemMouseDown)
HXDLIN(  28)		this->addClass(HX_(":down",9c,9d,ab,a7),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ItemRenderer_obj,_onItemMouseDown,(void))

void ItemRenderer_obj::_onItemMouseUp( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_b9089dc793ca35ae_32__onItemMouseUp)
HXDLIN(  32)		this->removeClass(HX_(":down",9c,9d,ab,a7),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ItemRenderer_obj,_onItemMouseUp,(void))

bool ItemRenderer_obj::get_allowHover(){
            	HX_STACKFRAME(&_hx_pos_b9089dc793ca35ae_38_get_allowHover)
HXDLIN(  38)		return this->_allowHover;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ItemRenderer_obj,get_allowHover,return )

bool ItemRenderer_obj::set_allowHover(bool value){
            	HX_STACKFRAME(&_hx_pos_b9089dc793ca35ae_40_set_allowHover)
HXLINE(  41)		if ((this->_allowHover == value)) {
HXLINE(  42)			return value;
            		}
HXLINE(  44)		this->_allowHover = value;
HXLINE(  45)		if ((this->_allowHover == true)) {
HXLINE(  46)			this->registerEvent(HX_("mouseover",f9,1d,34,0b),this->_onItemMouseOver_dyn(),null());
HXLINE(  47)			this->registerEvent(HX_("mouseout",89,2f,36,a4),this->_onItemMouseOut_dyn(),null());
            		}
            		else {
HXLINE(  49)			this->unregisterEvent(HX_("mouseover",f9,1d,34,0b),this->_onItemMouseOver_dyn());
HXLINE(  50)			this->unregisterEvent(HX_("mouseout",89,2f,36,a4),this->_onItemMouseOut_dyn());
            		}
HXLINE(  52)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ItemRenderer_obj,set_allowHover,return )

 ::Dynamic ItemRenderer_obj::get_data(){
            	HX_STACKFRAME(&_hx_pos_b9089dc793ca35ae_58_get_data)
HXDLIN(  58)		return this->_data;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ItemRenderer_obj,get_data,return )

 ::Dynamic ItemRenderer_obj::set_data( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_b9089dc793ca35ae_60_set_data)
HXLINE(  61)		if (::hx::IsEq( value,this->_data )) {
HXLINE(  62)			return value;
            		}
HXLINE(  65)		this->_data = value;
HXLINE(  66)		this->invalidateComponent(HX_("data",2a,56,63,42));
HXLINE(  67)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ItemRenderer_obj,set_data,return )

void ItemRenderer_obj::validateComponentData(){
            	HX_STACKFRAME(&_hx_pos_b9089dc793ca35ae_73_validateComponentData)
HXLINE(  74)		bool _hx_tmp;
HXDLIN(  74)		if (::hx::IsNotNull( this->_data )) {
HXLINE(  74)			if (::hx::IsNotNull( this->_fieldList )) {
HXLINE(  74)				_hx_tmp = (this->_fieldList->length == 0);
            			}
            			else {
HXLINE(  74)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE(  74)			_hx_tmp = false;
            		}
HXDLIN(  74)		if (_hx_tmp) {
HXLINE(  75)			 ::ValueType _g = ::Type_obj::_hx_typeof(this->_data);
HXDLIN(  75)			switch((int)(_g->_hx_getIndex())){
            				case (int)4: {
HXLINE(  77)					if ((::Std_obj::isOfType(this->_data,::hx::ClassOf< ::String >()) == false)) {
HXLINE(  78)						::Array< ::String > fieldList = ::Reflect_obj::fields(this->_data);
HXLINE(  79)						if (::hx::IsNotNull( ::Type_obj::getClass(this->_data) )) {
HXLINE(  80)							::Array< ::String > instanceFields = ::Type_obj::getInstanceFields(::Type_obj::getClass(this->_data));
HXLINE(  81)							{
HXLINE(  81)								int _g = 0;
HXDLIN(  81)								while((_g < instanceFields->length)){
HXLINE(  81)									::String i = instanceFields->__get(_g);
HXDLIN(  81)									_g = (_g + 1);
HXLINE(  82)									bool _hx_tmp;
HXDLIN(  82)									if ((::Reflect_obj::isFunction(::Reflect_obj::getProperty(this->_data,i)) == false)) {
HXLINE(  82)										_hx_tmp = (fieldList->indexOf(i,null()) == -1);
            									}
            									else {
HXLINE(  82)										_hx_tmp = false;
            									}
HXDLIN(  82)									if (_hx_tmp) {
HXLINE(  83)										fieldList->push(i);
            									}
            								}
            							}
HXLINE(  86)							this->_fieldList = fieldList;
            						}
            					}
            					else {
HXLINE(  89)						this->_fieldList = ::Array_obj< ::String >::fromData( _hx_array_data_221936b3_13,1);
            					}
            				}
            				break;
            				case (int)6: {
HXLINE(  76)					::hx::Class _g1 = _g->_hx_getObject(0).StaticCast< ::hx::Class >();
HXLINE(  77)					if ((::Std_obj::isOfType(this->_data,::hx::ClassOf< ::String >()) == false)) {
HXLINE(  78)						::Array< ::String > fieldList = ::Reflect_obj::fields(this->_data);
HXLINE(  79)						if (::hx::IsNotNull( ::Type_obj::getClass(this->_data) )) {
HXLINE(  80)							::Array< ::String > instanceFields = ::Type_obj::getInstanceFields(::Type_obj::getClass(this->_data));
HXLINE(  81)							{
HXLINE(  81)								int _g = 0;
HXDLIN(  81)								while((_g < instanceFields->length)){
HXLINE(  81)									::String i = instanceFields->__get(_g);
HXDLIN(  81)									_g = (_g + 1);
HXLINE(  82)									bool _hx_tmp;
HXDLIN(  82)									if ((::Reflect_obj::isFunction(::Reflect_obj::getProperty(this->_data,i)) == false)) {
HXLINE(  82)										_hx_tmp = (fieldList->indexOf(i,null()) == -1);
            									}
            									else {
HXLINE(  82)										_hx_tmp = false;
            									}
HXDLIN(  82)									if (_hx_tmp) {
HXLINE(  83)										fieldList->push(i);
            									}
            								}
            							}
HXLINE(  86)							this->_fieldList = fieldList;
            						}
            					}
            					else {
HXLINE(  89)						this->_fieldList = ::Array_obj< ::String >::fromData( _hx_array_data_221936b3_14,1);
            					}
            				}
            				break;
            				default:{
HXLINE(  92)					this->_fieldList = ::Array_obj< ::String >::fromData( _hx_array_data_221936b3_15,1);
            				}
            			}
            		}
HXLINE(  96)		this->updateValues(this->_data,this->_fieldList);
HXLINE(  98)		::Array< ::Dynamic> components = this->findComponents(null(),::hx::ClassOf< ::haxe::ui::core::InteractiveComponent >(),null());
HXLINE(  99)		{
HXLINE(  99)			int _g = 0;
HXDLIN(  99)			while((_g < components->length)){
HXLINE(  99)				 ::haxe::ui::core::InteractiveComponent c = components->__get(_g).StaticCast<  ::haxe::ui::core::InteractiveComponent >();
HXDLIN(  99)				_g = (_g + 1);
HXLINE( 100)				if (::Std_obj::isOfType(c,::hx::ClassOf< ::haxe::ui::components::Button >())) {
HXLINE( 101)					if ((c->hasEvent(HX_("click",48,7c,5e,48),this->onItemClick_dyn()) == false)) {
HXLINE( 102)						c->registerEvent(HX_("click",48,7c,5e,48),this->onItemClick_dyn(),null());
            					}
            				}
            				else {
HXLINE( 105)					if ((c->hasEvent(HX_("change",70,91,72,b7),this->onItemChange_dyn()) == false)) {
HXLINE( 106)						c->registerEvent(HX_("change",70,91,72,b7),this->onItemChange_dyn(),null());
            					}
            				}
            			}
            		}
            	}


void ItemRenderer_obj::onItemChange( ::haxe::ui::events::UIEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_b9089dc793ca35ae_112_onItemChange)
HXLINE( 113)		if ((this->itemIndex < 0)) {
HXLINE( 114)			return;
            		}
HXLINE( 116)		 ::Dynamic v = event->target->get_value();
HXLINE( 117)		if (::hx::IsNotNull( this->_data )) {
HXLINE( 118)			 ::Dynamic _hx_tmp = this->_data;
HXDLIN( 118)			::Reflect_obj::setProperty(_hx_tmp,event->target->get_id(),v);
            		}
HXLINE( 120)		 ::haxe::ui::events::ItemEvent e =  ::haxe::ui::events::ItemEvent_obj::__alloc( HX_CTX ,HX_("itemComponentEvent",90,6e,bc,55),null(),null());
HXLINE( 121)		e->bubble = true;
HXLINE( 122)		e->source = event->target;
HXLINE( 123)		e->sourceEvent = event;
HXLINE( 124)		e->itemIndex = this->itemIndex;
HXLINE( 125)		e->data = this->_data;
HXLINE( 126)		this->dispatch(e);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ItemRenderer_obj,onItemChange,(void))

void ItemRenderer_obj::onItemClick( ::haxe::ui::events::UIEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_b9089dc793ca35ae_129_onItemClick)
HXLINE( 130)		if ((this->itemIndex < 0)) {
HXLINE( 131)			return;
            		}
HXLINE( 133)		 ::haxe::ui::events::ItemEvent e =  ::haxe::ui::events::ItemEvent_obj::__alloc( HX_CTX ,HX_("itemComponentEvent",90,6e,bc,55),null(),null());
HXLINE( 134)		e->bubble = true;
HXLINE( 135)		e->source = event->target;
HXLINE( 136)		e->sourceEvent = event;
HXLINE( 137)		e->itemIndex = this->itemIndex;
HXLINE( 138)		e->data = this->_data;
HXLINE( 139)		this->dispatch(e);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ItemRenderer_obj,onItemClick,(void))

void ItemRenderer_obj::updateValues( ::Dynamic value,::Array< ::String > fieldList){
            	HX_STACKFRAME(&_hx_pos_b9089dc793ca35ae_142_updateValues)
HXLINE( 143)		if (::hx::IsNull( fieldList )) {
HXLINE( 144)			fieldList = ::Reflect_obj::fields(value);
            		}
HXLINE( 147)		 ::Dynamic valueObject = null();
HXLINE( 148)		{
HXLINE( 148)			 ::ValueType _g = ::Type_obj::_hx_typeof(value);
HXDLIN( 148)			switch((int)(_g->_hx_getIndex())){
            				case (int)4: {
HXLINE( 150)					if ((::Std_obj::isOfType(value,::hx::ClassOf< ::String >()) == false)) {
HXLINE( 151)						valueObject = value;
            					}
            					else {
HXLINE( 153)						valueObject =  ::Dynamic(::hx::Anon_obj::Create(1)
            							->setFixed(0,HX_("text",ad,cc,f9,4c),value));
            					}
            				}
            				break;
            				case (int)6: {
HXLINE( 149)					::hx::Class _g1 = _g->_hx_getObject(0).StaticCast< ::hx::Class >();
HXLINE( 150)					if ((::Std_obj::isOfType(value,::hx::ClassOf< ::String >()) == false)) {
HXLINE( 151)						valueObject = value;
            					}
            					else {
HXLINE( 153)						valueObject =  ::Dynamic(::hx::Anon_obj::Create(1)
            							->setFixed(0,HX_("text",ad,cc,f9,4c),value));
            					}
            				}
            				break;
            				default:{
HXLINE( 156)					valueObject =  ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("text",ad,cc,f9,4c),value));
            				}
            			}
            		}
HXLINE( 159)		{
HXLINE( 159)			int _g1 = 0;
HXDLIN( 159)			while((_g1 < fieldList->length)){
HXLINE( 159)				::String f = fieldList->__get(_g1);
HXDLIN( 159)				_g1 = (_g1 + 1);
HXLINE( 160)				 ::Dynamic v = ::Reflect_obj::getProperty(valueObject,f);
HXLINE( 161)				if (::hx::IsPointerEq( ::Type_obj::_hx_typeof(v),::ValueType_obj::TObject_dyn() )) {
HXLINE( 162)					this->updateValues(v,null());
            				}
            				else {
HXLINE( 164)					 ::haxe::ui::core::Component c = ( ( ::haxe::ui::core::Component)(this->findComponent(f,null(),true,null())) );
HXLINE( 165)					bool _hx_tmp;
HXDLIN( 165)					if (::hx::IsNotNull( c )) {
HXLINE( 165)						_hx_tmp = ::hx::IsNotNull( v );
            					}
            					else {
HXLINE( 165)						_hx_tmp = false;
            					}
HXDLIN( 165)					if (_hx_tmp) {
HXLINE( 166)						 ::Dynamic propValue = ::haxe::ui::util::TypeConverter_obj::convert(v);
HXLINE( 167)						c->set_value(propValue);
HXLINE( 169)						if (::Std_obj::isOfType(c,::hx::ClassOf< ::haxe::ui::core::InteractiveComponent >())) {
HXLINE( 170)							if ((c->hasEvent(HX_("change",70,91,72,b7),this->onItemChange_dyn()) == false)) {
HXLINE( 171)								c->registerEvent(HX_("change",70,91,72,b7),this->onItemChange_dyn(),null());
            							}
HXLINE( 173)							if ((c->hasEvent(HX_("click",48,7c,5e,48),this->onItemClick_dyn()) == false)) {
HXLINE( 174)								c->registerEvent(HX_("click",48,7c,5e,48),this->onItemClick_dyn(),null());
            							}
            						}
HXLINE( 178)						c->show();
            					}
            					else {
HXLINE( 179)						if (::hx::IsNotNull( c )) {
HXLINE( 180)							c->hide();
            						}
            						else {
HXLINE( 181)							if ((f != HX_("id",db,5b,00,00))) {
HXLINE( 182)								try {
            									HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 183)									::Reflect_obj::setProperty(::hx::ObjectPtr<OBJ_>(this),f,v);
            								} catch( ::Dynamic _hx_e) {
            									if (_hx_e.IsClass<  ::Dynamic >() ){
            										HX_STACK_BEGIN_CATCH
            										 ::Dynamic _g = _hx_e;
HXLINE(   1)										{
HXLINE(   1)											null();
            										}
            									}
            									else {
            										HX_STACK_DO_THROW(_hx_e);
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ItemRenderer_obj,updateValues,(void))

void ItemRenderer_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_a11f04ad81e36a66_370_registerBehaviours)
HXDLIN( 370)		this->super::registerBehaviours();
            	}


 ::haxe::ui::core::ComponentContainer ItemRenderer_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_f5f102a918a50d65_525_cloneComponent)
HXLINE( 300)		 ::haxe::ui::core::ItemRenderer c = ( ( ::haxe::ui::core::ItemRenderer)(this->super::cloneComponent()) );
HXLINE( 311)		c->set_allowHover(this->get_allowHover());
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


 ::haxe::ui::core::ComponentContainer ItemRenderer_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_a11f04ad81e36a66_351_self)
HXDLIN( 351)		return  ::haxe::ui::core::ItemRenderer_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< ItemRenderer_obj > ItemRenderer_obj::__new() {
	::hx::ObjectPtr< ItemRenderer_obj > __this = new ItemRenderer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ItemRenderer_obj > ItemRenderer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ItemRenderer_obj *__this = (ItemRenderer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ItemRenderer_obj), true, "haxe.ui.core.ItemRenderer"));
	*(void **)__this = ItemRenderer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ItemRenderer_obj::ItemRenderer_obj()
{
}

void ItemRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ItemRenderer);
	HX_MARK_MEMBER_NAME(_allowHover,"_allowHover");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(itemIndex,"itemIndex");
	HX_MARK_MEMBER_NAME(_fieldList,"_fieldList");
	 ::haxe::ui::containers::Box_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ItemRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_allowHover,"_allowHover");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(itemIndex,"itemIndex");
	HX_VISIT_MEMBER_NAME(_fieldList,"_fieldList");
	 ::haxe::ui::containers::Box_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ItemRenderer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_data() ); }
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { return ::hx::Val( _data ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_data") ) { return ::hx::Val( get_data_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_data") ) { return ::hx::Val( set_data_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"itemIndex") ) { return ::hx::Val( itemIndex ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"allowHover") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_allowHover() ); }
		if (HX_FIELD_EQ(inName,"_fieldList") ) { return ::hx::Val( _fieldList ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_allowHover") ) { return ::hx::Val( _allowHover ); }
		if (HX_FIELD_EQ(inName,"onItemClick") ) { return ::hx::Val( onItemClick_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onItemChange") ) { return ::hx::Val( onItemChange_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateValues") ) { return ::hx::Val( updateValues_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_onItemMouseUp") ) { return ::hx::Val( _onItemMouseUp_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_allowHover") ) { return ::hx::Val( get_allowHover_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_allowHover") ) { return ::hx::Val( set_allowHover_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_onItemMouseOut") ) { return ::hx::Val( _onItemMouseOut_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_onItemMouseOver") ) { return ::hx::Val( _onItemMouseOver_dyn() ); }
		if (HX_FIELD_EQ(inName,"_onItemMouseDown") ) { return ::hx::Val( _onItemMouseDown_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"validateComponentData") ) { return ::hx::Val( validateComponentData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ItemRenderer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_data(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"itemIndex") ) { itemIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"allowHover") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_allowHover(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"_fieldList") ) { _fieldList=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_allowHover") ) { _allowHover=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ItemRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_allowHover",92,6d,ba,28));
	outFields->push(HX_("allowHover",73,a0,30,56));
	outFields->push(HX_("_data",09,72,74,f5));
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("itemIndex",ff,00,00,be));
	outFields->push(HX_("_fieldList",f9,3d,a4,3a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ItemRenderer_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(ItemRenderer_obj,_allowHover),HX_("_allowHover",92,6d,ba,28)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ItemRenderer_obj,_data),HX_("_data",09,72,74,f5)},
	{::hx::fsInt,(int)offsetof(ItemRenderer_obj,itemIndex),HX_("itemIndex",ff,00,00,be)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(ItemRenderer_obj,_fieldList),HX_("_fieldList",f9,3d,a4,3a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ItemRenderer_obj_sStaticStorageInfo = 0;
#endif

static ::String ItemRenderer_obj_sMemberFields[] = {
	HX_("_onItemMouseOver",68,54,6a,28),
	HX_("_onItemMouseOut",fa,db,96,fb),
	HX_("_onItemMouseDown",76,bb,1f,21),
	HX_("_onItemMouseUp",6f,7c,b1,bf),
	HX_("_allowHover",92,6d,ba,28),
	HX_("get_allowHover",bc,28,26,cc),
	HX_("set_allowHover",30,11,46,ec),
	HX_("_data",09,72,74,f5),
	HX_("get_data",b3,11,1e,c2),
	HX_("set_data",27,6b,7b,70),
	HX_("itemIndex",ff,00,00,be),
	HX_("_fieldList",f9,3d,a4,3a),
	HX_("validateComponentData",11,6f,7d,76),
	HX_("onItemChange",e2,fc,c3,7d),
	HX_("onItemClick",16,c5,8c,6a),
	HX_("updateValues",cb,aa,7a,4f),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class ItemRenderer_obj::__mClass;

void ItemRenderer_obj::__register()
{
	ItemRenderer_obj _hx_dummy;
	ItemRenderer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.core.ItemRenderer",b3,36,19,22);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ItemRenderer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ItemRenderer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ItemRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ItemRenderer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ItemRenderer_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b9089dc793ca35ae_10_boot)
HXDLIN(  10)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("allowHover",73,a0,30,56), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("clonable",a2,85,a9,a1),null()))))));
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
