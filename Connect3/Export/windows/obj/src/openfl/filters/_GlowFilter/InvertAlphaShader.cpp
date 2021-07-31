// Generated by Haxe 4.2.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilterShader
#include <openfl/filters/BitmapFilterShader.h>
#endif
#ifndef INCLUDED_openfl_filters__GlowFilter_InvertAlphaShader
#include <openfl/filters/_GlowFilter/InvertAlphaShader.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_9729ccfc0a6c6d24_502_new,"openfl.filters._GlowFilter.InvertAlphaShader","new",0xf5d98ca4,"openfl.filters._GlowFilter.InvertAlphaShader.new","openfl/filters/GlowFilter.hx",502,0x5f568606)
namespace openfl{
namespace filters{
namespace _GlowFilter{

void InvertAlphaShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_9729ccfc0a6c6d24_502_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\n\t\tuniform sampler2D openfl_Texture;\n\t\tvarying vec2 vTexCoord;\n\n\t\tvoid main(void) {\n\t\t\tvec4 texel = texture2D(openfl_Texture, vTexCoord);\n\t\t\tgl_FragColor = vec4(texel.rgb, 1.0 - texel.a);\n\t\t}\n\t",3f,ff,59,ea);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\t\tuniform mat4 openfl_Matrix;\n\t\tvarying vec2 vTexCoord;\n\n\t\tvoid main(void) {\n\t\t\tgl_Position = openfl_Matrix * openfl_Position;\n\t\t\tvTexCoord = openfl_TextureCoord;\n\t\t}\n\t",3c,6e,5b,17);
            		}
HXLINE( 503)		super::__construct(null());
HXLINE( 479)		this->_hx___isGenerated = true;
HXDLIN( 479)		this->_hx___initGL();
            	}

Dynamic InvertAlphaShader_obj::__CreateEmpty() { return new InvertAlphaShader_obj; }

void *InvertAlphaShader_obj::_hx_vtable = 0;

Dynamic InvertAlphaShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< InvertAlphaShader_obj > _hx_result = new InvertAlphaShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool InvertAlphaShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x253b4db3) {
		if (inClassId<=(int)0x23b19f54) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x23b19f54;
		} else {
			return inClassId==(int)0x253b4db3;
		}
	} else {
		return inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< InvertAlphaShader_obj > InvertAlphaShader_obj::__new() {
	::hx::ObjectPtr< InvertAlphaShader_obj > __this = new InvertAlphaShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< InvertAlphaShader_obj > InvertAlphaShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	InvertAlphaShader_obj *__this = (InvertAlphaShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(InvertAlphaShader_obj), true, "openfl.filters._GlowFilter.InvertAlphaShader"));
	*(void **)__this = InvertAlphaShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

InvertAlphaShader_obj::InvertAlphaShader_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *InvertAlphaShader_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *InvertAlphaShader_obj_sStaticStorageInfo = 0;
#endif

::hx::Class InvertAlphaShader_obj::__mClass;

void InvertAlphaShader_obj::__register()
{
	InvertAlphaShader_obj _hx_dummy;
	InvertAlphaShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.filters._GlowFilter.InvertAlphaShader",b2,aa,ad,e0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< InvertAlphaShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InvertAlphaShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InvertAlphaShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace filters
} // end namespace _GlowFilter
