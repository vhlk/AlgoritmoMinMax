// Generated by Haxe 4.2.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_data_IDataItem
#include <haxe/ui/data/IDataItem.h>
#endif
#ifndef INCLUDED_haxe_ui_data_transformation_IItemTransformer
#include <haxe/ui/data/transformation/IItemTransformer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_98c3d89b78a0c130_5_new,"haxe.ui.data.DataSource","new",0xecb28029,"haxe.ui.data.DataSource.new","haxe/ui/data/DataSource.hx",5,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_26_get_allowCallbacks,"haxe.ui.data.DataSource","get_allowCallbacks",0x132d3065,"haxe.ui.data.DataSource.get_allowCallbacks","haxe/ui/data/DataSource.hx",26,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_28_set_allowCallbacks,"haxe.ui.data.DataSource","set_allowCallbacks",0xefdc62d9,"haxe.ui.data.DataSource.set_allowCallbacks","haxe/ui/data/DataSource.hx",28,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_41_get_data,"haxe.ui.data.DataSource","get_data",0x12e0894a,"haxe.ui.data.DataSource.get_data","haxe/ui/data/DataSource.hx",41,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_43_set_data,"haxe.ui.data.DataSource","set_data",0xc13de2be,"haxe.ui.data.DataSource.set_data","haxe/ui/data/DataSource.hx",43,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_51_get_size,"haxe.ui.data.DataSource","get_size",0x1cd0d3e1,"haxe.ui.data.DataSource.get_size","haxe/ui/data/DataSource.hx",51,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_54_get,"haxe.ui.data.DataSource","get",0xecad305f,"haxe.ui.data.DataSource.get","haxe/ui/data/DataSource.hx",54,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_65_indexOf,"haxe.ui.data.DataSource","indexOf",0x2f2c1112,"haxe.ui.data.DataSource.indexOf","haxe/ui/data/DataSource.hx",65,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_73_add,"haxe.ui.data.DataSource","add",0xeca8a1ea,"haxe.ui.data.DataSource.add","haxe/ui/data/DataSource.hx",73,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_82_insert,"haxe.ui.data.DataSource","insert",0x7171d710,"haxe.ui.data.DataSource.insert","haxe/ui/data/DataSource.hx",82,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_91_remove,"haxe.ui.data.DataSource","remove",0xd81d301b,"haxe.ui.data.DataSource.remove","haxe/ui/data/DataSource.hx",91,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_100_update,"haxe.ui.data.DataSource","update",0x5a9a19e0,"haxe.ui.data.DataSource.update","haxe/ui/data/DataSource.hx",100,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_109_clear,"haxe.ui.data.DataSource","clear",0x0d9c6596,"haxe.ui.data.DataSource.clear","haxe/ui/data/DataSource.hx",109,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_120_handleChanged,"haxe.ui.data.DataSource","handleChanged",0x6d133f35,"haxe.ui.data.DataSource.handleChanged","haxe/ui/data/DataSource.hx",120,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_130_handleGetSize,"haxe.ui.data.DataSource","handleGetSize",0xbf1cdeb8,"haxe.ui.data.DataSource.handleGetSize","haxe/ui/data/DataSource.hx",130,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_134_handleGetItem,"haxe.ui.data.DataSource","handleGetItem",0xb889030a,"haxe.ui.data.DataSource.handleGetItem","haxe/ui/data/DataSource.hx",134,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_138_handleIndexOf,"haxe.ui.data.DataSource","handleIndexOf",0x8105d70a,"haxe.ui.data.DataSource.handleIndexOf","haxe/ui/data/DataSource.hx",138,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_142_handleAddItem,"haxe.ui.data.DataSource","handleAddItem",0x22439615,"haxe.ui.data.DataSource.handleAddItem","haxe/ui/data/DataSource.hx",142,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_146_handleInsert,"haxe.ui.data.DataSource","handleInsert",0x6654f818,"haxe.ui.data.DataSource.handleInsert","haxe/ui/data/DataSource.hx",146,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_150_handleRemoveItem,"haxe.ui.data.DataSource","handleRemoveItem",0x199c0fd6,"haxe.ui.data.DataSource.handleRemoveItem","haxe/ui/data/DataSource.hx",150,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_154_handleGetData,"haxe.ui.data.DataSource","handleGetData",0xb52c9421,"haxe.ui.data.DataSource.handleGetData","haxe/ui/data/DataSource.hx",154,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_157_handleSetData,"haxe.ui.data.DataSource","handleSetData",0xa82e252d,"haxe.ui.data.DataSource.handleSetData","haxe/ui/data/DataSource.hx",157,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_161_handleClear,"haxe.ui.data.DataSource","handleClear",0x1b563d8e,"haxe.ui.data.DataSource.handleClear","haxe/ui/data/DataSource.hx",161,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_171_handleUpdateItem,"haxe.ui.data.DataSource","handleUpdateItem",0x5531c01b,"haxe.ui.data.DataSource.handleUpdateItem","haxe/ui/data/DataSource.hx",171,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_174_clone,"haxe.ui.data.DataSource","clone",0x0da40766,"haxe.ui.data.DataSource.clone","haxe/ui/data/DataSource.hx",174,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_181_fromString,"haxe.ui.data.DataSource","fromString",0x3474f932,"haxe.ui.data.DataSource.fromString","haxe/ui/data/DataSource.hx",181,0xca832966)
namespace haxe{
namespace ui{
namespace data{

void DataSource_obj::__construct(::Dynamic transformer){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_5_new)
HXLINE(  15)		this->onClear = null();
HXLINE(  14)		this->onRemove = null();
HXLINE(  13)		this->onUpdate = null();
HXLINE(  12)		this->onInsert = null();
HXLINE(  11)		this->onAdd = null();
HXLINE(  18)		this->transformer = transformer;
HXLINE(  19)		this->_allowCallbacks = true;
HXLINE(  20)		this->_changed = false;
            	}

Dynamic DataSource_obj::__CreateEmpty() { return new DataSource_obj; }

void *DataSource_obj::_hx_vtable = 0;

Dynamic DataSource_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DataSource_obj > _hx_result = new DataSource_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DataSource_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1af18d4d;
}

bool DataSource_obj::get_allowCallbacks(){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_26_get_allowCallbacks)
HXDLIN(  26)		return this->_allowCallbacks;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,get_allowCallbacks,return )

bool DataSource_obj::set_allowCallbacks(bool value){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_28_set_allowCallbacks)
HXLINE(  29)		this->_allowCallbacks = value;
HXLINE(  30)		bool _hx_tmp;
HXDLIN(  30)		if ((this->_allowCallbacks == true)) {
HXLINE(  30)			_hx_tmp = (this->_changed == true);
            		}
            		else {
HXLINE(  30)			_hx_tmp = false;
            		}
HXDLIN(  30)		if (_hx_tmp) {
HXLINE(  31)			this->_changed = false;
HXLINE(  32)			if (::hx::IsNotNull( this->onChange )) {
HXLINE(  33)				this->onChange();
            			}
            		}
HXLINE(  36)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,set_allowCallbacks,return )

 ::Dynamic DataSource_obj::get_data(){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_41_get_data)
HXDLIN(  41)		return this->handleGetData();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,get_data,return )

 ::Dynamic DataSource_obj::set_data( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_43_set_data)
HXLINE(  44)		this->handleSetData(value);
HXLINE(  45)		this->handleChanged();
HXLINE(  46)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,set_data,return )

int DataSource_obj::get_size(){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_51_get_size)
HXDLIN(  51)		return this->handleGetSize();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,get_size,return )

 ::Dynamic DataSource_obj::get(int index){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_54_get)
HXLINE(  55)		 ::Dynamic r = this->handleGetItem(index);
HXLINE(  56)		if (::Std_obj::isOfType(r,::hx::ClassOf< ::haxe::ui::data::IDataItem >())) {
HXLINE(  57)			 ::hx::interface_check(r,0xd62b28e2)->__SetField(HX_("onDataSourceChanged",b0,dc,ea,03),this->onChange,::hx::paccDynamic);
            		}
HXLINE(  59)		if (::hx::IsNotNull( this->transformer )) {
HXLINE(  60)			r = ::haxe::ui::data::transformation::IItemTransformer_obj::transformFrom(this->transformer,r);
            		}
HXLINE(  62)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,get,return )

int DataSource_obj::indexOf( ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_65_indexOf)
HXLINE(  66)		if (::hx::IsNotNull( this->transformer )) {
HXLINE(  67)			item = ::haxe::ui::data::transformation::IItemTransformer_obj::transformFrom(this->transformer,item);
            		}
HXLINE(  70)		return this->handleIndexOf(item);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,indexOf,return )

 ::Dynamic DataSource_obj::add( ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_73_add)
HXLINE(  74)		 ::Dynamic r = this->handleAddItem(item);
HXLINE(  75)		this->handleChanged();
HXLINE(  76)		bool _hx_tmp;
HXDLIN(  76)		if ((this->_allowCallbacks == true)) {
HXLINE(  76)			_hx_tmp = ::hx::IsNotNull( this->onAdd );
            		}
            		else {
HXLINE(  76)			_hx_tmp = false;
            		}
HXDLIN(  76)		if (_hx_tmp) {
HXLINE(  77)			this->onAdd(r);
            		}
HXLINE(  79)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,add,return )

 ::Dynamic DataSource_obj::insert(int index, ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_82_insert)
HXLINE(  83)		 ::Dynamic r = this->handleInsert(index,item);
HXLINE(  84)		this->handleChanged();
HXLINE(  85)		bool _hx_tmp;
HXDLIN(  85)		if ((this->_allowCallbacks == true)) {
HXLINE(  85)			_hx_tmp = ::hx::IsNotNull( this->onInsert );
            		}
            		else {
HXLINE(  85)			_hx_tmp = false;
            		}
HXDLIN(  85)		if (_hx_tmp) {
HXLINE(  86)			this->onInsert(index,r);
            		}
HXLINE(  88)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC2(DataSource_obj,insert,return )

 ::Dynamic DataSource_obj::remove( ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_91_remove)
HXLINE(  92)		 ::Dynamic r = this->handleRemoveItem(item);
HXLINE(  93)		this->handleChanged();
HXLINE(  94)		bool _hx_tmp;
HXDLIN(  94)		if ((this->_allowCallbacks == true)) {
HXLINE(  94)			_hx_tmp = ::hx::IsNotNull( this->onRemove );
            		}
            		else {
HXLINE(  94)			_hx_tmp = false;
            		}
HXDLIN(  94)		if (_hx_tmp) {
HXLINE(  95)			this->onRemove(r);
            		}
HXLINE(  97)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,remove,return )

 ::Dynamic DataSource_obj::update(int index, ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_100_update)
HXLINE( 101)		 ::Dynamic r = this->handleUpdateItem(index,item);
HXLINE( 102)		this->handleChanged();
HXLINE( 103)		bool _hx_tmp;
HXDLIN( 103)		if ((this->_allowCallbacks == true)) {
HXLINE( 103)			_hx_tmp = ::hx::IsNotNull( this->onUpdate );
            		}
            		else {
HXLINE( 103)			_hx_tmp = false;
            		}
HXDLIN( 103)		if (_hx_tmp) {
HXLINE( 104)			this->onUpdate(index,r);
            		}
HXLINE( 106)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC2(DataSource_obj,update,return )

void DataSource_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_109_clear)
HXLINE( 110)		bool o = this->_allowCallbacks;
HXLINE( 111)		this->_allowCallbacks = false;
HXLINE( 112)		this->handleClear();
HXLINE( 113)		this->_allowCallbacks = o;
HXLINE( 114)		this->handleChanged();
HXLINE( 115)		bool _hx_tmp;
HXDLIN( 115)		if ((this->_allowCallbacks == true)) {
HXLINE( 115)			_hx_tmp = ::hx::IsNotNull( this->onClear );
            		}
            		else {
HXLINE( 115)			_hx_tmp = false;
            		}
HXDLIN( 115)		if (_hx_tmp) {
HXLINE( 116)			this->onClear();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,clear,(void))

void DataSource_obj::handleChanged(){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_120_handleChanged)
HXLINE( 121)		this->_changed = true;
HXLINE( 122)		bool _hx_tmp;
HXDLIN( 122)		if ((this->_allowCallbacks == true)) {
HXLINE( 122)			_hx_tmp = ::hx::IsNotNull( this->onChange );
            		}
            		else {
HXLINE( 122)			_hx_tmp = false;
            		}
HXDLIN( 122)		if (_hx_tmp) {
HXLINE( 123)			this->_changed = false;
HXLINE( 124)			this->onChange();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,handleChanged,(void))

int DataSource_obj::handleGetSize(){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_130_handleGetSize)
HXDLIN( 130)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,handleGetSize,return )

 ::Dynamic DataSource_obj::handleGetItem(int index){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_134_handleGetItem)
HXDLIN( 134)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,handleGetItem,return )

int DataSource_obj::handleIndexOf( ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_138_handleIndexOf)
HXDLIN( 138)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,handleIndexOf,return )

 ::Dynamic DataSource_obj::handleAddItem( ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_142_handleAddItem)
HXDLIN( 142)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,handleAddItem,return )

 ::Dynamic DataSource_obj::handleInsert(int index, ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_146_handleInsert)
HXDLIN( 146)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(DataSource_obj,handleInsert,return )

 ::Dynamic DataSource_obj::handleRemoveItem( ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_150_handleRemoveItem)
HXDLIN( 150)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,handleRemoveItem,return )

 ::Dynamic DataSource_obj::handleGetData(){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_154_handleGetData)
HXDLIN( 154)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,handleGetData,return )

void DataSource_obj::handleSetData( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_157_handleSetData)
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,handleSetData,(void))

void DataSource_obj::handleClear(){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_161_handleClear)
HXLINE( 162)		::Dynamic cachedTransformer = this->transformer;
HXLINE( 163)		this->transformer = null();
HXLINE( 164)		while((this->get_size() > 0)){
HXLINE( 165)			this->remove(this->get(0));
            		}
HXLINE( 167)		this->transformer = cachedTransformer;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,handleClear,(void))

 ::Dynamic DataSource_obj::handleUpdateItem(int index, ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_171_handleUpdateItem)
HXDLIN( 171)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(DataSource_obj,handleUpdateItem,return )

 ::haxe::ui::data::DataSource DataSource_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_98c3d89b78a0c130_174_clone)
HXLINE( 175)		 ::haxe::ui::data::DataSource c =  ::haxe::ui::data::DataSource_obj::__alloc( HX_CTX ,null());
HXLINE( 176)		return c;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,clone,return )

 ::haxe::ui::data::DataSource DataSource_obj::fromString(::String data,::hx::Class type){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_181_fromString)
HXDLIN( 181)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DataSource_obj,fromString,return )


::hx::ObjectPtr< DataSource_obj > DataSource_obj::__new(::Dynamic transformer) {
	::hx::ObjectPtr< DataSource_obj > __this = new DataSource_obj();
	__this->__construct(transformer);
	return __this;
}

::hx::ObjectPtr< DataSource_obj > DataSource_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic transformer) {
	DataSource_obj *__this = (DataSource_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DataSource_obj), true, "haxe.ui.data.DataSource"));
	*(void **)__this = DataSource_obj::_hx_vtable;
	__this->__construct(transformer);
	return __this;
}

DataSource_obj::DataSource_obj()
{
}

void DataSource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DataSource);
	HX_MARK_MEMBER_NAME(onChange,"onChange");
	HX_MARK_MEMBER_NAME(transformer,"transformer");
	HX_MARK_MEMBER_NAME(_changed,"_changed");
	HX_MARK_MEMBER_NAME(onAdd,"onAdd");
	HX_MARK_MEMBER_NAME(onInsert,"onInsert");
	HX_MARK_MEMBER_NAME(onUpdate,"onUpdate");
	HX_MARK_MEMBER_NAME(onRemove,"onRemove");
	HX_MARK_MEMBER_NAME(onClear,"onClear");
	HX_MARK_MEMBER_NAME(_allowCallbacks,"_allowCallbacks");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_END_CLASS();
}

void DataSource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(onChange,"onChange");
	HX_VISIT_MEMBER_NAME(transformer,"transformer");
	HX_VISIT_MEMBER_NAME(_changed,"_changed");
	HX_VISIT_MEMBER_NAME(onAdd,"onAdd");
	HX_VISIT_MEMBER_NAME(onInsert,"onInsert");
	HX_VISIT_MEMBER_NAME(onUpdate,"onUpdate");
	HX_VISIT_MEMBER_NAME(onRemove,"onRemove");
	HX_VISIT_MEMBER_NAME(onClear,"onClear");
	HX_VISIT_MEMBER_NAME(_allowCallbacks,"_allowCallbacks");
	HX_VISIT_MEMBER_NAME(size,"size");
}

::hx::Val DataSource_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_data() ); }
		if (HX_FIELD_EQ(inName,"size") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_size() : size ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"onAdd") ) { return ::hx::Val( onAdd ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"insert") ) { return ::hx::Val( insert_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onClear") ) { return ::hx::Val( onClear ); }
		if (HX_FIELD_EQ(inName,"indexOf") ) { return ::hx::Val( indexOf_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onChange") ) { return ::hx::Val( onChange ); }
		if (HX_FIELD_EQ(inName,"_changed") ) { return ::hx::Val( _changed ); }
		if (HX_FIELD_EQ(inName,"onInsert") ) { return ::hx::Val( onInsert ); }
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return ::hx::Val( onUpdate ); }
		if (HX_FIELD_EQ(inName,"onRemove") ) { return ::hx::Val( onRemove ); }
		if (HX_FIELD_EQ(inName,"get_data") ) { return ::hx::Val( get_data_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_data") ) { return ::hx::Val( set_data_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return ::hx::Val( get_size_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transformer") ) { return ::hx::Val( transformer ); }
		if (HX_FIELD_EQ(inName,"handleClear") ) { return ::hx::Val( handleClear_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"handleInsert") ) { return ::hx::Val( handleInsert_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"handleChanged") ) { return ::hx::Val( handleChanged_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleGetSize") ) { return ::hx::Val( handleGetSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleGetItem") ) { return ::hx::Val( handleGetItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleIndexOf") ) { return ::hx::Val( handleIndexOf_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleAddItem") ) { return ::hx::Val( handleAddItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleGetData") ) { return ::hx::Val( handleGetData_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleSetData") ) { return ::hx::Val( handleSetData_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"allowCallbacks") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_allowCallbacks() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_allowCallbacks") ) { return ::hx::Val( _allowCallbacks ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"handleRemoveItem") ) { return ::hx::Val( handleRemoveItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleUpdateItem") ) { return ::hx::Val( handleUpdateItem_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_allowCallbacks") ) { return ::hx::Val( get_allowCallbacks_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_allowCallbacks") ) { return ::hx::Val( set_allowCallbacks_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool DataSource_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

::hx::Val DataSource_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_data(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"onAdd") ) { onAdd=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onClear") ) { onClear=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onChange") ) { onChange=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_changed") ) { _changed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onInsert") ) { onInsert=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onUpdate") ) { onUpdate=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onRemove") ) { onRemove=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transformer") ) { transformer=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"allowCallbacks") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_allowCallbacks(inValue.Cast< bool >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_allowCallbacks") ) { _allowCallbacks=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DataSource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("transformer",d9,b8,ca,32));
	outFields->push(HX_("_changed",75,0a,85,06));
	outFields->push(HX_("_allowCallbacks",e4,1d,a5,c2));
	outFields->push(HX_("allowCallbacks",45,d5,44,79));
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("size",c1,a0,53,4c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DataSource_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DataSource_obj,onChange),HX_("onChange",ef,87,1f,97)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(DataSource_obj,transformer),HX_("transformer",d9,b8,ca,32)},
	{::hx::fsBool,(int)offsetof(DataSource_obj,_changed),HX_("_changed",75,0a,85,06)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DataSource_obj,onAdd),HX_("onAdd",42,86,61,32)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DataSource_obj,onInsert),HX_("onInsert",b8,39,8a,7d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DataSource_obj,onUpdate),HX_("onUpdate",88,7c,b2,66)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DataSource_obj,onRemove),HX_("onRemove",c3,92,35,e4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DataSource_obj,onClear),HX_("onClear",ee,0f,99,de)},
	{::hx::fsBool,(int)offsetof(DataSource_obj,_allowCallbacks),HX_("_allowCallbacks",e4,1d,a5,c2)},
	{::hx::fsInt,(int)offsetof(DataSource_obj,size),HX_("size",c1,a0,53,4c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DataSource_obj_sStaticStorageInfo = 0;
#endif

static ::String DataSource_obj_sMemberFields[] = {
	HX_("onChange",ef,87,1f,97),
	HX_("transformer",d9,b8,ca,32),
	HX_("_changed",75,0a,85,06),
	HX_("onAdd",42,86,61,32),
	HX_("onInsert",b8,39,8a,7d),
	HX_("onUpdate",88,7c,b2,66),
	HX_("onRemove",c3,92,35,e4),
	HX_("onClear",ee,0f,99,de),
	HX_("_allowCallbacks",e4,1d,a5,c2),
	HX_("get_allowCallbacks",0e,b6,de,14),
	HX_("set_allowCallbacks",82,e8,8d,f1),
	HX_("get_data",b3,11,1e,c2),
	HX_("set_data",27,6b,7b,70),
	HX_("size",c1,a0,53,4c),
	HX_("get_size",4a,5c,0e,cc),
	HX_("get",96,80,4e,00),
	HX_("indexOf",c9,48,bf,e0),
	HX_("add",21,f2,49,00),
	HX_("insert",39,43,dd,9d),
	HX_("remove",44,9c,88,04),
	HX_("update",09,86,05,87),
	HX_("clear",8d,71,5b,48),
	HX_("handleChanged",2c,9a,41,e5),
	HX_("handleGetSize",af,39,4b,37),
	HX_("handleGetItem",01,5e,b7,30),
	HX_("handleIndexOf",01,32,34,f9),
	HX_("handleAddItem",0c,f1,71,9a),
	HX_("handleInsert",01,69,09,ec),
	HX_("handleRemoveItem",3f,a9,a5,92),
	HX_("handleGetData",18,ef,5a,2d),
	HX_("handleSetData",24,80,5c,20),
	HX_("handleClear",c5,1c,a5,fa),
	HX_("handleUpdateItem",84,59,3b,ce),
	HX_("clone",5d,13,63,48),
	::String(null()) };

::hx::Class DataSource_obj::__mClass;

static ::String DataSource_obj_sStaticFields[] = {
	HX_("fromString",db,2d,74,54),
	::String(null())
};

void DataSource_obj::__register()
{
	DataSource_obj _hx_dummy;
	DataSource_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.data.DataSource",b7,37,3b,2c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DataSource_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DataSource_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DataSource_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DataSource_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DataSource_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DataSource_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace data
