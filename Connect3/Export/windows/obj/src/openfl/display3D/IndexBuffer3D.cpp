// Generated by Haxe 4.2.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics__WebGLRenderContext_WebGLRenderContext_Impl_
#include <lime/graphics/_WebGLRenderContext/WebGLRenderContext_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_0f6a02916d47e310_39_new,"openfl.display3D.IndexBuffer3D","new",0x7b4eb39c,"openfl.display3D.IndexBuffer3D.new","openfl/display3D/IndexBuffer3D.hx",39,0x3d934296)
HX_LOCAL_STACK_FRAME(_hx_pos_0f6a02916d47e310_54_dispose,"openfl.display3D.IndexBuffer3D","dispose",0xbcffb1db,"openfl.display3D.IndexBuffer3D.dispose","openfl/display3D/IndexBuffer3D.hx",54,0x3d934296)
HX_LOCAL_STACK_FRAME(_hx_pos_0f6a02916d47e310_80_uploadFromByteArray,"openfl.display3D.IndexBuffer3D","uploadFromByteArray",0x61713322,"openfl.display3D.IndexBuffer3D.uploadFromByteArray","openfl/display3D/IndexBuffer3D.hx",80,0x3d934296)
HX_LOCAL_STACK_FRAME(_hx_pos_0f6a02916d47e310_95_uploadFromTypedArray,"openfl.display3D.IndexBuffer3D","uploadFromTypedArray",0x49f635fe,"openfl.display3D.IndexBuffer3D.uploadFromTypedArray","openfl/display3D/IndexBuffer3D.hx",95,0x3d934296)
HX_LOCAL_STACK_FRAME(_hx_pos_0f6a02916d47e310_118_uploadFromVector,"openfl.display3D.IndexBuffer3D","uploadFromVector",0xaabe3672,"openfl.display3D.IndexBuffer3D.uploadFromVector","openfl/display3D/IndexBuffer3D.hx",118,0x3d934296)
namespace openfl{
namespace display3D{

void IndexBuffer3D_obj::__construct( ::openfl::display3D::Context3D context3D,int numIndices, ::Dynamic bufferUsage){
            	HX_STACKFRAME(&_hx_pos_0f6a02916d47e310_39_new)
HXLINE(  40)		this->_hx___context = context3D;
HXLINE(  41)		this->_hx___numIndices = numIndices;
HXLINE(  43)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE(  44)		this->_hx___id = gl->createBuffer();
HXLINE(  46)		int _hx_tmp;
HXDLIN(  46)		if (::hx::IsEq( bufferUsage,0 )) {
HXLINE(  46)			_hx_tmp = gl->DYNAMIC_DRAW;
            		}
            		else {
HXLINE(  46)			_hx_tmp = gl->STATIC_DRAW;
            		}
HXDLIN(  46)		this->_hx___usage = _hx_tmp;
            	}

Dynamic IndexBuffer3D_obj::__CreateEmpty() { return new IndexBuffer3D_obj; }

void *IndexBuffer3D_obj::_hx_vtable = 0;

Dynamic IndexBuffer3D_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< IndexBuffer3D_obj > _hx_result = new IndexBuffer3D_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool IndexBuffer3D_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5cf47300;
}

void IndexBuffer3D_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_0f6a02916d47e310_54_dispose)
HXLINE(  55)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE(  56)		gl->deleteBuffer(this->_hx___id);
            	}


HX_DEFINE_DYNAMIC_FUNC0(IndexBuffer3D_obj,dispose,(void))

void IndexBuffer3D_obj::uploadFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,int startOffset,int count){
            	HX_GC_STACKFRAME(&_hx_pos_0f6a02916d47e310_80_uploadFromByteArray)
HXLINE(  82)		int offset = (byteArrayOffset + (startOffset * 2));
HXLINE(  83)		 ::Dynamic elements = null();
HXDLIN(  83)		 ::haxe::io::Bytes buffer = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(data);
HXDLIN(  83)		::cpp::VirtualArray array = null();
HXDLIN(  83)		 ::openfl::_Vector::IntVector vector = null();
HXDLIN(  83)		 ::lime::utils::ArrayBufferView view = null();
HXDLIN(  83)		 ::Dynamic byteoffset = offset;
HXDLIN(  83)		if (::hx::IsNull( byteoffset )) {
HXLINE(  83)			byteoffset = 0;
            		}
HXDLIN(  83)		 ::lime::utils::ArrayBufferView this1;
HXDLIN(  83)		if (::hx::IsNotNull( elements )) {
HXLINE(  83)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,6);
            		}
            		else {
HXLINE(  83)			if (::hx::IsNotNull( array )) {
HXLINE(  83)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN(  83)				_this->byteOffset = 0;
HXDLIN(  83)				_this->length = array->get_length();
HXDLIN(  83)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN(  83)				 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN(  83)				_this->buffer = this2;
HXDLIN(  83)				_this->copyFromArray(array,null());
HXDLIN(  83)				this1 = _this;
            			}
            			else {
HXLINE(  83)				if (::hx::IsNotNull( vector )) {
HXLINE(  83)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN(  83)					::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN(  83)					_this->byteOffset = 0;
HXDLIN(  83)					_this->length = array->get_length();
HXDLIN(  83)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN(  83)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN(  83)					_this->buffer = this2;
HXDLIN(  83)					_this->copyFromArray(array,null());
HXDLIN(  83)					this1 = _this;
            				}
            				else {
HXLINE(  83)					if (::hx::IsNotNull( view )) {
HXLINE(  83)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN(  83)						 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN(  83)						int srcLength = view->length;
HXDLIN(  83)						int srcByteOffset = view->byteOffset;
HXDLIN(  83)						int srcElementSize = view->bytesPerElement;
HXDLIN(  83)						int elementSize = _this->bytesPerElement;
HXDLIN(  83)						if ((view->type == _this->type)) {
HXLINE(  83)							int srcLength = srcData->length;
HXDLIN(  83)							int cloneLength = (srcLength - srcByteOffset);
HXDLIN(  83)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN(  83)							_this->buffer = this1;
HXDLIN(  83)							_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            						}
            						else {
HXLINE(  83)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            						}
HXDLIN(  83)						_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN(  83)						_this->byteOffset = 0;
HXDLIN(  83)						_this->length = srcLength;
HXDLIN(  83)						this1 = _this;
            					}
            					else {
HXLINE(  83)						if (::hx::IsNotNull( buffer )) {
HXLINE(  83)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN(  83)							int in_byteOffset = ( (int)(byteoffset) );
HXDLIN(  83)							if ((in_byteOffset < 0)) {
HXLINE(  83)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN(  83)							if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE(  83)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN(  83)							int bufferByteLength = buffer->length;
HXDLIN(  83)							int elementSize = _this->bytesPerElement;
HXDLIN(  83)							int newByteLength = bufferByteLength;
HXDLIN(  83)							if (::hx::IsNull( count )) {
HXLINE(  83)								newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN(  83)								if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE(  83)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN(  83)								if ((newByteLength < 0)) {
HXLINE(  83)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
            							else {
HXLINE(  83)								newByteLength = (count * _this->bytesPerElement);
HXDLIN(  83)								int newRange = (in_byteOffset + newByteLength);
HXDLIN(  83)								if ((newRange > bufferByteLength)) {
HXLINE(  83)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
HXDLIN(  83)							_this->buffer = buffer;
HXDLIN(  83)							_this->byteOffset = in_byteOffset;
HXDLIN(  83)							_this->byteLength = newByteLength;
HXDLIN(  83)							_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN(  83)							this1 = _this;
            						}
            						else {
HXLINE(  83)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt16Array",0a,c7,2d,d5)));
            						}
            					}
            				}
            			}
            		}
HXDLIN(  83)		this->uploadFromTypedArray(this1,null());
            	}


HX_DEFINE_DYNAMIC_FUNC4(IndexBuffer3D_obj,uploadFromByteArray,(void))

void IndexBuffer3D_obj::uploadFromTypedArray( ::lime::utils::ArrayBufferView data,::hx::Null< int >  __o_byteLength){
            		int byteLength = __o_byteLength.Default(-1);
            	HX_STACKFRAME(&_hx_pos_0f6a02916d47e310_95_uploadFromTypedArray)
HXLINE(  96)		if (::hx::IsNull( data )) {
HXLINE(  96)			return;
            		}
HXLINE(  97)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE(  98)		this->_hx___context->_hx___bindGLElementArrayBuffer(this->_hx___id);
HXLINE(  99)		::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::bufferData(gl,gl->ELEMENT_ARRAY_BUFFER,data,this->_hx___usage);
            	}


HX_DEFINE_DYNAMIC_FUNC2(IndexBuffer3D_obj,uploadFromTypedArray,(void))

void IndexBuffer3D_obj::uploadFromVector( ::openfl::_Vector::IntVector data,int startOffset,int count){
            	HX_GC_STACKFRAME(&_hx_pos_0f6a02916d47e310_118_uploadFromVector)
HXLINE( 122)		if (::hx::IsNull( data )) {
HXLINE( 122)			return;
            		}
HXLINE( 123)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 125)		int length = (startOffset + count);
HXLINE( 126)		 ::lime::utils::ArrayBufferView existingUInt16Array = this->_hx___tempUInt16Array;
HXLINE( 128)		bool _hx_tmp;
HXDLIN( 128)		if (::hx::IsNotNull( this->_hx___tempUInt16Array )) {
HXLINE( 128)			_hx_tmp = (this->_hx___tempUInt16Array->length < count);
            		}
            		else {
HXLINE( 128)			_hx_tmp = true;
            		}
HXDLIN( 128)		if (_hx_tmp) {
HXLINE( 130)			 ::haxe::io::Bytes buffer = null();
HXDLIN( 130)			::cpp::VirtualArray array = null();
HXDLIN( 130)			 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 130)			 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 130)			 ::Dynamic len = null();
HXDLIN( 130)			 ::lime::utils::ArrayBufferView this1;
HXDLIN( 130)			if (::hx::IsNotNull( count )) {
HXLINE( 130)				this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,count,6);
            			}
            			else {
HXLINE( 130)				if (::hx::IsNotNull( array )) {
HXLINE( 130)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 130)					_this->byteOffset = 0;
HXDLIN( 130)					_this->length = array->get_length();
HXDLIN( 130)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 130)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 130)					_this->buffer = this2;
HXDLIN( 130)					_this->copyFromArray(array,null());
HXDLIN( 130)					this1 = _this;
            				}
            				else {
HXLINE( 130)					if (::hx::IsNotNull( vector )) {
HXLINE( 130)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 130)						::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 130)						_this->byteOffset = 0;
HXDLIN( 130)						_this->length = array->get_length();
HXDLIN( 130)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 130)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 130)						_this->buffer = this2;
HXDLIN( 130)						_this->copyFromArray(array,null());
HXDLIN( 130)						this1 = _this;
            					}
            					else {
HXLINE( 130)						if (::hx::IsNotNull( view )) {
HXLINE( 130)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 130)							 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 130)							int srcLength = view->length;
HXDLIN( 130)							int srcByteOffset = view->byteOffset;
HXDLIN( 130)							int srcElementSize = view->bytesPerElement;
HXDLIN( 130)							int elementSize = _this->bytesPerElement;
HXDLIN( 130)							if ((view->type == _this->type)) {
HXLINE( 130)								int srcLength = srcData->length;
HXDLIN( 130)								int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 130)								 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 130)								_this->buffer = this1;
HXDLIN( 130)								_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            							}
            							else {
HXLINE( 130)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            							}
HXDLIN( 130)							_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 130)							_this->byteOffset = 0;
HXDLIN( 130)							_this->length = srcLength;
HXDLIN( 130)							this1 = _this;
            						}
            						else {
HXLINE( 130)							if (::hx::IsNotNull( buffer )) {
HXLINE( 130)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 130)								int in_byteOffset = 0;
HXDLIN( 130)								if ((in_byteOffset < 0)) {
HXLINE( 130)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 130)								if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 130)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 130)								int bufferByteLength = buffer->length;
HXDLIN( 130)								int elementSize = _this->bytesPerElement;
HXDLIN( 130)								int newByteLength = bufferByteLength;
HXDLIN( 130)								if (::hx::IsNull( len )) {
HXLINE( 130)									newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 130)									if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 130)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 130)									if ((newByteLength < 0)) {
HXLINE( 130)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
            								else {
HXLINE( 130)									newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 130)									int newRange = (in_byteOffset + newByteLength);
HXDLIN( 130)									if ((newRange > bufferByteLength)) {
HXLINE( 130)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
HXDLIN( 130)								_this->buffer = buffer;
HXDLIN( 130)								_this->byteOffset = in_byteOffset;
HXDLIN( 130)								_this->byteLength = newByteLength;
HXDLIN( 130)								_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 130)								this1 = _this;
            							}
            							else {
HXLINE( 130)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt16Array",0a,c7,2d,d5)));
            							}
            						}
            					}
            				}
            			}
HXDLIN( 130)			this->_hx___tempUInt16Array = this1;
HXLINE( 132)			if (::hx::IsNotNull( existingUInt16Array )) {
HXLINE( 134)				 ::lime::utils::ArrayBufferView _this = this->_hx___tempUInt16Array;
HXDLIN( 134)				::cpp::VirtualArray array = null();
HXDLIN( 134)				int offset = 0;
HXDLIN( 134)				bool _hx_tmp;
HXDLIN( 134)				if (::hx::IsNotNull( existingUInt16Array )) {
HXLINE( 134)					_hx_tmp = ::hx::IsNull( array );
            				}
            				else {
HXLINE( 134)					_hx_tmp = false;
            				}
HXDLIN( 134)				if (_hx_tmp) {
HXLINE( 134)					_this->buffer->blit((offset * _this->bytesPerElement),existingUInt16Array->buffer,existingUInt16Array->byteOffset,existingUInt16Array->byteLength);
            				}
            				else {
HXLINE( 134)					bool _hx_tmp;
HXDLIN( 134)					if (::hx::IsNotNull( array )) {
HXLINE( 134)						_hx_tmp = ::hx::IsNull( existingUInt16Array );
            					}
            					else {
HXLINE( 134)						_hx_tmp = false;
            					}
HXDLIN( 134)					if (_hx_tmp) {
HXLINE( 134)						_this->copyFromArray(array,offset);
            					}
            					else {
HXLINE( 134)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid .set call. either view, or array must be not-null.",64,ba,b7,6c)));
            					}
            				}
            			}
            		}
HXLINE( 138)		{
HXLINE( 138)			int _g = startOffset;
HXDLIN( 138)			int _g1 = length;
HXDLIN( 138)			while((_g < _g1)){
HXLINE( 138)				_g = (_g + 1);
HXDLIN( 138)				int i = (_g - 1);
HXLINE( 140)				{
HXLINE( 140)					 ::lime::utils::ArrayBufferView this1 = this->_hx___tempUInt16Array;
HXDLIN( 140)					int val = data->get(i);
HXDLIN( 140)					 ::__hxcpp_memory_set_ui16(this1->buffer->b,(this1->byteOffset + ((i - startOffset) * 2)),val);
            				}
            			}
            		}
HXLINE( 143)		this->uploadFromTypedArray(this->_hx___tempUInt16Array,null());
            	}


HX_DEFINE_DYNAMIC_FUNC3(IndexBuffer3D_obj,uploadFromVector,(void))


::hx::ObjectPtr< IndexBuffer3D_obj > IndexBuffer3D_obj::__new( ::openfl::display3D::Context3D context3D,int numIndices, ::Dynamic bufferUsage) {
	::hx::ObjectPtr< IndexBuffer3D_obj > __this = new IndexBuffer3D_obj();
	__this->__construct(context3D,numIndices,bufferUsage);
	return __this;
}

::hx::ObjectPtr< IndexBuffer3D_obj > IndexBuffer3D_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context3D,int numIndices, ::Dynamic bufferUsage) {
	IndexBuffer3D_obj *__this = (IndexBuffer3D_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(IndexBuffer3D_obj), true, "openfl.display3D.IndexBuffer3D"));
	*(void **)__this = IndexBuffer3D_obj::_hx_vtable;
	__this->__construct(context3D,numIndices,bufferUsage);
	return __this;
}

IndexBuffer3D_obj::IndexBuffer3D_obj()
{
}

void IndexBuffer3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IndexBuffer3D);
	HX_MARK_MEMBER_NAME(_hx___context,"__context");
	HX_MARK_MEMBER_NAME(_hx___id,"__id");
	HX_MARK_MEMBER_NAME(_hx___memoryUsage,"__memoryUsage");
	HX_MARK_MEMBER_NAME(_hx___numIndices,"__numIndices");
	HX_MARK_MEMBER_NAME(_hx___tempUInt16Array,"__tempUInt16Array");
	HX_MARK_MEMBER_NAME(_hx___usage,"__usage");
	HX_MARK_END_CLASS();
}

void IndexBuffer3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___context,"__context");
	HX_VISIT_MEMBER_NAME(_hx___id,"__id");
	HX_VISIT_MEMBER_NAME(_hx___memoryUsage,"__memoryUsage");
	HX_VISIT_MEMBER_NAME(_hx___numIndices,"__numIndices");
	HX_VISIT_MEMBER_NAME(_hx___tempUInt16Array,"__tempUInt16Array");
	HX_VISIT_MEMBER_NAME(_hx___usage,"__usage");
}

::hx::Val IndexBuffer3D_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"__id") ) { return ::hx::Val( _hx___id ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__usage") ) { return ::hx::Val( _hx___usage ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__context") ) { return ::hx::Val( _hx___context ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__numIndices") ) { return ::hx::Val( _hx___numIndices ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__memoryUsage") ) { return ::hx::Val( _hx___memoryUsage ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"uploadFromVector") ) { return ::hx::Val( uploadFromVector_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__tempUInt16Array") ) { return ::hx::Val( _hx___tempUInt16Array ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return ::hx::Val( uploadFromByteArray_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromTypedArray") ) { return ::hx::Val( uploadFromTypedArray_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val IndexBuffer3D_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"__id") ) { _hx___id=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__usage") ) { _hx___usage=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__context") ) { _hx___context=inValue.Cast<  ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__numIndices") ) { _hx___numIndices=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__memoryUsage") ) { _hx___memoryUsage=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__tempUInt16Array") ) { _hx___tempUInt16Array=inValue.Cast<  ::lime::utils::ArrayBufferView >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IndexBuffer3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("__context",cf,e6,c5,9a));
	outFields->push(HX_("__id",fb,b6,13,3f));
	outFields->push(HX_("__memoryUsage",40,bf,50,c5));
	outFields->push(HX_("__numIndices",a1,00,08,4c));
	outFields->push(HX_("__tempUInt16Array",66,92,c0,bd));
	outFields->push(HX_("__usage",01,b6,8d,14));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo IndexBuffer3D_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display3D::Context3D */ ,(int)offsetof(IndexBuffer3D_obj,_hx___context),HX_("__context",cf,e6,c5,9a)},
	{::hx::fsObject /*  ::lime::graphics::opengl::GLObject */ ,(int)offsetof(IndexBuffer3D_obj,_hx___id),HX_("__id",fb,b6,13,3f)},
	{::hx::fsInt,(int)offsetof(IndexBuffer3D_obj,_hx___memoryUsage),HX_("__memoryUsage",40,bf,50,c5)},
	{::hx::fsInt,(int)offsetof(IndexBuffer3D_obj,_hx___numIndices),HX_("__numIndices",a1,00,08,4c)},
	{::hx::fsObject /*  ::lime::utils::ArrayBufferView */ ,(int)offsetof(IndexBuffer3D_obj,_hx___tempUInt16Array),HX_("__tempUInt16Array",66,92,c0,bd)},
	{::hx::fsInt,(int)offsetof(IndexBuffer3D_obj,_hx___usage),HX_("__usage",01,b6,8d,14)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *IndexBuffer3D_obj_sStaticStorageInfo = 0;
#endif

static ::String IndexBuffer3D_obj_sMemberFields[] = {
	HX_("__context",cf,e6,c5,9a),
	HX_("__id",fb,b6,13,3f),
	HX_("__memoryUsage",40,bf,50,c5),
	HX_("__numIndices",a1,00,08,4c),
	HX_("__tempUInt16Array",66,92,c0,bd),
	HX_("__usage",01,b6,8d,14),
	HX_("dispose",9f,80,4c,bb),
	HX_("uploadFromByteArray",e6,17,1b,ee),
	HX_("uploadFromTypedArray",ba,7c,f4,d1),
	HX_("uploadFromVector",2e,6f,6b,a8),
	::String(null()) };

::hx::Class IndexBuffer3D_obj::__mClass;

void IndexBuffer3D_obj::__register()
{
	IndexBuffer3D_obj _hx_dummy;
	IndexBuffer3D_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display3D.IndexBuffer3D",aa,f5,d5,3f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IndexBuffer3D_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< IndexBuffer3D_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IndexBuffer3D_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IndexBuffer3D_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display3D
