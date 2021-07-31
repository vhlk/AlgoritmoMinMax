// Generated by Haxe 4.2.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics__WebGL2RenderContext_WebGL2RenderContext_Impl_
#include <lime/graphics/_WebGL2RenderContext/WebGL2RenderContext_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_BytePointerData
#include <lime/utils/BytePointerData.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_lime_utils__BytePointer_BytePointer_Impl_
#include <lime/utils/_BytePointer/BytePointer_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display__internal_SamplerState
#include <openfl/display/_internal/SamplerState.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6659164148434b5e_61_new,"openfl.display3D.textures.TextureBase","new",0x670078a1,"openfl.display3D.textures.TextureBase.new","openfl/display3D/textures/TextureBase.hx",61,0x7b0f92ae)
HX_LOCAL_STACK_FRAME(_hx_pos_6659164148434b5e_150_dispose,"openfl.display3D.textures.TextureBase","dispose",0xa678dd60,"openfl.display3D.textures.TextureBase.dispose","openfl/display3D/textures/TextureBase.hx",150,0x7b0f92ae)
HX_LOCAL_STACK_FRAME(_hx_pos_6659164148434b5e_186___getGLFramebuffer,"openfl.display3D.textures.TextureBase","__getGLFramebuffer",0xf27dbc71,"openfl.display3D.textures.TextureBase.__getGLFramebuffer","openfl/display3D/textures/TextureBase.hx",186,0x7b0f92ae)
HX_LOCAL_STACK_FRAME(_hx_pos_6659164148434b5e_251___getImage,"openfl.display3D.textures.TextureBase","__getImage",0x67fff3e4,"openfl.display3D.textures.TextureBase.__getImage","openfl/display3D/textures/TextureBase.hx",251,0x7b0f92ae)
HX_LOCAL_STACK_FRAME(_hx_pos_6659164148434b5e_305___getTexture,"openfl.display3D.textures.TextureBase","__getTexture",0x3c3c91a4,"openfl.display3D.textures.TextureBase.__getTexture","openfl/display3D/textures/TextureBase.hx",305,0x7b0f92ae)
HX_LOCAL_STACK_FRAME(_hx_pos_6659164148434b5e_309___setSamplerState,"openfl.display3D.textures.TextureBase","__setSamplerState",0x8e361f8c,"openfl.display3D.textures.TextureBase.__setSamplerState","openfl/display3D/textures/TextureBase.hx",309,0x7b0f92ae)
HX_LOCAL_STACK_FRAME(_hx_pos_6659164148434b5e_382___uploadFromImage,"openfl.display3D.textures.TextureBase","__uploadFromImage",0xeaecc031,"openfl.display3D.textures.TextureBase.__uploadFromImage","openfl/display3D/textures/TextureBase.hx",382,0x7b0f92ae)
HX_LOCAL_STACK_FRAME(_hx_pos_6659164148434b5e_33_boot,"openfl.display3D.textures.TextureBase","boot",0xb18214d1,"openfl.display3D.textures.TextureBase.boot","openfl/display3D/textures/TextureBase.hx",33,0x7b0f92ae)
HX_LOCAL_STACK_FRAME(_hx_pos_6659164148434b5e_37_boot,"openfl.display3D.textures.TextureBase","boot",0xb18214d1,"openfl.display3D.textures.TextureBase.boot","openfl/display3D/textures/TextureBase.hx",37,0x7b0f92ae)
namespace openfl{
namespace display3D{
namespace textures{

void TextureBase_obj::__construct( ::openfl::display3D::Context3D context){
            	HX_GC_STACKFRAME(&_hx_pos_6659164148434b5e_61_new)
HXLINE(  62)		super::__construct(null());
HXLINE(  64)		this->_hx___context = context;
HXLINE(  65)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE(  68)		this->_hx___textureID = gl->createTexture();
HXLINE(  69)		this->_hx___textureContext = this->_hx___context->_hx___context;
HXLINE(  71)		if (::hx::IsNull( ::openfl::display3D::textures::TextureBase_obj::_hx___supportsBGRA )) {
HXLINE(  73)			::openfl::display3D::textures::TextureBase_obj::_hx___textureInternalFormat = gl->RGBA;
HXLINE(  75)			 ::Dynamic bgraExtension = null();
HXLINE(  77)			bgraExtension = gl->getExtension(HX_("EXT_bgra",72,74,1a,40));
HXLINE(  78)			if (::hx::IsNull( bgraExtension )) {
HXLINE(  78)				bgraExtension = gl->getExtension(HX_("EXT_texture_format_BGRA8888",5a,d2,bd,b2));
            			}
HXLINE(  79)			if (::hx::IsNull( bgraExtension )) {
HXLINE(  79)				bgraExtension = gl->getExtension(HX_("APPLE_texture_format_BGRA8888",13,8a,88,e2));
            			}
HXLINE(  82)			if (::hx::IsNotNull( bgraExtension )) {
HXLINE(  84)				::openfl::display3D::textures::TextureBase_obj::_hx___supportsBGRA = true;
HXLINE(  85)				::openfl::display3D::textures::TextureBase_obj::_hx___textureFormat = ( (int)(bgraExtension->__Field(HX_("BGRA_EXT",36,94,c4,bc),::hx::paccDynamic)) );
HXLINE(  88)				if ((context->_hx___context->type == HX_("opengles",9d,f6,c9,fa))) {
HXLINE(  90)					::openfl::display3D::textures::TextureBase_obj::_hx___textureInternalFormat = ( (int)(bgraExtension->__Field(HX_("BGRA_EXT",36,94,c4,bc),::hx::paccDynamic)) );
            				}
            			}
            			else {
HXLINE(  96)				::openfl::display3D::textures::TextureBase_obj::_hx___supportsBGRA = false;
HXLINE(  97)				::openfl::display3D::textures::TextureBase_obj::_hx___textureFormat = gl->RGBA;
            			}
HXLINE( 100)			::openfl::display3D::textures::TextureBase_obj::_hx___compressedFormats =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 101)			::openfl::display3D::textures::TextureBase_obj::_hx___compressedFormatsAlpha =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 109)			 ::Dynamic dxtExtension = gl->getExtension(HX_("EXT_texture_compression_s3tc",6a,86,aa,80));
HXLINE( 110)			 ::Dynamic etc1Extension = gl->getExtension(HX_("OES_compressed_ETC1_RGB8_texture",cd,f1,a0,b8));
HXLINE( 111)			 ::Dynamic pvrtcExtension = gl->getExtension(HX_("IMG_texture_compression_pvrtc",02,61,85,d1));
HXLINE( 114)			if (::hx::IsNotNull( dxtExtension )) {
HXLINE( 116)				{
HXLINE( 116)					int v = ( (int)(dxtExtension->__Field(HX_("COMPRESSED_RGBA_S3TC_DXT1_EXT",b6,6f,45,f9),::hx::paccDynamic)) );
HXDLIN( 116)					::openfl::display3D::textures::TextureBase_obj::_hx___compressedFormats->set(0,v);
            				}
HXLINE( 117)				{
HXLINE( 117)					int v1 = ( (int)(dxtExtension->__Field(HX_("COMPRESSED_RGBA_S3TC_DXT5_EXT",ba,c1,df,46),::hx::paccDynamic)) );
HXDLIN( 117)					::openfl::display3D::textures::TextureBase_obj::_hx___compressedFormatsAlpha->set(0,v1);
            				}
            			}
HXLINE( 120)			if (::hx::IsNotNull( etc1Extension )) {
HXLINE( 126)				{
HXLINE( 126)					int v = ( (int)(etc1Extension->__Field(HX_("ETC1_RGB8_OES",ab,04,61,eb),::hx::paccDynamic)) );
HXDLIN( 126)					::openfl::display3D::textures::TextureBase_obj::_hx___compressedFormats->set(2,v);
            				}
HXLINE( 127)				{
HXLINE( 127)					int v1 = ( (int)(etc1Extension->__Field(HX_("ETC1_RGB8_OES",ab,04,61,eb),::hx::paccDynamic)) );
HXDLIN( 127)					::openfl::display3D::textures::TextureBase_obj::_hx___compressedFormatsAlpha->set(2,v1);
            				}
            			}
HXLINE( 131)			if (::hx::IsNotNull( pvrtcExtension )) {
HXLINE( 133)				{
HXLINE( 133)					int v = ( (int)(pvrtcExtension->__Field(HX_("COMPRESSED_RGB_PVRTC_4BPPV1_IMG",a1,18,41,ce),::hx::paccDynamic)) );
HXDLIN( 133)					::openfl::display3D::textures::TextureBase_obj::_hx___compressedFormats->set(1,v);
            				}
HXLINE( 134)				{
HXLINE( 134)					int v1 = ( (int)(pvrtcExtension->__Field(HX_("COMPRESSED_RGBA_PVRTC_4BPPV1_IMG",be,45,75,bf),::hx::paccDynamic)) );
HXDLIN( 134)					::openfl::display3D::textures::TextureBase_obj::_hx___compressedFormatsAlpha->set(1,v1);
            				}
            			}
            		}
HXLINE( 138)		this->_hx___internalFormat = ::openfl::display3D::textures::TextureBase_obj::_hx___textureInternalFormat;
HXLINE( 139)		this->_hx___format = ::openfl::display3D::textures::TextureBase_obj::_hx___textureFormat;
            	}

Dynamic TextureBase_obj::__CreateEmpty() { return new TextureBase_obj; }

void *TextureBase_obj::_hx_vtable = 0;

Dynamic TextureBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextureBase_obj > _hx_result = new TextureBase_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TextureBase_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x3247d979;
	}
}

void TextureBase_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_6659164148434b5e_150_dispose)
HXLINE( 151)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 153)		if (::hx::IsNotNull( this->_hx___alphaTexture )) {
HXLINE( 155)			this->_hx___alphaTexture->dispose();
HXLINE( 156)			this->_hx___alphaTexture = null();
            		}
HXLINE( 159)		if (::hx::IsNotNull( this->_hx___textureID )) {
HXLINE( 161)			gl->deleteTexture(this->_hx___textureID);
HXLINE( 162)			this->_hx___textureID = null();
            		}
HXLINE( 165)		if (::hx::IsNotNull( this->_hx___glFramebuffer )) {
HXLINE( 167)			gl->deleteFramebuffer(this->_hx___glFramebuffer);
HXLINE( 168)			this->_hx___glFramebuffer = null();
            		}
HXLINE( 171)		if (::hx::IsNotNull( this->_hx___glDepthRenderbuffer )) {
HXLINE( 173)			gl->deleteRenderbuffer(this->_hx___glDepthRenderbuffer);
HXLINE( 174)			this->_hx___glDepthRenderbuffer = null();
            		}
HXLINE( 177)		if (::hx::IsNotNull( this->_hx___glStencilRenderbuffer )) {
HXLINE( 179)			gl->deleteRenderbuffer(this->_hx___glStencilRenderbuffer);
HXLINE( 180)			this->_hx___glStencilRenderbuffer = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextureBase_obj,dispose,(void))

 ::lime::graphics::opengl::GLObject TextureBase_obj::_hx___getGLFramebuffer(bool enableDepthAndStencil,int antiAlias,int surfaceSelector){
            	HX_STACKFRAME(&_hx_pos_6659164148434b5e_186___getGLFramebuffer)
HXLINE( 187)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 189)		if (::hx::IsNull( this->_hx___glFramebuffer )) {
HXLINE( 191)			this->_hx___glFramebuffer = gl->createFramebuffer();
HXLINE( 192)			this->_hx___context->_hx___bindGLFramebuffer(this->_hx___glFramebuffer);
HXLINE( 193)			gl->framebufferTexture2D(gl->FRAMEBUFFER,gl->COLOR_ATTACHMENT0,gl->TEXTURE_2D,this->_hx___textureID,0);
HXLINE( 195)			if (this->_hx___context->_hx___enableErrorChecking) {
HXLINE( 197)				int code = gl->checkFramebufferStatus(gl->FRAMEBUFFER);
HXLINE( 199)				if ((code != gl->FRAMEBUFFER_COMPLETE)) {
HXLINE( 201)					::lime::utils::Log_obj::warn((((((HX_("Error: Context3D.setRenderToTexture status:",4c,0a,86,52) + code) + HX_(" width:",94,67,ab,7e)) + this->_hx___width) + HX_(" height:",53,26,89,26)) + this->_hx___height),::hx::SourceInfo(HX_("openfl/display3D/textures/TextureBase.hx",ae,92,0f,7b),201,HX_("openfl.display3D.textures.TextureBase",2f,94,15,bc),HX_("__getGLFramebuffer",92,f3,72,c9)));
            				}
            			}
            		}
HXLINE( 206)		bool _hx_tmp;
HXDLIN( 206)		if (enableDepthAndStencil) {
HXLINE( 206)			_hx_tmp = ::hx::IsNull( this->_hx___glDepthRenderbuffer );
            		}
            		else {
HXLINE( 206)			_hx_tmp = false;
            		}
HXDLIN( 206)		if (_hx_tmp) {
HXLINE( 208)			this->_hx___context->_hx___bindGLFramebuffer(this->_hx___glFramebuffer);
HXLINE( 210)			if ((::openfl::display3D::Context3D_obj::_hx___glDepthStencil != 0)) {
HXLINE( 212)				this->_hx___glDepthRenderbuffer = gl->createRenderbuffer();
HXLINE( 213)				this->_hx___glStencilRenderbuffer = this->_hx___glDepthRenderbuffer;
HXLINE( 215)				gl->bindRenderbuffer(gl->RENDERBUFFER,this->_hx___glDepthRenderbuffer);
HXLINE( 216)				gl->renderbufferStorage(gl->RENDERBUFFER,::openfl::display3D::Context3D_obj::_hx___glDepthStencil,this->_hx___width,this->_hx___height);
HXLINE( 217)				gl->framebufferRenderbuffer(gl->FRAMEBUFFER,gl->DEPTH_STENCIL_ATTACHMENT,gl->RENDERBUFFER,this->_hx___glDepthRenderbuffer);
            			}
            			else {
HXLINE( 221)				this->_hx___glDepthRenderbuffer = gl->createRenderbuffer();
HXLINE( 222)				this->_hx___glStencilRenderbuffer = gl->createRenderbuffer();
HXLINE( 224)				gl->bindRenderbuffer(gl->RENDERBUFFER,this->_hx___glDepthRenderbuffer);
HXLINE( 225)				gl->renderbufferStorage(gl->RENDERBUFFER,gl->DEPTH_COMPONENT16,this->_hx___width,this->_hx___height);
HXLINE( 226)				gl->bindRenderbuffer(gl->RENDERBUFFER,this->_hx___glStencilRenderbuffer);
HXLINE( 227)				gl->renderbufferStorage(gl->RENDERBUFFER,gl->STENCIL_INDEX8,this->_hx___width,this->_hx___height);
HXLINE( 229)				gl->framebufferRenderbuffer(gl->FRAMEBUFFER,gl->DEPTH_ATTACHMENT,gl->RENDERBUFFER,this->_hx___glDepthRenderbuffer);
HXLINE( 230)				gl->framebufferRenderbuffer(gl->FRAMEBUFFER,gl->STENCIL_ATTACHMENT,gl->RENDERBUFFER,this->_hx___glStencilRenderbuffer);
            			}
HXLINE( 233)			if (this->_hx___context->_hx___enableErrorChecking) {
HXLINE( 235)				int code = gl->checkFramebufferStatus(gl->FRAMEBUFFER);
HXLINE( 237)				if ((code != gl->FRAMEBUFFER_COMPLETE)) {
HXLINE( 239)					::lime::utils::Log_obj::warn((((((HX_("Error: Context3D.setRenderToTexture status:",4c,0a,86,52) + code) + HX_(" width:",94,67,ab,7e)) + this->_hx___width) + HX_(" height:",53,26,89,26)) + this->_hx___height),::hx::SourceInfo(HX_("openfl/display3D/textures/TextureBase.hx",ae,92,0f,7b),239,HX_("openfl.display3D.textures.TextureBase",2f,94,15,bc),HX_("__getGLFramebuffer",92,f3,72,c9)));
            				}
            			}
HXLINE( 243)			{
HXLINE( 243)				 ::lime::graphics::opengl::GLObject renderbuffer = null();
HXDLIN( 243)				gl->bindRenderbuffer(gl->RENDERBUFFER,renderbuffer);
            			}
            		}
HXLINE( 246)		return this->_hx___glFramebuffer;
            	}


HX_DEFINE_DYNAMIC_FUNC3(TextureBase_obj,_hx___getGLFramebuffer,return )

 ::lime::graphics::Image TextureBase_obj::_hx___getImage( ::openfl::display::BitmapData bitmapData){
            	HX_STACKFRAME(&_hx_pos_6659164148434b5e_251___getImage)
HXLINE( 252)		 ::lime::graphics::Image image = bitmapData->image;
HXLINE( 254)		bool _hx_tmp;
HXDLIN( 254)		if (bitmapData->_hx___isValid) {
HXLINE( 254)			_hx_tmp = ::hx::IsNull( image );
            		}
            		else {
HXLINE( 254)			_hx_tmp = true;
            		}
HXDLIN( 254)		if (_hx_tmp) {
HXLINE( 256)			return null();
            		}
HXLINE( 289)		bool _hx_tmp1;
HXDLIN( 289)		if (!(image->get_premultiplied())) {
HXLINE( 289)			_hx_tmp1 = image->get_transparent();
            		}
            		else {
HXLINE( 289)			_hx_tmp1 = false;
            		}
HXDLIN( 289)		if (_hx_tmp1) {
HXLINE( 291)			image = image->clone();
HXLINE( 292)			image->set_premultiplied(true);
            		}
HXLINE( 299)		return image;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextureBase_obj,_hx___getImage,return )

 ::lime::graphics::opengl::GLObject TextureBase_obj::_hx___getTexture(){
            	HX_STACKFRAME(&_hx_pos_6659164148434b5e_305___getTexture)
HXDLIN( 305)		return this->_hx___textureID;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextureBase_obj,_hx___getTexture,return )

bool TextureBase_obj::_hx___setSamplerState( ::openfl::display::_internal::SamplerState state){
            	HX_GC_STACKFRAME(&_hx_pos_6659164148434b5e_309___setSamplerState)
HXLINE( 310)		if (!(state->equals(this->_hx___samplerState))) {
HXLINE( 312)			 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 314)			if ((this->_hx___textureTarget == this->_hx___context->gl->TEXTURE_CUBE_MAP)) {
HXLINE( 314)				this->_hx___context->_hx___bindGLTextureCubeMap(this->_hx___textureID);
            			}
            			else {
HXLINE( 316)				this->_hx___context->_hx___bindGLTexture2D(this->_hx___textureID);
            			}
HXLINE( 318)			int wrapModeS = 0;
HXDLIN( 318)			int wrapModeT = 0;
HXLINE( 320)			 ::Dynamic _hx_switch_0 = state->wrap;
            			if (  (_hx_switch_0==0) ){
HXLINE( 323)				wrapModeS = gl->CLAMP_TO_EDGE;
HXLINE( 324)				wrapModeT = gl->CLAMP_TO_EDGE;
HXLINE( 322)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==1) ){
HXLINE( 326)				wrapModeS = gl->CLAMP_TO_EDGE;
HXLINE( 327)				wrapModeT = gl->REPEAT;
HXLINE( 325)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==2) ){
HXLINE( 329)				wrapModeS = gl->REPEAT;
HXLINE( 330)				wrapModeT = gl->REPEAT;
HXLINE( 328)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==3) ){
HXLINE( 332)				wrapModeS = gl->REPEAT;
HXLINE( 333)				wrapModeT = gl->CLAMP_TO_EDGE;
HXLINE( 331)				goto _hx_goto_5;
            			}
            			/* default */{
HXLINE( 335)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("wrap bad enum",52,1c,4c,59),null())));
            			}
            			_hx_goto_5:;
HXLINE( 338)			int magFilter = 0;
HXDLIN( 338)			int minFilter = 0;
HXLINE( 340)			if (::hx::IsEq( state->filter,5 )) {
HXLINE( 343)				magFilter = gl->NEAREST;
            			}
            			else {
HXLINE( 345)				magFilter = gl->LINEAR;
            			}
HXLINE( 348)			 ::Dynamic _hx_switch_1 = state->mipfilter;
            			if (  (_hx_switch_1==0) ){
HXLINE( 351)				if (::hx::IsEq( state->filter,5 )) {
HXLINE( 351)					minFilter = gl->NEAREST_MIPMAP_LINEAR;
            				}
            				else {
HXLINE( 351)					minFilter = gl->LINEAR_MIPMAP_LINEAR;
            				}
HXDLIN( 351)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_1==1) ){
HXLINE( 353)				if (::hx::IsEq( state->filter,5 )) {
HXLINE( 353)					minFilter = gl->NEAREST_MIPMAP_NEAREST;
            				}
            				else {
HXLINE( 353)					minFilter = gl->LINEAR_MIPMAP_NEAREST;
            				}
HXDLIN( 353)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_1==2) ){
HXLINE( 355)				if (::hx::IsEq( state->filter,5 )) {
HXLINE( 355)					minFilter = gl->NEAREST;
            				}
            				else {
HXLINE( 355)					minFilter = gl->LINEAR;
            				}
HXDLIN( 355)				goto _hx_goto_6;
            			}
            			/* default */{
HXLINE( 357)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("mipfiter bad enum",b2,1b,09,c4),null())));
            			}
            			_hx_goto_6:;
HXLINE( 360)			gl->texParameteri(this->_hx___textureTarget,gl->TEXTURE_MIN_FILTER,minFilter);
HXLINE( 361)			gl->texParameteri(this->_hx___textureTarget,gl->TEXTURE_MAG_FILTER,magFilter);
HXLINE( 362)			gl->texParameteri(this->_hx___textureTarget,gl->TEXTURE_WRAP_S,wrapModeS);
HXLINE( 363)			gl->texParameteri(this->_hx___textureTarget,gl->TEXTURE_WRAP_T,wrapModeT);
HXLINE( 365)			bool _hx_tmp = (state->lodBias != ((Float)0.0));
HXLINE( 371)			if (::hx::IsNull( this->_hx___samplerState )) {
HXLINE( 371)				this->_hx___samplerState = state->clone();
            			}
HXLINE( 372)			this->_hx___samplerState->copyFrom(state);
HXLINE( 374)			return true;
            		}
HXLINE( 377)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextureBase_obj,_hx___setSamplerState,return )

void TextureBase_obj::_hx___uploadFromImage( ::lime::graphics::Image image){
            	HX_STACKFRAME(&_hx_pos_6659164148434b5e_382___uploadFromImage)
HXLINE( 383)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 384)		int internalFormat;
HXDLIN( 384)		int format;
HXLINE( 386)		if ((this->_hx___textureTarget != gl->TEXTURE_2D)) {
HXLINE( 386)			return;
            		}
HXLINE( 388)		if ((image->buffer->bitsPerPixel == 1)) {
HXLINE( 390)			internalFormat = gl->ALPHA;
HXLINE( 391)			format = gl->ALPHA;
            		}
            		else {
HXLINE( 395)			internalFormat = ::openfl::display3D::textures::TextureBase_obj::_hx___textureInternalFormat;
HXLINE( 396)			format = ::openfl::display3D::textures::TextureBase_obj::_hx___textureFormat;
            		}
HXLINE( 399)		this->_hx___context->_hx___bindGLTexture2D(this->_hx___textureID);
HXLINE( 423)		{
HXLINE( 423)			int target = gl->TEXTURE_2D;
HXDLIN( 423)			int width = image->buffer->width;
HXDLIN( 423)			int height = image->buffer->height;
HXDLIN( 423)			int type = gl->UNSIGNED_BYTE;
HXDLIN( 423)			 ::lime::utils::ArrayBufferView srcData = image->get_data();
HXDLIN( 423)			{
HXLINE( 423)				::lime::utils::_BytePointer::BytePointer_Impl__obj::set(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer,null(),srcData,null(),0);
HXDLIN( 423)				gl->texImage2D(target,0,internalFormat,width,height,0,format,type,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer));
            			}
            		}
HXLINE( 426)		this->_hx___context->_hx___bindGLTexture2D(null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextureBase_obj,_hx___uploadFromImage,(void))

 ::haxe::ds::IntMap TextureBase_obj::_hx___compressedFormats;

 ::haxe::ds::IntMap TextureBase_obj::_hx___compressedFormatsAlpha;

 ::Dynamic TextureBase_obj::_hx___supportsBGRA;

int TextureBase_obj::_hx___textureFormat;

int TextureBase_obj::_hx___textureInternalFormat;


::hx::ObjectPtr< TextureBase_obj > TextureBase_obj::__new( ::openfl::display3D::Context3D context) {
	::hx::ObjectPtr< TextureBase_obj > __this = new TextureBase_obj();
	__this->__construct(context);
	return __this;
}

::hx::ObjectPtr< TextureBase_obj > TextureBase_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context) {
	TextureBase_obj *__this = (TextureBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextureBase_obj), true, "openfl.display3D.textures.TextureBase"));
	*(void **)__this = TextureBase_obj::_hx_vtable;
	__this->__construct(context);
	return __this;
}

TextureBase_obj::TextureBase_obj()
{
}

void TextureBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextureBase);
	HX_MARK_MEMBER_NAME(_hx___alphaTexture,"__alphaTexture");
	HX_MARK_MEMBER_NAME(_hx___context,"__context");
	HX_MARK_MEMBER_NAME(_hx___format,"__format");
	HX_MARK_MEMBER_NAME(_hx___glDepthRenderbuffer,"__glDepthRenderbuffer");
	HX_MARK_MEMBER_NAME(_hx___glFramebuffer,"__glFramebuffer");
	HX_MARK_MEMBER_NAME(_hx___glStencilRenderbuffer,"__glStencilRenderbuffer");
	HX_MARK_MEMBER_NAME(_hx___height,"__height");
	HX_MARK_MEMBER_NAME(_hx___internalFormat,"__internalFormat");
	HX_MARK_MEMBER_NAME(_hx___optimizeForRenderToTexture,"__optimizeForRenderToTexture");
	HX_MARK_MEMBER_NAME(_hx___samplerState,"__samplerState");
	HX_MARK_MEMBER_NAME(_hx___streamingLevels,"__streamingLevels");
	HX_MARK_MEMBER_NAME(_hx___textureContext,"__textureContext");
	HX_MARK_MEMBER_NAME(_hx___textureID,"__textureID");
	HX_MARK_MEMBER_NAME(_hx___textureTarget,"__textureTarget");
	HX_MARK_MEMBER_NAME(_hx___width,"__width");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextureBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___alphaTexture,"__alphaTexture");
	HX_VISIT_MEMBER_NAME(_hx___context,"__context");
	HX_VISIT_MEMBER_NAME(_hx___format,"__format");
	HX_VISIT_MEMBER_NAME(_hx___glDepthRenderbuffer,"__glDepthRenderbuffer");
	HX_VISIT_MEMBER_NAME(_hx___glFramebuffer,"__glFramebuffer");
	HX_VISIT_MEMBER_NAME(_hx___glStencilRenderbuffer,"__glStencilRenderbuffer");
	HX_VISIT_MEMBER_NAME(_hx___height,"__height");
	HX_VISIT_MEMBER_NAME(_hx___internalFormat,"__internalFormat");
	HX_VISIT_MEMBER_NAME(_hx___optimizeForRenderToTexture,"__optimizeForRenderToTexture");
	HX_VISIT_MEMBER_NAME(_hx___samplerState,"__samplerState");
	HX_VISIT_MEMBER_NAME(_hx___streamingLevels,"__streamingLevels");
	HX_VISIT_MEMBER_NAME(_hx___textureContext,"__textureContext");
	HX_VISIT_MEMBER_NAME(_hx___textureID,"__textureID");
	HX_VISIT_MEMBER_NAME(_hx___textureTarget,"__textureTarget");
	HX_VISIT_MEMBER_NAME(_hx___width,"__width");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TextureBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__width") ) { return ::hx::Val( _hx___width ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__format") ) { return ::hx::Val( _hx___format ); }
		if (HX_FIELD_EQ(inName,"__height") ) { return ::hx::Val( _hx___height ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__context") ) { return ::hx::Val( _hx___context ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__getImage") ) { return ::hx::Val( _hx___getImage_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__textureID") ) { return ::hx::Val( _hx___textureID ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__getTexture") ) { return ::hx::Val( _hx___getTexture_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__alphaTexture") ) { return ::hx::Val( _hx___alphaTexture ); }
		if (HX_FIELD_EQ(inName,"__samplerState") ) { return ::hx::Val( _hx___samplerState ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__glFramebuffer") ) { return ::hx::Val( _hx___glFramebuffer ); }
		if (HX_FIELD_EQ(inName,"__textureTarget") ) { return ::hx::Val( _hx___textureTarget ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__internalFormat") ) { return ::hx::Val( _hx___internalFormat ); }
		if (HX_FIELD_EQ(inName,"__textureContext") ) { return ::hx::Val( _hx___textureContext ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__streamingLevels") ) { return ::hx::Val( _hx___streamingLevels ); }
		if (HX_FIELD_EQ(inName,"__setSamplerState") ) { return ::hx::Val( _hx___setSamplerState_dyn() ); }
		if (HX_FIELD_EQ(inName,"__uploadFromImage") ) { return ::hx::Val( _hx___uploadFromImage_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__getGLFramebuffer") ) { return ::hx::Val( _hx___getGLFramebuffer_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__glDepthRenderbuffer") ) { return ::hx::Val( _hx___glDepthRenderbuffer ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__glStencilRenderbuffer") ) { return ::hx::Val( _hx___glStencilRenderbuffer ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"__optimizeForRenderToTexture") ) { return ::hx::Val( _hx___optimizeForRenderToTexture ); }
	}
	return super::__Field(inName,inCallProp);
}

bool TextureBase_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"__supportsBGRA") ) { outValue = ( _hx___supportsBGRA ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__textureFormat") ) { outValue = ( _hx___textureFormat ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__compressedFormats") ) { outValue = ( _hx___compressedFormats ); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__textureInternalFormat") ) { outValue = ( _hx___textureInternalFormat ); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"__compressedFormatsAlpha") ) { outValue = ( _hx___compressedFormatsAlpha ); return true; }
	}
	return false;
}

::hx::Val TextureBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__width") ) { _hx___width=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__format") ) { _hx___format=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__height") ) { _hx___height=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__context") ) { _hx___context=inValue.Cast<  ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__textureID") ) { _hx___textureID=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__alphaTexture") ) { _hx___alphaTexture=inValue.Cast<  ::openfl::display3D::textures::TextureBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__samplerState") ) { _hx___samplerState=inValue.Cast<  ::openfl::display::_internal::SamplerState >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__glFramebuffer") ) { _hx___glFramebuffer=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textureTarget") ) { _hx___textureTarget=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__internalFormat") ) { _hx___internalFormat=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textureContext") ) { _hx___textureContext=inValue.Cast<  ::lime::graphics::RenderContext >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__streamingLevels") ) { _hx___streamingLevels=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__glDepthRenderbuffer") ) { _hx___glDepthRenderbuffer=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__glStencilRenderbuffer") ) { _hx___glStencilRenderbuffer=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"__optimizeForRenderToTexture") ) { _hx___optimizeForRenderToTexture=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextureBase_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"__supportsBGRA") ) { _hx___supportsBGRA=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__textureFormat") ) { _hx___textureFormat=ioValue.Cast< int >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__compressedFormats") ) { _hx___compressedFormats=ioValue.Cast<  ::haxe::ds::IntMap >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__textureInternalFormat") ) { _hx___textureInternalFormat=ioValue.Cast< int >(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"__compressedFormatsAlpha") ) { _hx___compressedFormatsAlpha=ioValue.Cast<  ::haxe::ds::IntMap >(); return true; }
	}
	return false;
}

void TextureBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("__alphaTexture",3d,94,14,53));
	outFields->push(HX_("__context",cf,e6,c5,9a));
	outFields->push(HX_("__format",57,fa,bd,a5));
	outFields->push(HX_("__glDepthRenderbuffer",74,4f,5f,25));
	outFields->push(HX_("__glFramebuffer",a8,a3,61,b3));
	outFields->push(HX_("__glStencilRenderbuffer",ad,a2,be,0a));
	outFields->push(HX_("__height",07,73,7b,aa));
	outFields->push(HX_("__internalFormat",74,81,bd,56));
	outFields->push(HX_("__optimizeForRenderToTexture",be,d4,90,b3));
	outFields->push(HX_("__samplerState",09,67,80,dc));
	outFields->push(HX_("__streamingLevels",51,a1,de,07));
	outFields->push(HX_("__textureContext",74,21,78,6f));
	outFields->push(HX_("__textureID",56,7e,75,dd));
	outFields->push(HX_("__textureTarget",6c,ff,b6,a1));
	outFields->push(HX_("__width",e6,0e,c1,34));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TextureBase_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display3D::textures::TextureBase */ ,(int)offsetof(TextureBase_obj,_hx___alphaTexture),HX_("__alphaTexture",3d,94,14,53)},
	{::hx::fsObject /*  ::openfl::display3D::Context3D */ ,(int)offsetof(TextureBase_obj,_hx___context),HX_("__context",cf,e6,c5,9a)},
	{::hx::fsInt,(int)offsetof(TextureBase_obj,_hx___format),HX_("__format",57,fa,bd,a5)},
	{::hx::fsObject /*  ::lime::graphics::opengl::GLObject */ ,(int)offsetof(TextureBase_obj,_hx___glDepthRenderbuffer),HX_("__glDepthRenderbuffer",74,4f,5f,25)},
	{::hx::fsObject /*  ::lime::graphics::opengl::GLObject */ ,(int)offsetof(TextureBase_obj,_hx___glFramebuffer),HX_("__glFramebuffer",a8,a3,61,b3)},
	{::hx::fsObject /*  ::lime::graphics::opengl::GLObject */ ,(int)offsetof(TextureBase_obj,_hx___glStencilRenderbuffer),HX_("__glStencilRenderbuffer",ad,a2,be,0a)},
	{::hx::fsInt,(int)offsetof(TextureBase_obj,_hx___height),HX_("__height",07,73,7b,aa)},
	{::hx::fsInt,(int)offsetof(TextureBase_obj,_hx___internalFormat),HX_("__internalFormat",74,81,bd,56)},
	{::hx::fsBool,(int)offsetof(TextureBase_obj,_hx___optimizeForRenderToTexture),HX_("__optimizeForRenderToTexture",be,d4,90,b3)},
	{::hx::fsObject /*  ::openfl::display::_internal::SamplerState */ ,(int)offsetof(TextureBase_obj,_hx___samplerState),HX_("__samplerState",09,67,80,dc)},
	{::hx::fsInt,(int)offsetof(TextureBase_obj,_hx___streamingLevels),HX_("__streamingLevels",51,a1,de,07)},
	{::hx::fsObject /*  ::lime::graphics::RenderContext */ ,(int)offsetof(TextureBase_obj,_hx___textureContext),HX_("__textureContext",74,21,78,6f)},
	{::hx::fsObject /*  ::lime::graphics::opengl::GLObject */ ,(int)offsetof(TextureBase_obj,_hx___textureID),HX_("__textureID",56,7e,75,dd)},
	{::hx::fsInt,(int)offsetof(TextureBase_obj,_hx___textureTarget),HX_("__textureTarget",6c,ff,b6,a1)},
	{::hx::fsInt,(int)offsetof(TextureBase_obj,_hx___width),HX_("__width",e6,0e,c1,34)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TextureBase_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(void *) &TextureBase_obj::_hx___compressedFormats,HX_("__compressedFormats",bb,c7,22,d3)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(void *) &TextureBase_obj::_hx___compressedFormatsAlpha,HX_("__compressedFormatsAlpha",a3,69,ec,0f)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &TextureBase_obj::_hx___supportsBGRA,HX_("__supportsBGRA",58,53,57,0f)},
	{::hx::fsInt,(void *) &TextureBase_obj::_hx___textureFormat,HX_("__textureFormat",52,9b,58,18)},
	{::hx::fsInt,(void *) &TextureBase_obj::_hx___textureInternalFormat,HX_("__textureInternalFormat",6f,15,aa,a7)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TextureBase_obj_sMemberFields[] = {
	HX_("__alphaTexture",3d,94,14,53),
	HX_("__context",cf,e6,c5,9a),
	HX_("__format",57,fa,bd,a5),
	HX_("__glDepthRenderbuffer",74,4f,5f,25),
	HX_("__glFramebuffer",a8,a3,61,b3),
	HX_("__glStencilRenderbuffer",ad,a2,be,0a),
	HX_("__height",07,73,7b,aa),
	HX_("__internalFormat",74,81,bd,56),
	HX_("__optimizeForRenderToTexture",be,d4,90,b3),
	HX_("__samplerState",09,67,80,dc),
	HX_("__streamingLevels",51,a1,de,07),
	HX_("__textureContext",74,21,78,6f),
	HX_("__textureID",56,7e,75,dd),
	HX_("__textureTarget",6c,ff,b6,a1),
	HX_("__width",e6,0e,c1,34),
	HX_("dispose",9f,80,4c,bb),
	HX_("__getGLFramebuffer",92,f3,72,c9),
	HX_("__getImage",05,a2,78,c0),
	HX_("__getTexture",05,ca,d5,26),
	HX_("__setSamplerState",8b,e7,cf,5d),
	HX_("__uploadFromImage",30,88,86,ba),
	::String(null()) };

static void TextureBase_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureBase_obj::_hx___compressedFormats,"__compressedFormats");
	HX_MARK_MEMBER_NAME(TextureBase_obj::_hx___compressedFormatsAlpha,"__compressedFormatsAlpha");
	HX_MARK_MEMBER_NAME(TextureBase_obj::_hx___supportsBGRA,"__supportsBGRA");
	HX_MARK_MEMBER_NAME(TextureBase_obj::_hx___textureFormat,"__textureFormat");
	HX_MARK_MEMBER_NAME(TextureBase_obj::_hx___textureInternalFormat,"__textureInternalFormat");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextureBase_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureBase_obj::_hx___compressedFormats,"__compressedFormats");
	HX_VISIT_MEMBER_NAME(TextureBase_obj::_hx___compressedFormatsAlpha,"__compressedFormatsAlpha");
	HX_VISIT_MEMBER_NAME(TextureBase_obj::_hx___supportsBGRA,"__supportsBGRA");
	HX_VISIT_MEMBER_NAME(TextureBase_obj::_hx___textureFormat,"__textureFormat");
	HX_VISIT_MEMBER_NAME(TextureBase_obj::_hx___textureInternalFormat,"__textureInternalFormat");
};

#endif

::hx::Class TextureBase_obj::__mClass;

static ::String TextureBase_obj_sStaticFields[] = {
	HX_("__compressedFormats",bb,c7,22,d3),
	HX_("__compressedFormatsAlpha",a3,69,ec,0f),
	HX_("__supportsBGRA",58,53,57,0f),
	HX_("__textureFormat",52,9b,58,18),
	HX_("__textureInternalFormat",6f,15,aa,a7),
	::String(null())
};

void TextureBase_obj::__register()
{
	TextureBase_obj _hx_dummy;
	TextureBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display3D.textures.TextureBase",2f,94,15,bc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextureBase_obj::__GetStatic;
	__mClass->mSetStaticField = &TextureBase_obj::__SetStatic;
	__mClass->mMarkFunc = TextureBase_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TextureBase_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextureBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextureBase_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextureBase_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextureBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextureBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TextureBase_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_6659164148434b5e_33_boot)
HXDLIN(  33)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("__getGLFramebuffer",92,f3,72,c9), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))
            				->setFixed(1,HX_("__textureContext",74,21,78,6f), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c))))))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_6659164148434b5e_37_boot)
HXDLIN(  37)		_hx___supportsBGRA = null();
            	}
}

} // end namespace openfl
} // end namespace display3D
} // end namespace textures