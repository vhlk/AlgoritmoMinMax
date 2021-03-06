// Generated by Haxe 4.2.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_ToolkitAssets
#include <haxe/ui/ToolkitAssets.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AssetsBase
#include <haxe/ui/backend/AssetsBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AssetsImpl
#include <haxe/ui/backend/AssetsImpl.h>
#endif
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
#ifndef INCLUDED_haxe_ui_core_TextDisplay
#include <haxe/ui/core/TextDisplay.h>
#endif
#ifndef INCLUDED_haxe_ui_core_TextDisplayData
#include <haxe/ui/core/TextDisplayData.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_aba319191a839d6a_19_new,"haxe.ui.core.TextDisplay","new",0x0409736a,"haxe.ui.core.TextDisplay.new","haxe/ui/core/TextDisplay.hx",19,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_34_get_textStyle,"haxe.ui.core.TextDisplay","get_textStyle",0x1d5e9ca5,"haxe.ui.core.TextDisplay.get_textStyle","haxe/ui/core/TextDisplay.hx",34,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_37_set_textStyle,"haxe.ui.core.TextDisplay","set_textStyle",0x62647eb1,"haxe.ui.core.TextDisplay.set_textStyle","haxe/ui/core/TextDisplay.hx",37,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_43_set_textStyle,"haxe.ui.core.TextDisplay","set_textStyle",0x62647eb1,"haxe.ui.core.TextDisplay.set_textStyle","haxe/ui/core/TextDisplay.hx",43,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_58_get_text,"haxe.ui.core.TextDisplay","get_text",0x6441a0ec,"haxe.ui.core.TextDisplay.get_text","haxe/ui/core/TextDisplay.hx",58,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_60_set_text,"haxe.ui.core.TextDisplay","set_text",0x129efa60,"haxe.ui.core.TextDisplay.set_text","haxe/ui/core/TextDisplay.hx",60,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_73_get_htmlText,"haxe.ui.core.TextDisplay","get_htmlText",0x10387f77,"haxe.ui.core.TextDisplay.get_htmlText","haxe/ui/core/TextDisplay.hx",73,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_75_set_htmlText,"haxe.ui.core.TextDisplay","set_htmlText",0x2531a2eb,"haxe.ui.core.TextDisplay.set_htmlText","haxe/ui/core/TextDisplay.hx",75,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_88_get_left,"haxe.ui.core.TextDisplay","get_left",0x5ef7dc46,"haxe.ui.core.TextDisplay.get_left","haxe/ui/core/TextDisplay.hx",88,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_90_set_left,"haxe.ui.core.TextDisplay","set_left",0x0d5535ba,"haxe.ui.core.TextDisplay.set_left","haxe/ui/core/TextDisplay.hx",90,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_102_get_top,"haxe.ui.core.TextDisplay","get_top",0xbb921f36,"haxe.ui.core.TextDisplay.get_top","haxe/ui/core/TextDisplay.hx",102,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_104_set_top,"haxe.ui.core.TextDisplay","set_top",0xae93b042,"haxe.ui.core.TextDisplay.set_top","haxe/ui/core/TextDisplay.hx",104,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_115_set_width,"haxe.ui.core.TextDisplay","set_width",0xf54584f3,"haxe.ui.core.TextDisplay.set_width","haxe/ui/core/TextDisplay.hx",115,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_126_get_width,"haxe.ui.core.TextDisplay","get_width",0x11f498e7,"haxe.ui.core.TextDisplay.get_width","haxe/ui/core/TextDisplay.hx",126,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_130_set_height,"haxe.ui.core.TextDisplay","set_height",0x5dde485a,"haxe.ui.core.TextDisplay.set_height","haxe/ui/core/TextDisplay.hx",130,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_141_get_height,"haxe.ui.core.TextDisplay","get_height",0x5a60a9e6,"haxe.ui.core.TextDisplay.get_height","haxe/ui/core/TextDisplay.hx",141,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_145_get_textWidth,"haxe.ui.core.TextDisplay","get_textWidth",0x63a3ad7a,"haxe.ui.core.TextDisplay.get_textWidth","haxe/ui/core/TextDisplay.hx",145,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_166_get_textHeight,"haxe.ui.core.TextDisplay","get_textHeight",0x81e395f3,"haxe.ui.core.TextDisplay.get_textHeight","haxe/ui/core/TextDisplay.hx",166,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_188_get_multiline,"haxe.ui.core.TextDisplay","get_multiline",0x9e653a4e,"haxe.ui.core.TextDisplay.get_multiline","haxe/ui/core/TextDisplay.hx",188,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_190_set_multiline,"haxe.ui.core.TextDisplay","set_multiline",0xe36b1c5a,"haxe.ui.core.TextDisplay.set_multiline","haxe/ui/core/TextDisplay.hx",190,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_202_get_wordWrap,"haxe.ui.core.TextDisplay","get_wordWrap",0x00db7473,"haxe.ui.core.TextDisplay.get_wordWrap","haxe/ui/core/TextDisplay.hx",202,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_204_set_wordWrap,"haxe.ui.core.TextDisplay","set_wordWrap",0x15d497e7,"haxe.ui.core.TextDisplay.set_wordWrap","haxe/ui/core/TextDisplay.hx",204,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_214_isComponentInvalid,"haxe.ui.core.TextDisplay","isComponentInvalid",0xb95bd7fa,"haxe.ui.core.TextDisplay.isComponentInvalid","haxe/ui/core/TextDisplay.hx",214,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_231_invalidateComponent,"haxe.ui.core.TextDisplay","invalidateComponent",0x782b06cc,"haxe.ui.core.TextDisplay.invalidateComponent","haxe/ui/core/TextDisplay.hx",231,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_244_get_depth,"haxe.ui.core.TextDisplay","get_depth",0x1ebbd3e4,"haxe.ui.core.TextDisplay.get_depth","haxe/ui/core/TextDisplay.hx",244,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_246_set_depth,"haxe.ui.core.TextDisplay","set_depth",0x020cbff0,"haxe.ui.core.TextDisplay.set_depth","haxe/ui/core/TextDisplay.hx",246,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_256_updateComponentDisplay,"haxe.ui.core.TextDisplay","updateComponentDisplay",0x2a8d1264,"haxe.ui.core.TextDisplay.updateComponentDisplay","haxe/ui/core/TextDisplay.hx",256,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_259_validateComponent,"haxe.ui.core.TextDisplay","validateComponent",0xe3ec5dd1,"haxe.ui.core.TextDisplay.validateComponent","haxe/ui/core/TextDisplay.hx",259,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_274_validateComponentInternal,"haxe.ui.core.TextDisplay","validateComponentInternal",0x9c503a2e,"haxe.ui.core.TextDisplay.validateComponentInternal","haxe/ui/core/TextDisplay.hx",274,0xd6487467)
namespace haxe{
namespace ui{
namespace core{

void TextDisplay_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_aba319191a839d6a_19_new)
HXLINE( 240)		this->_depth = -1;
HXLINE(  23)		this->_isValidating = false;
HXLINE(  22)		this->_isAllInvalid = false;
HXLINE(  21)		this->_invalidationFlags =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  26)		super::__construct();
            	}

Dynamic TextDisplay_obj::__CreateEmpty() { return new TextDisplay_obj; }

void *TextDisplay_obj::_hx_vtable = 0;

Dynamic TextDisplay_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextDisplay_obj > _hx_result = new TextDisplay_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextDisplay_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c38975b) {
		if (inClassId<=(int)0x0b41c5d8) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0b41c5d8;
		} else {
			return inClassId==(int)0x0c38975b;
		}
	} else {
		return inClassId==(int)0x361ad3fc;
	}
}

static ::haxe::ui::validation::IValidating_obj _hx_haxe_ui_core_TextDisplay__hx_haxe_ui_validation_IValidating= {
	( int (::hx::Object::*)())&::haxe::ui::core::TextDisplay_obj::get_depth,
	( int (::hx::Object::*)(int))&::haxe::ui::core::TextDisplay_obj::set_depth,
	( void (::hx::Object::*)(::hx::Null< bool > ))&::haxe::ui::core::TextDisplay_obj::validateComponent,
	( void (::hx::Object::*)())&::haxe::ui::core::TextDisplay_obj::updateComponentDisplay,
};

void *TextDisplay_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x1e962029: return &_hx_haxe_ui_core_TextDisplay__hx_haxe_ui_validation_IValidating;
	}
	return super::_hx_getInterface(inHash);
}

 ::haxe::ui::styles::Style TextDisplay_obj::get_textStyle(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_34_get_textStyle)
HXDLIN(  34)		return this->_textStyle;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_textStyle,return )

 ::haxe::ui::styles::Style TextDisplay_obj::set_textStyle( ::haxe::ui::styles::Style value){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_37_set_textStyle)
HXDLIN(  37)		 ::haxe::ui::core::TextDisplay _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  38)		if (::hx::IsNull( value )) {
HXLINE(  39)			return value;
            		}
HXLINE(  42)		bool _hx_tmp;
HXDLIN(  42)		bool _hx_tmp1;
HXDLIN(  42)		if (::hx::IsNotNull( value->fontName )) {
HXLINE(  42)			_hx_tmp1 = ::hx::IsNull( this->_textStyle );
            		}
            		else {
HXLINE(  42)			_hx_tmp1 = false;
            		}
HXDLIN(  42)		if (!(_hx_tmp1)) {
HXLINE(  42)			if (::hx::IsNotNull( this->_textStyle )) {
HXLINE(  42)				_hx_tmp = (value->fontName != this->_textStyle->fontName);
            			}
            			else {
HXLINE(  42)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE(  42)			_hx_tmp = true;
            		}
HXDLIN(  42)		if (_hx_tmp) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::core::TextDisplay,_gthis) HXARGC(1)
            			void _hx_run( ::Dynamic fontInfo){
            				HX_STACKFRAME(&_hx_pos_aba319191a839d6a_43_set_textStyle)
HXLINE(  44)				_gthis->_fontInfo = fontInfo;
HXLINE(  45)				_gthis->invalidateComponent(HX_("style",31,a5,1d,84));
HXLINE(  46)				_gthis->parentComponent->invalidateComponent(HX_("style",31,a5,1d,84));
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  43)			::haxe::ui::ToolkitAssets_obj::get_instance()->getFont(value->fontName, ::Dynamic(new _hx_Closure_0(_gthis)),null());
            		}
            		else {
HXLINE(  49)			this->invalidateComponent(HX_("style",31,a5,1d,84));
            		}
HXLINE(  52)		this->_textStyle = value;
HXLINE(  53)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_textStyle,return )

::String TextDisplay_obj::get_text(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_58_get_text)
HXDLIN(  58)		return this->_text;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_text,return )

::String TextDisplay_obj::set_text(::String value){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_60_set_text)
HXLINE(  61)		if ((value == this->_text)) {
HXLINE(  62)			return value;
            		}
HXLINE(  65)		this->_text = value;
HXLINE(  66)		this->_htmlText = null();
HXLINE(  67)		this->invalidateComponent(HX_("data",2a,56,63,42));
HXLINE(  68)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_text,return )

::String TextDisplay_obj::get_htmlText(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_73_get_htmlText)
HXDLIN(  73)		return this->_htmlText;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_htmlText,return )

::String TextDisplay_obj::set_htmlText(::String value){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_75_set_htmlText)
HXLINE(  76)		if ((value == this->_htmlText)) {
HXLINE(  77)			return value;
            		}
HXLINE(  80)		this->_htmlText = value;
HXLINE(  81)		this->_text = null();
HXLINE(  82)		this->invalidateComponent(HX_("data",2a,56,63,42));
HXLINE(  83)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_htmlText,return )

Float TextDisplay_obj::get_left(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_88_get_left)
HXDLIN(  88)		return this->_left;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_left,return )

Float TextDisplay_obj::set_left(Float value){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_90_set_left)
HXLINE(  91)		if ((value == this->_left)) {
HXLINE(  92)			return value;
            		}
HXLINE(  95)		this->invalidateComponent(HX_("position",a9,a0,fa,ca));
HXLINE(  96)		this->_left = value;
HXLINE(  97)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_left,return )

Float TextDisplay_obj::get_top(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_102_get_top)
HXDLIN( 102)		return this->_top;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_top,return )

Float TextDisplay_obj::set_top(Float value){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_104_set_top)
HXLINE( 105)		if ((value == this->_top)) {
HXLINE( 106)			return value;
            		}
HXLINE( 109)		this->invalidateComponent(HX_("position",a9,a0,fa,ca));
HXLINE( 110)		this->_top = value;
HXLINE( 111)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_top,return )

Float TextDisplay_obj::set_width(Float value){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_115_set_width)
HXLINE( 116)		if ((this->_width == value)) {
HXLINE( 117)			return value;
            		}
HXLINE( 120)		this->invalidateComponent(HX_("display",42,2a,4a,bb));
HXLINE( 121)		this->_width = value;
HXLINE( 122)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_width,return )

Float TextDisplay_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_126_get_width)
HXDLIN( 126)		return this->_width;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_width,return )

Float TextDisplay_obj::set_height(Float value){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_130_set_height)
HXLINE( 131)		if ((this->_height == value)) {
HXLINE( 132)			return value;
            		}
HXLINE( 135)		this->invalidateComponent(HX_("display",42,2a,4a,bb));
HXLINE( 136)		this->_height = value;
HXLINE( 137)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_height,return )

Float TextDisplay_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_141_get_height)
HXDLIN( 141)		return this->_height;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_height,return )

Float TextDisplay_obj::get_textWidth(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_145_get_textWidth)
HXLINE( 146)		bool _hx_tmp;
HXDLIN( 146)		if (::hx::IsNull( this->_text )) {
HXLINE( 146)			_hx_tmp = ::hx::IsNull( this->_htmlText );
            		}
            		else {
HXLINE( 146)			_hx_tmp = false;
            		}
HXDLIN( 146)		if (_hx_tmp) {
HXLINE( 147)			return ( (Float)(0) );
            		}
HXLINE( 150)		bool _hx_tmp1;
HXDLIN( 150)		if (::hx::IsNotNull( this->_text )) {
HXLINE( 150)			_hx_tmp1 = (this->_text.length == 0);
            		}
            		else {
HXLINE( 150)			_hx_tmp1 = false;
            		}
HXDLIN( 150)		if (_hx_tmp1) {
HXLINE( 151)			return ( (Float)(0) );
            		}
HXLINE( 154)		bool _hx_tmp2;
HXDLIN( 154)		if (::hx::IsNotNull( this->_htmlText )) {
HXLINE( 154)			_hx_tmp2 = (this->_htmlText.length == 0);
            		}
            		else {
HXLINE( 154)			_hx_tmp2 = false;
            		}
HXDLIN( 154)		if (_hx_tmp2) {
HXLINE( 155)			return ( (Float)(0) );
            		}
HXLINE( 158)		if ((this->isComponentInvalid(null()) == true)) {
HXLINE( 159)			this->validateComponent(null());
            		}
HXLINE( 162)		return this->_textWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_textWidth,return )

Float TextDisplay_obj::get_textHeight(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_166_get_textHeight)
HXLINE( 167)		bool _hx_tmp;
HXDLIN( 167)		if (::hx::IsNull( this->_text )) {
HXLINE( 167)			_hx_tmp = ::hx::IsNull( this->_htmlText );
            		}
            		else {
HXLINE( 167)			_hx_tmp = false;
            		}
HXDLIN( 167)		if (_hx_tmp) {
HXLINE( 168)			return ( (Float)(0) );
            		}
HXLINE( 171)		bool _hx_tmp1;
HXDLIN( 171)		if (::hx::IsNotNull( this->_text )) {
HXLINE( 171)			_hx_tmp1 = (this->_text.length == 0);
            		}
            		else {
HXLINE( 171)			_hx_tmp1 = false;
            		}
HXDLIN( 171)		if (_hx_tmp1) {
HXLINE( 172)			return ( (Float)(0) );
            		}
HXLINE( 175)		bool _hx_tmp2;
HXDLIN( 175)		if (::hx::IsNotNull( this->_htmlText )) {
HXLINE( 175)			_hx_tmp2 = (this->_htmlText.length == 0);
            		}
            		else {
HXLINE( 175)			_hx_tmp2 = false;
            		}
HXDLIN( 175)		if (_hx_tmp2) {
HXLINE( 176)			return ( (Float)(0) );
            		}
HXLINE( 179)		if ((this->isComponentInvalid(null()) == true)) {
HXLINE( 180)			this->validateComponent(null());
            		}
HXLINE( 183)		return this->_textHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_textHeight,return )

bool TextDisplay_obj::get_multiline(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_188_get_multiline)
HXDLIN( 188)		return this->_displayData->multiline;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_multiline,return )

bool TextDisplay_obj::set_multiline(bool value){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_190_set_multiline)
HXLINE( 191)		if ((value == this->_displayData->multiline)) {
HXLINE( 192)			return value;
            		}
HXLINE( 195)		this->invalidateComponent(HX_("style",31,a5,1d,84));
HXLINE( 196)		this->_displayData->multiline = value;
HXLINE( 197)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_multiline,return )

bool TextDisplay_obj::get_wordWrap(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_202_get_wordWrap)
HXDLIN( 202)		return this->_displayData->wordWrap;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_wordWrap,return )

bool TextDisplay_obj::set_wordWrap(bool value){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_204_set_wordWrap)
HXLINE( 205)		if ((value == this->_displayData->wordWrap)) {
HXLINE( 206)			return value;
            		}
HXLINE( 209)		this->invalidateComponent(HX_("style",31,a5,1d,84));
HXLINE( 210)		this->_displayData->wordWrap = value;
HXLINE( 211)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_wordWrap,return )

bool TextDisplay_obj::isComponentInvalid(::String __o_flag){
            		::String flag = __o_flag;
            		if (::hx::IsNull(__o_flag)) flag = HX_("all",21,f9,49,00);
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_214_isComponentInvalid)
HXLINE( 215)		if ((this->_isAllInvalid == true)) {
HXLINE( 216)			return true;
            		}
HXLINE( 219)		if ((flag == HX_("all",21,f9,49,00))) {
HXLINE( 220)			{
HXLINE( 220)				 ::Dynamic value = this->_invalidationFlags->iterator();
HXDLIN( 220)				while(( (bool)(value->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 220)					bool value1 = ( (bool)(value->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 221)					return true;
            				}
            			}
HXLINE( 224)			return false;
            		}
HXLINE( 227)		return this->_invalidationFlags->exists(flag);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,isComponentInvalid,return )

void TextDisplay_obj::invalidateComponent(::String __o_flag){
            		::String flag = __o_flag;
            		if (::hx::IsNull(__o_flag)) flag = HX_("all",21,f9,49,00);
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_231_invalidateComponent)
HXDLIN( 231)		if ((flag == HX_("all",21,f9,49,00))) {
HXLINE( 232)			this->_isAllInvalid = true;
HXLINE( 233)			this->parentComponent->invalidateComponent(HX_("textDisplay",15,25,ca,96));
            		}
            		else {
HXLINE( 234)			if (!(this->_invalidationFlags->exists(flag))) {
HXLINE( 235)				this->_invalidationFlags->set(flag,true);
HXLINE( 236)				this->parentComponent->invalidateComponent(HX_("textDisplay",15,25,ca,96));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,invalidateComponent,(void))

int TextDisplay_obj::get_depth(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_244_get_depth)
HXDLIN( 244)		return this->_depth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_depth,return )

int TextDisplay_obj::set_depth(int value){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_246_set_depth)
HXLINE( 247)		if ((this->_depth == value)) {
HXLINE( 248)			return value;
            		}
HXLINE( 251)		this->_depth = value;
HXLINE( 253)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_depth,return )

void TextDisplay_obj::updateComponentDisplay(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_256_updateComponentDisplay)
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,updateComponentDisplay,(void))

void TextDisplay_obj::validateComponent(::hx::Null< bool >  __o_nextFrame){
            		bool nextFrame = __o_nextFrame.Default(true);
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_259_validateComponent)
HXLINE( 260)		bool _hx_tmp;
HXDLIN( 260)		if ((this->_isValidating != true)) {
HXLINE( 260)			_hx_tmp = (this->isComponentInvalid(null()) == false);
            		}
            		else {
HXLINE( 260)			_hx_tmp = true;
            		}
HXDLIN( 260)		if (_hx_tmp) {
HXLINE( 261)			return;
            		}
HXLINE( 264)		this->_isValidating = true;
HXLINE( 266)		this->validateComponentInternal();
HXLINE( 268)		this->_invalidationFlags->clear();
HXLINE( 270)		this->_isAllInvalid = false;
HXLINE( 271)		this->_isValidating = false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,validateComponent,(void))

void TextDisplay_obj::validateComponentInternal(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_274_validateComponentInternal)
HXLINE( 275)		bool dataInvalid = this->isComponentInvalid(HX_("data",2a,56,63,42));
HXLINE( 276)		bool styleInvalid = this->isComponentInvalid(HX_("style",31,a5,1d,84));
HXLINE( 277)		bool positionInvalid = this->isComponentInvalid(HX_("position",a9,a0,fa,ca));
HXLINE( 278)		bool displayInvalid = this->isComponentInvalid(HX_("display",42,2a,4a,bb));
HXLINE( 279)		bool measureInvalid = this->isComponentInvalid(HX_("measure",5e,fb,e9,3c));
HXLINE( 281)		if (dataInvalid) {
HXLINE( 282)			this->validateData();
            		}
HXLINE( 285)		if (styleInvalid) {
HXLINE( 286)			if (this->validateStyle()) {
HXLINE( 286)				measureInvalid = true;
            			}
            		}
HXLINE( 289)		bool _hx_tmp;
HXDLIN( 289)		if (!(positionInvalid)) {
HXLINE( 289)			_hx_tmp = styleInvalid;
            		}
            		else {
HXLINE( 289)			_hx_tmp = true;
            		}
HXDLIN( 289)		if (_hx_tmp) {
HXLINE( 290)			this->validatePosition();
            		}
HXLINE( 293)		if (displayInvalid) {
HXLINE( 294)			this->validateDisplay();
            		}
HXLINE( 297)		bool _hx_tmp1;
HXDLIN( 297)		bool _hx_tmp2;
HXDLIN( 297)		if (!(dataInvalid)) {
HXLINE( 297)			_hx_tmp2 = displayInvalid;
            		}
            		else {
HXLINE( 297)			_hx_tmp2 = true;
            		}
HXDLIN( 297)		if (!(_hx_tmp2)) {
HXLINE( 297)			_hx_tmp1 = measureInvalid;
            		}
            		else {
HXLINE( 297)			_hx_tmp1 = true;
            		}
HXDLIN( 297)		if (_hx_tmp1) {
HXLINE( 298)			Float oldTextWidth = this->get_textWidth();
HXLINE( 299)			Float oldTextHeight = this->get_textHeight();
HXLINE( 300)			this->measureText();
HXLINE( 302)			bool _hx_tmp;
HXDLIN( 302)			if ((this->get_textWidth() == oldTextWidth)) {
HXLINE( 302)				_hx_tmp = (this->get_textHeight() != oldTextHeight);
            			}
            			else {
HXLINE( 302)				_hx_tmp = true;
            			}
HXDLIN( 302)			if (_hx_tmp) {
HXLINE( 303)				this->parentComponent->invalidateComponent(HX_("layout",aa,ae,b8,58));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,validateComponentInternal,(void))


::hx::ObjectPtr< TextDisplay_obj > TextDisplay_obj::__new() {
	::hx::ObjectPtr< TextDisplay_obj > __this = new TextDisplay_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TextDisplay_obj > TextDisplay_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TextDisplay_obj *__this = (TextDisplay_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextDisplay_obj), true, "haxe.ui.core.TextDisplay"));
	*(void **)__this = TextDisplay_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TextDisplay_obj::TextDisplay_obj()
{
}

void TextDisplay_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextDisplay);
	HX_MARK_MEMBER_NAME(_invalidationFlags,"_invalidationFlags");
	HX_MARK_MEMBER_NAME(_isAllInvalid,"_isAllInvalid");
	HX_MARK_MEMBER_NAME(_isValidating,"_isValidating");
	HX_MARK_MEMBER_NAME(textWidth,"textWidth");
	HX_MARK_MEMBER_NAME(textHeight,"textHeight");
	HX_MARK_MEMBER_NAME(_depth,"_depth");
	 ::haxe::ui::backend::TextDisplayImpl_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextDisplay_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_invalidationFlags,"_invalidationFlags");
	HX_VISIT_MEMBER_NAME(_isAllInvalid,"_isAllInvalid");
	HX_VISIT_MEMBER_NAME(_isValidating,"_isValidating");
	HX_VISIT_MEMBER_NAME(textWidth,"textWidth");
	HX_VISIT_MEMBER_NAME(textHeight,"textHeight");
	HX_VISIT_MEMBER_NAME(_depth,"_depth");
	 ::haxe::ui::backend::TextDisplayImpl_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TextDisplay_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_top() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_text() ); }
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_left() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_width() ); }
		if (HX_FIELD_EQ(inName,"depth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_depth() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_height() ); }
		if (HX_FIELD_EQ(inName,"_depth") ) { return ::hx::Val( _depth ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_top") ) { return ::hx::Val( get_top_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_top") ) { return ::hx::Val( set_top_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_text") ) { return ::hx::Val( get_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return ::hx::Val( set_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"htmlText") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_htmlText() ); }
		if (HX_FIELD_EQ(inName,"get_left") ) { return ::hx::Val( get_left_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_left") ) { return ::hx::Val( set_left_dyn() ); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_wordWrap() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textStyle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_textStyle() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"textWidth") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_textWidth() : textWidth ); }
		if (HX_FIELD_EQ(inName,"multiline") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_multiline() ); }
		if (HX_FIELD_EQ(inName,"get_depth") ) { return ::hx::Val( get_depth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_depth") ) { return ::hx::Val( set_depth_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"textHeight") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_textHeight() : textHeight ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_htmlText") ) { return ::hx::Val( get_htmlText_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_htmlText") ) { return ::hx::Val( set_htmlText_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_wordWrap") ) { return ::hx::Val( get_wordWrap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_wordWrap") ) { return ::hx::Val( set_wordWrap_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_isAllInvalid") ) { return ::hx::Val( _isAllInvalid ); }
		if (HX_FIELD_EQ(inName,"_isValidating") ) { return ::hx::Val( _isValidating ); }
		if (HX_FIELD_EQ(inName,"get_textStyle") ) { return ::hx::Val( get_textStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_textStyle") ) { return ::hx::Val( set_textStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_textWidth") ) { return ::hx::Val( get_textWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_multiline") ) { return ::hx::Val( get_multiline_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_multiline") ) { return ::hx::Val( set_multiline_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_textHeight") ) { return ::hx::Val( get_textHeight_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"validateComponent") ) { return ::hx::Val( validateComponent_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_invalidationFlags") ) { return ::hx::Val( _invalidationFlags ); }
		if (HX_FIELD_EQ(inName,"isComponentInvalid") ) { return ::hx::Val( isComponentInvalid_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"invalidateComponent") ) { return ::hx::Val( invalidateComponent_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"updateComponentDisplay") ) { return ::hx::Val( updateComponentDisplay_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"validateComponentInternal") ) { return ::hx::Val( validateComponentInternal_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TextDisplay_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_top(inValue.Cast< Float >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_text(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_left(inValue.Cast< Float >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_width(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"depth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_depth(inValue.Cast< int >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_height(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"_depth") ) { _depth=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"htmlText") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_htmlText(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_wordWrap(inValue.Cast< bool >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textStyle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_textStyle(inValue.Cast<  ::haxe::ui::styles::Style >()) ); }
		if (HX_FIELD_EQ(inName,"textWidth") ) { textWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"multiline") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_multiline(inValue.Cast< bool >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textHeight") ) { textHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_isAllInvalid") ) { _isAllInvalid=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_isValidating") ) { _isValidating=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_invalidationFlags") ) { _invalidationFlags=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextDisplay_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_invalidationFlags",ca,12,21,cb));
	outFields->push(HX_("_isAllInvalid",3f,9b,7e,b8));
	outFields->push(HX_("_isValidating",bc,c6,7a,96));
	outFields->push(HX_("textStyle",44,35,0b,1d));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("htmlText",b8,1f,38,10));
	outFields->push(HX_("left",07,08,b0,47));
	outFields->push(HX_("top",95,66,58,00));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("textWidth",19,46,50,63));
	outFields->push(HX_("textHeight",74,88,3c,39));
	outFields->push(HX_("multiline",ed,d2,11,9e));
	outFields->push(HX_("wordWrap",b4,14,db,00));
	outFields->push(HX_("_depth",44,38,11,d3));
	outFields->push(HX_("depth",03,f1,29,d7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TextDisplay_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(TextDisplay_obj,_invalidationFlags),HX_("_invalidationFlags",ca,12,21,cb)},
	{::hx::fsBool,(int)offsetof(TextDisplay_obj,_isAllInvalid),HX_("_isAllInvalid",3f,9b,7e,b8)},
	{::hx::fsBool,(int)offsetof(TextDisplay_obj,_isValidating),HX_("_isValidating",bc,c6,7a,96)},
	{::hx::fsFloat,(int)offsetof(TextDisplay_obj,textWidth),HX_("textWidth",19,46,50,63)},
	{::hx::fsFloat,(int)offsetof(TextDisplay_obj,textHeight),HX_("textHeight",74,88,3c,39)},
	{::hx::fsInt,(int)offsetof(TextDisplay_obj,_depth),HX_("_depth",44,38,11,d3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TextDisplay_obj_sStaticStorageInfo = 0;
#endif

static ::String TextDisplay_obj_sMemberFields[] = {
	HX_("_invalidationFlags",ca,12,21,cb),
	HX_("_isAllInvalid",3f,9b,7e,b8),
	HX_("_isValidating",bc,c6,7a,96),
	HX_("get_textStyle",1b,09,6f,de),
	HX_("set_textStyle",27,eb,74,23),
	HX_("get_text",36,88,b4,cc),
	HX_("set_text",aa,e1,11,7b),
	HX_("get_htmlText",c1,d3,51,c5),
	HX_("set_htmlText",35,f7,4a,da),
	HX_("get_left",90,c3,6a,c7),
	HX_("set_left",04,1d,c8,75),
	HX_("get_top",2c,2f,cd,26),
	HX_("set_top",38,c0,ce,19),
	HX_("set_width",69,fe,5c,f1),
	HX_("get_width",5d,12,0c,0e),
	HX_("set_height",24,16,51,f6),
	HX_("get_height",b0,77,d3,f2),
	HX_("textWidth",19,46,50,63),
	HX_("get_textWidth",f0,19,b4,24),
	HX_("textHeight",74,88,3c,39),
	HX_("get_textHeight",bd,10,32,af),
	HX_("get_multiline",c4,a6,75,5f),
	HX_("set_multiline",d0,88,7b,a4),
	HX_("get_wordWrap",bd,c8,f4,b5),
	HX_("set_wordWrap",31,ec,ed,ca),
	HX_("isComponentInvalid",c4,7f,60,d7),
	HX_("invalidateComponent",c2,2f,39,9e),
	HX_("_depth",44,38,11,d3),
	HX_("get_depth",5a,4d,d3,1a),
	HX_("set_depth",66,39,24,fe),
	HX_("updateComponentDisplay",2e,67,62,d4),
	HX_("validateComponent",47,3d,eb,a4),
	HX_("validateComponentInternal",a4,7f,0c,11),
	::String(null()) };

::hx::Class TextDisplay_obj::__mClass;

void TextDisplay_obj::__register()
{
	TextDisplay_obj _hx_dummy;
	TextDisplay_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.core.TextDisplay",78,36,65,13);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextDisplay_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextDisplay_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextDisplay_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextDisplay_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
