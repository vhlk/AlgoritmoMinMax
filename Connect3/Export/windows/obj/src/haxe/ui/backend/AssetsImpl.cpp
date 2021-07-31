// Generated by Haxe 4.2.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AssetsBase
#include <haxe/ui/backend/AssetsBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AssetsImpl
#include <haxe/ui/backend/AssetsImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_util_ByteConverter
#include <haxe/ui/util/ByteConverter.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
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
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Loader
#include <openfl/display/Loader.h>
#endif
#ifndef INCLUDED_openfl_display_LoaderInfo
#include <openfl/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_system_LoaderContext
#include <openfl/system/LoaderContext.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_22d568b119f3373b_15_new,"haxe.ui.backend.AssetsImpl","new",0xd46da341,"haxe.ui.backend.AssetsImpl.new","haxe/ui/backend/AssetsImpl.hx",15,0x4811180e)
HX_LOCAL_STACK_FRAME(_hx_pos_22d568b119f3373b_16_getTextDelegate,"haxe.ui.backend.AssetsImpl","getTextDelegate",0xfc2feb29,"haxe.ui.backend.AssetsImpl.getTextDelegate","haxe/ui/backend/AssetsImpl.hx",16,0x4811180e)
HX_LOCAL_STACK_FRAME(_hx_pos_22d568b119f3373b_26_getImageInternal,"haxe.ui.backend.AssetsImpl","getImageInternal",0x8b3a73c1,"haxe.ui.backend.AssetsImpl.getImageInternal","haxe/ui/backend/AssetsImpl.hx",26,0x4811180e)
HX_LOCAL_STACK_FRAME(_hx_pos_22d568b119f3373b_41_getImageInternal,"haxe.ui.backend.AssetsImpl","getImageInternal",0x8b3a73c1,"haxe.ui.backend.AssetsImpl.getImageInternal","haxe/ui/backend/AssetsImpl.hx",41,0x4811180e)
HX_LOCAL_STACK_FRAME(_hx_pos_22d568b119f3373b_76_getImageFromHaxeResource,"haxe.ui.backend.AssetsImpl","getImageFromHaxeResource",0x481a7c22,"haxe.ui.backend.AssetsImpl.getImageFromHaxeResource","haxe/ui/backend/AssetsImpl.hx",76,0x4811180e)
HX_LOCAL_STACK_FRAME(_hx_pos_22d568b119f3373b_55_getImageFromHaxeResource,"haxe.ui.backend.AssetsImpl","getImageFromHaxeResource",0x481a7c22,"haxe.ui.backend.AssetsImpl.getImageFromHaxeResource","haxe/ui/backend/AssetsImpl.hx",55,0x4811180e)
HX_LOCAL_STACK_FRAME(_hx_pos_22d568b119f3373b_84_imageFromBytes,"haxe.ui.backend.AssetsImpl","imageFromBytes",0x721a3685,"haxe.ui.backend.AssetsImpl.imageFromBytes","haxe/ui/backend/AssetsImpl.hx",84,0x4811180e)
HX_LOCAL_STACK_FRAME(_hx_pos_22d568b119f3373b_80_imageFromBytes,"haxe.ui.backend.AssetsImpl","imageFromBytes",0x721a3685,"haxe.ui.backend.AssetsImpl.imageFromBytes","haxe/ui/backend/AssetsImpl.hx",80,0x4811180e)
HX_LOCAL_STACK_FRAME(_hx_pos_22d568b119f3373b_98_getFontInternal,"haxe.ui.backend.AssetsImpl","getFontInternal",0xb7e6de43,"haxe.ui.backend.AssetsImpl.getFontInternal","haxe/ui/backend/AssetsImpl.hx",98,0x4811180e)
HX_LOCAL_STACK_FRAME(_hx_pos_22d568b119f3373b_107_getFontInternal,"haxe.ui.backend.AssetsImpl","getFontInternal",0xb7e6de43,"haxe.ui.backend.AssetsImpl.getFontInternal","haxe/ui/backend/AssetsImpl.hx",107,0x4811180e)
HX_LOCAL_STACK_FRAME(_hx_pos_22d568b119f3373b_122_getFontFromHaxeResource,"haxe.ui.backend.AssetsImpl","getFontFromHaxeResource",0x14d838a4,"haxe.ui.backend.AssetsImpl.getFontFromHaxeResource","haxe/ui/backend/AssetsImpl.hx",122,0x4811180e)
HX_LOCAL_STACK_FRAME(_hx_pos_22d568b119f3373b_179_isEmbeddedFont,"haxe.ui.backend.AssetsImpl","isEmbeddedFont",0x881cd642,"haxe.ui.backend.AssetsImpl.isEmbeddedFont","haxe/ui/backend/AssetsImpl.hx",179,0x4811180e)
namespace haxe{
namespace ui{
namespace backend{

void AssetsImpl_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_22d568b119f3373b_15_new)
HXDLIN(  15)		super::__construct();
            	}

Dynamic AssetsImpl_obj::__CreateEmpty() { return new AssetsImpl_obj; }

void *AssetsImpl_obj::_hx_vtable = 0;

Dynamic AssetsImpl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AssetsImpl_obj > _hx_result = new AssetsImpl_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AssetsImpl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7f0c8145) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x7f0c8145;
	} else {
		return inClassId==(int)0x7ff6ca06;
	}
}

::String AssetsImpl_obj::getTextDelegate(::String resourceId){
            	HX_STACKFRAME(&_hx_pos_22d568b119f3373b_16_getTextDelegate)
HXLINE(  17)		if ((::openfl::utils::Assets_obj::exists(resourceId,null()) == true)) {
HXLINE(  18)			return ::openfl::utils::Assets_obj::getText(resourceId);
            		}
            		else {
HXLINE(  19)			if ((::haxe::Resource_obj::listNames()->indexOf(resourceId,null()) != -1)) {
HXLINE(  20)				return ::haxe::Resource_obj::getString(resourceId);
            			}
            		}
HXLINE(  22)		return null();
            	}


void AssetsImpl_obj::getImageInternal(::String resourceId, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_22d568b119f3373b_26_getImageInternal)
HXDLIN(  26)		if ((::openfl::utils::Assets_obj::exists(resourceId,null()) == true)) {
HXLINE(  27)			if ((::haxe::io::Path_obj::extension(resourceId).toLowerCase() == HX_("svg",64,aa,57,00))) {
HXLINE(  38)				::haxe::Log_obj::trace(HX_("WARNING: SVG not supported",e3,8b,36,33),::hx::SourceInfo(HX_("haxe/ui/backend/AssetsImpl.hx",0e,18,11,48),38,HX_("haxe.ui.backend.AssetsImpl",cf,ee,b0,8f),HX_("getImageInternal",42,3f,39,72)));
            			}
            			else {
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,callback) HXARGC(1)
            				void _hx_run( ::openfl::display::BitmapData bmpData){
            					HX_STACKFRAME(&_hx_pos_22d568b119f3373b_41_getImageInternal)
HXLINE(  42)					 ::Dynamic imageInfo =  ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("width",06,b6,62,ca),bmpData->width)
            						->setFixed(1,HX_("height",e7,07,4c,02),bmpData->height)
            						->setFixed(2,HX_("data",2a,56,63,42),bmpData));
HXLINE(  47)					callback(imageInfo);
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE(  41)				::openfl::utils::Assets_obj::loadBitmapData(resourceId,null())->onComplete( ::Dynamic(new _hx_Closure_0(callback)));
            			}
            		}
            		else {
HXLINE(  51)			callback(null());
            		}
            	}


void AssetsImpl_obj::getImageFromHaxeResource(::String resourceId, ::Dynamic callback){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::String,resourceId, ::Dynamic,callback) HXARGC(1)
            		void _hx_run( ::Dynamic imageInfo){
            			HX_STACKFRAME(&_hx_pos_22d568b119f3373b_76_getImageFromHaxeResource)
HXLINE(  76)			callback(resourceId,imageInfo);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_22d568b119f3373b_55_getImageFromHaxeResource)
HXLINE(  56)		 ::Dynamic imageInfo = null();
HXLINE(  57)		if ((::haxe::io::Path_obj::extension(resourceId).toLowerCase() == HX_("svg",64,aa,57,00))) {
HXLINE(  67)			::haxe::Log_obj::trace(HX_("WARNING: SVG not supported",e3,8b,36,33),::hx::SourceInfo(HX_("haxe/ui/backend/AssetsImpl.hx",0e,18,11,48),67,HX_("haxe.ui.backend.AssetsImpl",cf,ee,b0,8f),HX_("getImageFromHaxeResource",a3,30,02,17)));
HXLINE(  70)			callback(resourceId,imageInfo);
HXLINE(  71)			return;
            		}
HXLINE(  74)		 ::haxe::io::Bytes bytes = ::haxe::Resource_obj::getBytes(resourceId);
HXLINE(  75)		this->imageFromBytes(bytes, ::Dynamic(new _hx_Closure_0(resourceId,callback)));
            	}


void AssetsImpl_obj::imageFromBytes( ::haxe::io::Bytes bytes, ::Dynamic callback){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::openfl::display::Loader,loader, ::Dynamic,callback) HXARGC(1)
            		void _hx_run( ::openfl::events::Event e){
            			HX_GC_STACKFRAME(&_hx_pos_22d568b119f3373b_84_imageFromBytes)
HXLINE(  84)			if (::hx::IsNotNull( loader->content )) {
HXLINE(  85)				 ::openfl::display::BitmapData bmpData = ::hx::TCast<  ::openfl::display::Bitmap >::cast(loader->content)->get_bitmapData();
HXLINE(  86)				 ::Dynamic imageInfo =  ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("width",06,b6,62,ca),bmpData->width)
            					->setFixed(1,HX_("height",e7,07,4c,02),bmpData->height)
            					->setFixed(2,HX_("data",2a,56,63,42),bmpData));
HXLINE(  92)				callback(imageInfo);
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_22d568b119f3373b_80_imageFromBytes)
HXLINE(  81)		 ::openfl::utils::ByteArrayData ba = ::haxe::ui::util::ByteConverter_obj::fromHaxeBytes(bytes);
HXLINE(  82)		 ::openfl::display::Loader loader =  ::openfl::display::Loader_obj::__alloc( HX_CTX );
HXLINE(  83)		loader->contentLoaderInfo->addEventListener(HX_("complete",b9,00,c8,7f), ::Dynamic(new _hx_Closure_0(loader,callback)),null(),null(),null());
HXLINE(  95)		loader->loadBytes(ba,null());
            	}


void AssetsImpl_obj::getFontInternal(::String resourceId, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_22d568b119f3373b_98_getFontInternal)
HXLINE(  99)		 ::Dynamic fontInfo = null();
HXLINE( 100)		bool _hx_tmp;
HXDLIN( 100)		bool _hx_tmp1;
HXDLIN( 100)		if ((resourceId != HX_("_sans",32,a0,5e,ff))) {
HXLINE( 100)			_hx_tmp1 = (resourceId != HX_("_serif",be,66,15,76));
            		}
            		else {
HXLINE( 100)			_hx_tmp1 = false;
            		}
HXDLIN( 100)		if (_hx_tmp1) {
HXLINE( 100)			_hx_tmp = (resourceId != HX_("_typewriter",0c,5e,52,94));
            		}
            		else {
HXLINE( 100)			_hx_tmp = false;
            		}
HXDLIN( 100)		if ((_hx_tmp == true)) {
HXLINE( 101)			if (::openfl::utils::Assets_obj::exists(resourceId,null())) {
HXLINE( 102)				fontInfo =  ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("data",2a,56,63,42),::openfl::utils::Assets_obj::getFont(resourceId,null())->name));
            			}
            			else {
HXLINE( 105)				if ((::haxe::Resource_obj::listNames()->indexOf(resourceId,null()) != -1)) {
            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,callback) HXARGC(2)
            					void _hx_run(::String r, ::Dynamic info){
            						HX_STACKFRAME(&_hx_pos_22d568b119f3373b_107_getFontInternal)
HXLINE( 107)						callback(info);
            					}
            					HX_END_LOCAL_FUNC2((void))

HXLINE( 106)					this->getFontFromHaxeResource(resourceId, ::Dynamic(new _hx_Closure_0(callback)));
            				}
            				else {
HXLINE( 110)					fontInfo =  ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("data",2a,56,63,42),resourceId));
            				}
            			}
            		}
            		else {
HXLINE( 115)			fontInfo =  ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("data",2a,56,63,42),resourceId));
            		}
HXLINE( 119)		callback(fontInfo);
            	}


void AssetsImpl_obj::getFontFromHaxeResource(::String resourceId, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_22d568b119f3373b_122_getFontFromHaxeResource)
HXLINE( 123)		 ::haxe::io::Bytes bytes = ::haxe::Resource_obj::getBytes(resourceId);
HXLINE( 124)		if (::hx::IsNull( bytes )) {
HXLINE( 125)			callback(resourceId,null());
HXLINE( 126)			return;
            		}
HXLINE( 135)		 ::openfl::text::Font font = ::openfl::text::Font_obj::fromBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(bytes));
HXLINE( 136)		::openfl::text::Font_obj::registerFont(font);
HXLINE( 137)		 ::Dynamic fontInfo =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("data",2a,56,63,42),font->name));
HXLINE( 140)		callback(resourceId,fontInfo);
            	}


bool AssetsImpl_obj::isEmbeddedFont(::String name){
            	HX_STACKFRAME(&_hx_pos_22d568b119f3373b_179_isEmbeddedFont)
HXDLIN( 179)		bool _hx_tmp;
HXDLIN( 179)		if ((name != HX_("_sans",32,a0,5e,ff))) {
HXDLIN( 179)			_hx_tmp = (name != HX_("_serif",be,66,15,76));
            		}
            		else {
HXDLIN( 179)			_hx_tmp = false;
            		}
HXDLIN( 179)		if (_hx_tmp) {
HXDLIN( 179)			return (name != HX_("_typewriter",0c,5e,52,94));
            		}
            		else {
HXDLIN( 179)			return false;
            		}
HXDLIN( 179)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssetsImpl_obj,isEmbeddedFont,return )


::hx::ObjectPtr< AssetsImpl_obj > AssetsImpl_obj::__new() {
	::hx::ObjectPtr< AssetsImpl_obj > __this = new AssetsImpl_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< AssetsImpl_obj > AssetsImpl_obj::__alloc(::hx::Ctx *_hx_ctx) {
	AssetsImpl_obj *__this = (AssetsImpl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AssetsImpl_obj), false, "haxe.ui.backend.AssetsImpl"));
	*(void **)__this = AssetsImpl_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AssetsImpl_obj::AssetsImpl_obj()
{
}

::hx::Val AssetsImpl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"imageFromBytes") ) { return ::hx::Val( imageFromBytes_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getTextDelegate") ) { return ::hx::Val( getTextDelegate_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFontInternal") ) { return ::hx::Val( getFontInternal_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getImageInternal") ) { return ::hx::Val( getImageInternal_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getFontFromHaxeResource") ) { return ::hx::Val( getFontFromHaxeResource_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getImageFromHaxeResource") ) { return ::hx::Val( getImageFromHaxeResource_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool AssetsImpl_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"isEmbeddedFont") ) { outValue = isEmbeddedFont_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AssetsImpl_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *AssetsImpl_obj_sStaticStorageInfo = 0;
#endif

static ::String AssetsImpl_obj_sMemberFields[] = {
	HX_("getTextDelegate",c8,ca,74,b1),
	HX_("getImageInternal",42,3f,39,72),
	HX_("getImageFromHaxeResource",a3,30,02,17),
	HX_("imageFromBytes",c6,6f,67,40),
	HX_("getFontInternal",e2,bd,2b,6d),
	HX_("getFontFromHaxeResource",43,4f,84,fc),
	::String(null()) };

::hx::Class AssetsImpl_obj::__mClass;

static ::String AssetsImpl_obj_sStaticFields[] = {
	HX_("isEmbeddedFont",83,0f,6a,56),
	::String(null())
};

void AssetsImpl_obj::__register()
{
	AssetsImpl_obj _hx_dummy;
	AssetsImpl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.AssetsImpl",cf,ee,b0,8f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AssetsImpl_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AssetsImpl_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AssetsImpl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AssetsImpl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AssetsImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AssetsImpl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
