// Generated by Haxe 4.2.0
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ImageBase
#include <haxe/ui/backend/ImageBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ImageDisplayImpl
#include <haxe/ui/backend/ImageDisplayImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ImageSurface
#include <haxe/ui/backend/ImageSurface.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Rectangle
#include <haxe/ui/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8bb1718fb44eece3_13_new,"haxe.ui.backend.ImageDisplayImpl","new",0x737223e5,"haxe.ui.backend.ImageDisplayImpl.new","haxe/ui/backend/ImageDisplayImpl.hx",13,0xdab6112a)
HX_LOCAL_STACK_FRAME(_hx_pos_8bb1718fb44eece3_19_dispose,"haxe.ui.backend.ImageDisplayImpl","dispose",0xebdb7aa4,"haxe.ui.backend.ImageDisplayImpl.dispose","haxe/ui/backend/ImageDisplayImpl.hx",19,0xdab6112a)
HX_LOCAL_STACK_FRAME(_hx_pos_8bb1718fb44eece3_27_containsBitmapDataInfo,"haxe.ui.backend.ImageDisplayImpl","containsBitmapDataInfo",0xf472c4e1,"haxe.ui.backend.ImageDisplayImpl.containsBitmapDataInfo","haxe/ui/backend/ImageDisplayImpl.hx",27,0xdab6112a)
HX_LOCAL_STACK_FRAME(_hx_pos_8bb1718fb44eece3_51_validateData,"haxe.ui.backend.ImageDisplayImpl","validateData",0xdb12e9bb,"haxe.ui.backend.ImageDisplayImpl.validateData","haxe/ui/backend/ImageDisplayImpl.hx",51,0xdab6112a)
HX_LOCAL_STACK_FRAME(_hx_pos_8bb1718fb44eece3_85_validatePosition,"haxe.ui.backend.ImageDisplayImpl","validatePosition",0x4b89d0ba,"haxe.ui.backend.ImageDisplayImpl.validatePosition","haxe/ui/backend/ImageDisplayImpl.hx",85,0xdab6112a)
HX_LOCAL_STACK_FRAME(_hx_pos_8bb1718fb44eece3_95_validateDisplay,"haxe.ui.backend.ImageDisplayImpl","validateDisplay",0x04306751,"haxe.ui.backend.ImageDisplayImpl.validateDisplay","haxe/ui/backend/ImageDisplayImpl.hx",95,0xdab6112a)
namespace haxe{
namespace ui{
namespace backend{

void ImageDisplayImpl_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_8bb1718fb44eece3_13_new)
HXLINE(  14)		super::__construct();
HXLINE(  15)		this->sprite =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
            	}

Dynamic ImageDisplayImpl_obj::__CreateEmpty() { return new ImageDisplayImpl_obj; }

void *ImageDisplayImpl_obj::_hx_vtable = 0;

Dynamic ImageDisplayImpl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ImageDisplayImpl_obj > _hx_result = new ImageDisplayImpl_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ImageDisplayImpl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x20bbbdc4) {
		if (inClassId<=(int)0x1ffc6b7e) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1ffc6b7e;
		} else {
			return inClassId==(int)0x20bbbdc4;
		}
	} else {
		return inClassId==(int)0x26448321;
	}
}

void ImageDisplayImpl_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_8bb1718fb44eece3_19_dispose)
HXDLIN(  19)		if (::hx::IsNotNull( this->_bmp )) {
HXLINE(  21)			this->sprite->removeChild(this->_bmp);
HXLINE(  22)			this->_bmp = null();
            		}
            	}


bool ImageDisplayImpl_obj::containsBitmapDataInfo(){
            	HX_STACKFRAME(&_hx_pos_8bb1718fb44eece3_27_containsBitmapDataInfo)
HXDLIN(  27)		bool _hx_tmp;
HXDLIN(  27)		if (::hx::IsNotNull( this->_imageInfo )) {
HXDLIN(  27)			_hx_tmp = ::hx::IsNotNull( this->_imageInfo->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic) );
            		}
            		else {
HXDLIN(  27)			_hx_tmp = false;
            		}
HXDLIN(  27)		if (_hx_tmp) {
HXDLIN(  27)			return ::Std_obj::isOfType( ::Dynamic(this->_imageInfo->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic)),::hx::ClassOf< ::openfl::display::BitmapData >());
            		}
            		else {
HXDLIN(  27)			return false;
            		}
HXDLIN(  27)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageDisplayImpl_obj,containsBitmapDataInfo,return )

void ImageDisplayImpl_obj::validateData(){
            	HX_GC_STACKFRAME(&_hx_pos_8bb1718fb44eece3_51_validateData)
HXDLIN(  51)		if (::hx::IsNotNull( this->_imageInfo )) {
HXLINE(  52)			bool _hx_tmp;
HXDLIN(  52)			bool _hx_tmp1;
HXDLIN(  52)			if (::hx::IsNotNull( this->_imageInfo )) {
HXLINE(  52)				_hx_tmp1 = ::hx::IsNotNull( this->_imageInfo->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic) );
            			}
            			else {
HXLINE(  52)				_hx_tmp1 = false;
            			}
HXDLIN(  52)			if (_hx_tmp1) {
HXLINE(  52)				_hx_tmp = ::Std_obj::isOfType( ::Dynamic(this->_imageInfo->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic)),::hx::ClassOf< ::openfl::display::BitmapData >());
            			}
            			else {
HXLINE(  52)				_hx_tmp = false;
            			}
HXDLIN(  52)			if (_hx_tmp) {
HXLINE(  53)				if (::hx::IsNull( this->_bmp )) {
HXLINE(  54)					this->_bmp =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,( ( ::openfl::display::BitmapData)(this->_imageInfo->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic)) ),null(),null());
HXLINE(  55)					this->sprite->addChild(this->_bmp);
            				}
            				else {
HXLINE(  57)					this->_bmp->set_bitmapData(( ( ::openfl::display::BitmapData)(this->_imageInfo->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic)) ));
            				}
HXLINE(  59)				this->_imageWidth = this->_bmp->get_width();
HXLINE(  60)				this->_imageHeight = this->_bmp->get_height();
            			}
            		}
            		else {
HXLINE(  72)			bool _hx_tmp;
HXDLIN(  72)			if (::hx::IsNotNull( this->_bmp )) {
HXLINE(  72)				_hx_tmp = (this->sprite->contains(this->_bmp) == true);
            			}
            			else {
HXLINE(  72)				_hx_tmp = false;
            			}
HXDLIN(  72)			if (_hx_tmp) {
HXLINE(  73)				this->sprite->removeChild(this->_bmp);
HXLINE(  75)				this->_bmp = null();
            			}
            			else {
HXLINE(  77)				this->sprite->get_graphics()->clear();
            			}
HXLINE(  80)			this->_imageWidth = ( (Float)(0) );
HXLINE(  81)			this->_imageHeight = ( (Float)(0) );
            		}
            	}


void ImageDisplayImpl_obj::validatePosition(){
            	HX_STACKFRAME(&_hx_pos_8bb1718fb44eece3_85_validatePosition)
HXLINE(  86)		Float _hx_tmp = this->sprite->get_x();
HXDLIN(  86)		if ((_hx_tmp != this->_left)) {
HXLINE(  87)			this->sprite->set_x(this->_left);
            		}
HXLINE(  90)		Float _hx_tmp1 = this->sprite->get_y();
HXDLIN(  90)		if ((_hx_tmp1 != this->_top)) {
HXLINE(  91)			this->sprite->set_y(this->_top);
            		}
            	}


void ImageDisplayImpl_obj::validateDisplay(){
            	HX_GC_STACKFRAME(&_hx_pos_8bb1718fb44eece3_95_validateDisplay)
HXLINE(  96)		bool _hx_tmp;
HXDLIN(  96)		bool _hx_tmp1;
HXDLIN(  96)		if (::hx::IsNotNull( this->_imageInfo )) {
HXLINE(  96)			_hx_tmp1 = ::hx::IsNotNull( this->_imageInfo->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic) );
            		}
            		else {
HXLINE(  96)			_hx_tmp1 = false;
            		}
HXDLIN(  96)		if (_hx_tmp1) {
HXLINE(  96)			_hx_tmp = ::Std_obj::isOfType( ::Dynamic(this->_imageInfo->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic)),::hx::ClassOf< ::openfl::display::BitmapData >());
            		}
            		else {
HXLINE(  96)			_hx_tmp = false;
            		}
HXDLIN(  96)		if (_hx_tmp) {
HXLINE(  97)			Float scaleX = this->_imageWidth;
HXDLIN(  97)			Float scaleX1 = (scaleX / ( (Float)(this->_bmp->get_bitmapData()->width) ));
HXLINE(  98)			if ((this->_bmp->get_scaleX() != scaleX1)) {
HXLINE(  99)				this->_bmp->set_scaleX(scaleX1);
            			}
HXLINE( 102)			Float scaleY = this->_imageHeight;
HXDLIN( 102)			Float scaleY1 = (scaleY / ( (Float)(this->_bmp->get_bitmapData()->height) ));
HXLINE( 103)			if ((this->_bmp->get_scaleY() != scaleY1)) {
HXLINE( 104)				this->_bmp->set_scaleY(scaleY1);
            			}
            		}
HXLINE( 113)		if (::hx::IsNull( this->_imageClipRect )) {
HXLINE( 114)			this->sprite->set_scrollRect(null());
            		}
            		else {
HXLINE( 116)			 ::openfl::display::Sprite _hx_tmp = this->sprite;
HXDLIN( 116)			_hx_tmp->set_scrollRect( ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,-(this->_left),-(this->_top),::Math_obj::fround(this->_imageClipRect->width),::Math_obj::fround(this->_imageClipRect->height)));
HXLINE( 117)			this->sprite->set_x(this->_imageClipRect->left);
HXLINE( 118)			this->sprite->set_y(this->_imageClipRect->top);
            		}
            	}



::hx::ObjectPtr< ImageDisplayImpl_obj > ImageDisplayImpl_obj::__new() {
	::hx::ObjectPtr< ImageDisplayImpl_obj > __this = new ImageDisplayImpl_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ImageDisplayImpl_obj > ImageDisplayImpl_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ImageDisplayImpl_obj *__this = (ImageDisplayImpl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ImageDisplayImpl_obj), true, "haxe.ui.backend.ImageDisplayImpl"));
	*(void **)__this = ImageDisplayImpl_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ImageDisplayImpl_obj::ImageDisplayImpl_obj()
{
}

void ImageDisplayImpl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ImageDisplayImpl);
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	HX_MARK_MEMBER_NAME(_bmp,"_bmp");
	 ::haxe::ui::backend::ImageBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ImageDisplayImpl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	HX_VISIT_MEMBER_NAME(_bmp,"_bmp");
	 ::haxe::ui::backend::ImageBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ImageDisplayImpl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_bmp") ) { return ::hx::Val( _bmp ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { return ::hx::Val( sprite ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"validateDisplay") ) { return ::hx::Val( validateDisplay_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"validatePosition") ) { return ::hx::Val( validatePosition_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"containsBitmapDataInfo") ) { return ::hx::Val( containsBitmapDataInfo_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ImageDisplayImpl_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_bmp") ) { _bmp=inValue.Cast<  ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ImageDisplayImpl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sprite",05,dc,95,c3));
	outFields->push(HX_("_bmp",46,01,16,3f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ImageDisplayImpl_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::Sprite */ ,(int)offsetof(ImageDisplayImpl_obj,sprite),HX_("sprite",05,dc,95,c3)},
	{::hx::fsObject /*  ::openfl::display::Bitmap */ ,(int)offsetof(ImageDisplayImpl_obj,_bmp),HX_("_bmp",46,01,16,3f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ImageDisplayImpl_obj_sStaticStorageInfo = 0;
#endif

static ::String ImageDisplayImpl_obj_sMemberFields[] = {
	HX_("sprite",05,dc,95,c3),
	HX_("_bmp",46,01,16,3f),
	HX_("dispose",9f,80,4c,bb),
	HX_("containsBitmapDataInfo",46,b1,27,69),
	HX_("validateData",e0,55,63,96),
	HX_("validatePosition",5f,b3,53,83),
	HX_("validateDisplay",4c,60,60,b6),
	::String(null()) };

::hx::Class ImageDisplayImpl_obj::__mClass;

void ImageDisplayImpl_obj::__register()
{
	ImageDisplayImpl_obj _hx_dummy;
	ImageDisplayImpl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.ImageDisplayImpl",73,4d,77,bb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ImageDisplayImpl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ImageDisplayImpl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ImageDisplayImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ImageDisplayImpl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
