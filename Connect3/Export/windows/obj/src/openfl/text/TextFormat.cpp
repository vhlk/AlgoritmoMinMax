// Generated by Haxe 4.2.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c5f39c48023aa9de_258_new,"openfl.text.TextFormat","new",0xfdb2c999,"openfl.text.TextFormat.new","openfl/text/TextFormat.hx",258,0xd3329397)
HX_LOCAL_STACK_FRAME(_hx_pos_c5f39c48023aa9de_276_clone,"openfl.text.TextFormat","clone",0x965d8cd6,"openfl.text.TextFormat.clone","openfl/text/TextFormat.hx",276,0xd3329397)
HX_LOCAL_STACK_FRAME(_hx_pos_c5f39c48023aa9de_300___merge,"openfl.text.TextFormat","__merge",0x0ccb8551,"openfl.text.TextFormat.__merge","openfl/text/TextFormat.hx",300,0xd3329397)
HX_LOCAL_STACK_FRAME(_hx_pos_c5f39c48023aa9de_328___toCacheKey,"openfl.text.TextFormat","__toCacheKey",0xeadfa3df,"openfl.text.TextFormat.__toCacheKey","openfl/text/TextFormat.hx",328,0xd3329397)
HX_LOCAL_STACK_FRAME(_hx_pos_c5f39c48023aa9de_54_boot,"openfl.text.TextFormat","boot",0xf6d69cd9,"openfl.text.TextFormat.boot","openfl/text/TextFormat.hx",54,0xd3329397)
namespace openfl{
namespace text{

void TextFormat_obj::__construct(::String font, ::Dynamic size, ::Dynamic color, ::Dynamic bold, ::Dynamic italic, ::Dynamic underline,::String url,::String target, ::Dynamic align, ::Dynamic leftMargin, ::Dynamic rightMargin, ::Dynamic indent, ::Dynamic leading){
            	HX_STACKFRAME(&_hx_pos_c5f39c48023aa9de_258_new)
HXLINE( 259)		this->font = font;
HXLINE( 260)		this->size = size;
HXLINE( 261)		this->color = color;
HXLINE( 262)		this->bold = bold;
HXLINE( 263)		this->italic = italic;
HXLINE( 264)		this->underline = underline;
HXLINE( 265)		this->url = url;
HXLINE( 266)		this->target = target;
HXLINE( 267)		this->align = align;
HXLINE( 268)		this->leftMargin = leftMargin;
HXLINE( 269)		this->rightMargin = rightMargin;
HXLINE( 270)		this->indent = indent;
HXLINE( 271)		this->leading = leading;
            	}

Dynamic TextFormat_obj::__CreateEmpty() { return new TextFormat_obj; }

void *TextFormat_obj::_hx_vtable = 0;

Dynamic TextFormat_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextFormat_obj > _hx_result = new TextFormat_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10],inArgs[11],inArgs[12]);
	return _hx_result;
}

bool TextFormat_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2a1c7fe1;
}

 ::openfl::text::TextFormat TextFormat_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_c5f39c48023aa9de_276_clone)
HXLINE( 277)		 ::openfl::text::TextFormat newFormat =  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,this->font,this->size,this->color,this->bold,this->italic,this->underline,this->url,this->target,null(),null(),null(),null(),null());
HXLINE( 279)		newFormat->align = this->align;
HXLINE( 280)		newFormat->leftMargin = this->leftMargin;
HXLINE( 281)		newFormat->rightMargin = this->rightMargin;
HXLINE( 282)		newFormat->indent = this->indent;
HXLINE( 283)		newFormat->leading = this->leading;
HXLINE( 285)		newFormat->blockIndent = this->blockIndent;
HXLINE( 286)		newFormat->bullet = this->bullet;
HXLINE( 287)		newFormat->kerning = this->kerning;
HXLINE( 288)		newFormat->letterSpacing = this->letterSpacing;
HXLINE( 289)		newFormat->tabStops = this->tabStops;
HXLINE( 291)		newFormat->_hx___ascent = this->_hx___ascent;
HXLINE( 292)		newFormat->_hx___descent = this->_hx___descent;
HXLINE( 294)		newFormat->_hx___cacheKey = this->_hx___toCacheKey();
HXLINE( 296)		return newFormat;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextFormat_obj,clone,return )

void TextFormat_obj::_hx___merge( ::openfl::text::TextFormat format){
            	HX_STACKFRAME(&_hx_pos_c5f39c48023aa9de_300___merge)
HXLINE( 301)		if (::hx::IsNotNull( format->font )) {
HXLINE( 301)			this->font = format->font;
            		}
HXLINE( 302)		if (::hx::IsNotNull( format->size )) {
HXLINE( 302)			this->size = format->size;
            		}
HXLINE( 303)		if (::hx::IsNotNull( format->color )) {
HXLINE( 303)			this->color = format->color;
            		}
HXLINE( 304)		if (::hx::IsNotNull( format->bold )) {
HXLINE( 304)			this->bold = format->bold;
            		}
HXLINE( 305)		if (::hx::IsNotNull( format->italic )) {
HXLINE( 305)			this->italic = format->italic;
            		}
HXLINE( 306)		if (::hx::IsNotNull( format->underline )) {
HXLINE( 306)			this->underline = format->underline;
            		}
HXLINE( 307)		if (::hx::IsNotNull( format->url )) {
HXLINE( 307)			this->url = format->url;
            		}
HXLINE( 308)		if (::hx::IsNotNull( format->target )) {
HXLINE( 308)			this->target = format->target;
            		}
HXLINE( 309)		if (::hx::IsNotNull( format->align )) {
HXLINE( 309)			this->align = format->align;
            		}
HXLINE( 310)		if (::hx::IsNotNull( format->leftMargin )) {
HXLINE( 310)			this->leftMargin = format->leftMargin;
            		}
HXLINE( 311)		if (::hx::IsNotNull( format->rightMargin )) {
HXLINE( 311)			this->rightMargin = format->rightMargin;
            		}
HXLINE( 312)		if (::hx::IsNotNull( format->indent )) {
HXLINE( 312)			this->indent = format->indent;
            		}
HXLINE( 313)		if (::hx::IsNotNull( format->leading )) {
HXLINE( 313)			this->leading = format->leading;
            		}
HXLINE( 314)		if (::hx::IsNotNull( format->blockIndent )) {
HXLINE( 314)			this->blockIndent = format->blockIndent;
            		}
HXLINE( 315)		if (::hx::IsNotNull( format->bullet )) {
HXLINE( 315)			this->bullet = format->bullet;
            		}
HXLINE( 316)		if (::hx::IsNotNull( format->kerning )) {
HXLINE( 316)			this->kerning = format->kerning;
            		}
HXLINE( 317)		if (::hx::IsNotNull( format->letterSpacing )) {
HXLINE( 317)			this->letterSpacing = format->letterSpacing;
            		}
HXLINE( 318)		if (::hx::IsNotNull( format->tabStops )) {
HXLINE( 318)			this->tabStops = format->tabStops;
            		}
HXLINE( 320)		if (::hx::IsNotNull( format->_hx___ascent )) {
HXLINE( 320)			this->_hx___ascent = format->_hx___ascent;
            		}
HXLINE( 321)		if (::hx::IsNotNull( format->_hx___descent )) {
HXLINE( 321)			this->_hx___descent = format->_hx___descent;
            		}
HXLINE( 323)		this->_hx___toCacheKey();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextFormat_obj,_hx___merge,(void))

::String TextFormat_obj::_hx___toCacheKey(){
            	HX_STACKFRAME(&_hx_pos_c5f39c48023aa9de_328___toCacheKey)
HXDLIN( 328)		::String _hx_tmp = ((HX_("",00,00,00,00) + this->font) + this->size);
HXDLIN( 328)		::String _hx_tmp1 = (_hx_tmp + ::Std_obj::string(this->bold));
HXDLIN( 328)		return (this->_hx___cacheKey = (_hx_tmp1 + ::Std_obj::string(this->italic)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextFormat_obj,_hx___toCacheKey,return )


::hx::ObjectPtr< TextFormat_obj > TextFormat_obj::__new(::String font, ::Dynamic size, ::Dynamic color, ::Dynamic bold, ::Dynamic italic, ::Dynamic underline,::String url,::String target, ::Dynamic align, ::Dynamic leftMargin, ::Dynamic rightMargin, ::Dynamic indent, ::Dynamic leading) {
	::hx::ObjectPtr< TextFormat_obj > __this = new TextFormat_obj();
	__this->__construct(font,size,color,bold,italic,underline,url,target,align,leftMargin,rightMargin,indent,leading);
	return __this;
}

::hx::ObjectPtr< TextFormat_obj > TextFormat_obj::__alloc(::hx::Ctx *_hx_ctx,::String font, ::Dynamic size, ::Dynamic color, ::Dynamic bold, ::Dynamic italic, ::Dynamic underline,::String url,::String target, ::Dynamic align, ::Dynamic leftMargin, ::Dynamic rightMargin, ::Dynamic indent, ::Dynamic leading) {
	TextFormat_obj *__this = (TextFormat_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextFormat_obj), true, "openfl.text.TextFormat"));
	*(void **)__this = TextFormat_obj::_hx_vtable;
	__this->__construct(font,size,color,bold,italic,underline,url,target,align,leftMargin,rightMargin,indent,leading);
	return __this;
}

TextFormat_obj::TextFormat_obj()
{
}

void TextFormat_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextFormat);
	HX_MARK_MEMBER_NAME(align,"align");
	HX_MARK_MEMBER_NAME(blockIndent,"blockIndent");
	HX_MARK_MEMBER_NAME(bold,"bold");
	HX_MARK_MEMBER_NAME(bullet,"bullet");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(indent,"indent");
	HX_MARK_MEMBER_NAME(italic,"italic");
	HX_MARK_MEMBER_NAME(kerning,"kerning");
	HX_MARK_MEMBER_NAME(leading,"leading");
	HX_MARK_MEMBER_NAME(leftMargin,"leftMargin");
	HX_MARK_MEMBER_NAME(letterSpacing,"letterSpacing");
	HX_MARK_MEMBER_NAME(rightMargin,"rightMargin");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(tabStops,"tabStops");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(underline,"underline");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(_hx___ascent,"__ascent");
	HX_MARK_MEMBER_NAME(_hx___descent,"__descent");
	HX_MARK_MEMBER_NAME(_hx___cacheKey,"__cacheKey");
	HX_MARK_END_CLASS();
}

void TextFormat_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(align,"align");
	HX_VISIT_MEMBER_NAME(blockIndent,"blockIndent");
	HX_VISIT_MEMBER_NAME(bold,"bold");
	HX_VISIT_MEMBER_NAME(bullet,"bullet");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(indent,"indent");
	HX_VISIT_MEMBER_NAME(italic,"italic");
	HX_VISIT_MEMBER_NAME(kerning,"kerning");
	HX_VISIT_MEMBER_NAME(leading,"leading");
	HX_VISIT_MEMBER_NAME(leftMargin,"leftMargin");
	HX_VISIT_MEMBER_NAME(letterSpacing,"letterSpacing");
	HX_VISIT_MEMBER_NAME(rightMargin,"rightMargin");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(tabStops,"tabStops");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(underline,"underline");
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(_hx___ascent,"__ascent");
	HX_VISIT_MEMBER_NAME(_hx___descent,"__descent");
	HX_VISIT_MEMBER_NAME(_hx___cacheKey,"__cacheKey");
}

::hx::Val TextFormat_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return ::hx::Val( url ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bold") ) { return ::hx::Val( bold ); }
		if (HX_FIELD_EQ(inName,"font") ) { return ::hx::Val( font ); }
		if (HX_FIELD_EQ(inName,"size") ) { return ::hx::Val( size ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { return ::hx::Val( align ); }
		if (HX_FIELD_EQ(inName,"color") ) { return ::hx::Val( color ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bullet") ) { return ::hx::Val( bullet ); }
		if (HX_FIELD_EQ(inName,"indent") ) { return ::hx::Val( indent ); }
		if (HX_FIELD_EQ(inName,"italic") ) { return ::hx::Val( italic ); }
		if (HX_FIELD_EQ(inName,"target") ) { return ::hx::Val( target ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"kerning") ) { return ::hx::Val( kerning ); }
		if (HX_FIELD_EQ(inName,"leading") ) { return ::hx::Val( leading ); }
		if (HX_FIELD_EQ(inName,"__merge") ) { return ::hx::Val( _hx___merge_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tabStops") ) { return ::hx::Val( tabStops ); }
		if (HX_FIELD_EQ(inName,"__ascent") ) { return ::hx::Val( _hx___ascent ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"underline") ) { return ::hx::Val( underline ); }
		if (HX_FIELD_EQ(inName,"__descent") ) { return ::hx::Val( _hx___descent ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"leftMargin") ) { return ::hx::Val( leftMargin ); }
		if (HX_FIELD_EQ(inName,"__cacheKey") ) { return ::hx::Val( _hx___cacheKey ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"blockIndent") ) { return ::hx::Val( blockIndent ); }
		if (HX_FIELD_EQ(inName,"rightMargin") ) { return ::hx::Val( rightMargin ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__toCacheKey") ) { return ::hx::Val( _hx___toCacheKey_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"letterSpacing") ) { return ::hx::Val( letterSpacing ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TextFormat_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bold") ) { bold=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"font") ) { font=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { align=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bullet") ) { bullet=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indent") ) { indent=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"italic") ) { italic=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"kerning") ) { kerning=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leading") ) { leading=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tabStops") ) { tabStops=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__ascent") ) { _hx___ascent=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"underline") ) { underline=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__descent") ) { _hx___descent=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"leftMargin") ) { leftMargin=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cacheKey") ) { _hx___cacheKey=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"blockIndent") ) { blockIndent=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rightMargin") ) { rightMargin=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"letterSpacing") ) { letterSpacing=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextFormat_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("align",c5,56,91,21));
	outFields->push(HX_("blockIndent",99,6d,be,33));
	outFields->push(HX_("bold",85,81,1b,41));
	outFields->push(HX_("bullet",42,92,90,d4));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("font",cf,5d,c0,43));
	outFields->push(HX_("indent",6c,0c,f3,93));
	outFields->push(HX_("italic",f0,2e,64,06));
	outFields->push(HX_("kerning",cc,ba,37,b0));
	outFields->push(HX_("leading",c6,32,61,09));
	outFields->push(HX_("leftMargin",95,2b,7e,e9));
	outFields->push(HX_("letterSpacing",3d,b7,03,f5));
	outFields->push(HX_("rightMargin",2a,3d,f2,23));
	outFields->push(HX_("size",c1,a0,53,4c));
	outFields->push(HX_("tabStops",9c,93,ba,f2));
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("underline",0c,15,d1,87));
	outFields->push(HX_("url",6f,2b,59,00));
	outFields->push(HX_("__ascent",7a,44,9f,e9));
	outFields->push(HX_("__descent",1a,ff,8d,9a));
	outFields->push(HX_("__cacheKey",9d,6f,59,3d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TextFormat_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextFormat_obj,align),HX_("align",c5,56,91,21)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextFormat_obj,blockIndent),HX_("blockIndent",99,6d,be,33)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextFormat_obj,bold),HX_("bold",85,81,1b,41)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextFormat_obj,bullet),HX_("bullet",42,92,90,d4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextFormat_obj,color),HX_("color",63,71,5c,4a)},
	{::hx::fsString,(int)offsetof(TextFormat_obj,font),HX_("font",cf,5d,c0,43)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextFormat_obj,indent),HX_("indent",6c,0c,f3,93)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextFormat_obj,italic),HX_("italic",f0,2e,64,06)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextFormat_obj,kerning),HX_("kerning",cc,ba,37,b0)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextFormat_obj,leading),HX_("leading",c6,32,61,09)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextFormat_obj,leftMargin),HX_("leftMargin",95,2b,7e,e9)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextFormat_obj,letterSpacing),HX_("letterSpacing",3d,b7,03,f5)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextFormat_obj,rightMargin),HX_("rightMargin",2a,3d,f2,23)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextFormat_obj,size),HX_("size",c1,a0,53,4c)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(TextFormat_obj,tabStops),HX_("tabStops",9c,93,ba,f2)},
	{::hx::fsString,(int)offsetof(TextFormat_obj,target),HX_("target",51,f3,ec,86)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextFormat_obj,underline),HX_("underline",0c,15,d1,87)},
	{::hx::fsString,(int)offsetof(TextFormat_obj,url),HX_("url",6f,2b,59,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextFormat_obj,_hx___ascent),HX_("__ascent",7a,44,9f,e9)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextFormat_obj,_hx___descent),HX_("__descent",1a,ff,8d,9a)},
	{::hx::fsString,(int)offsetof(TextFormat_obj,_hx___cacheKey),HX_("__cacheKey",9d,6f,59,3d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TextFormat_obj_sStaticStorageInfo = 0;
#endif

static ::String TextFormat_obj_sMemberFields[] = {
	HX_("align",c5,56,91,21),
	HX_("blockIndent",99,6d,be,33),
	HX_("bold",85,81,1b,41),
	HX_("bullet",42,92,90,d4),
	HX_("color",63,71,5c,4a),
	HX_("font",cf,5d,c0,43),
	HX_("indent",6c,0c,f3,93),
	HX_("italic",f0,2e,64,06),
	HX_("kerning",cc,ba,37,b0),
	HX_("leading",c6,32,61,09),
	HX_("leftMargin",95,2b,7e,e9),
	HX_("letterSpacing",3d,b7,03,f5),
	HX_("rightMargin",2a,3d,f2,23),
	HX_("size",c1,a0,53,4c),
	HX_("tabStops",9c,93,ba,f2),
	HX_("target",51,f3,ec,86),
	HX_("underline",0c,15,d1,87),
	HX_("url",6f,2b,59,00),
	HX_("__ascent",7a,44,9f,e9),
	HX_("__descent",1a,ff,8d,9a),
	HX_("__cacheKey",9d,6f,59,3d),
	HX_("clone",5d,13,63,48),
	HX_("__merge",98,fb,24,70),
	HX_("__toCacheKey",38,0c,d1,44),
	::String(null()) };

::hx::Class TextFormat_obj::__mClass;

void TextFormat_obj::__register()
{
	TextFormat_obj _hx_dummy;
	TextFormat_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.text.TextFormat",27,09,1e,68);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextFormat_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextFormat_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextFormat_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextFormat_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TextFormat_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c5f39c48023aa9de_54_boot)
HXDLIN(  54)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("clone",5d,13,63,48), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))))));
            	}
}

} // end namespace openfl
} // end namespace text
