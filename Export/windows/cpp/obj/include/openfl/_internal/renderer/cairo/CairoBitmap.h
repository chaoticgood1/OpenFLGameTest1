#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoBitmap
#define INCLUDED_openfl__internal_renderer_cairo_CairoBitmap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS4(openfl,_internal,renderer,cairo,CairoBitmap)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{


class HXCPP_CLASS_ATTRIBUTES  CairoBitmap_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CairoBitmap_obj OBJ_;
		CairoBitmap_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CairoBitmap_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CairoBitmap_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("CairoBitmap"); }

		static Void render( ::openfl::display::Bitmap bitmap,::openfl::_internal::renderer::RenderSession renderSession);
		static Dynamic render_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace cairo

#endif /* INCLUDED_openfl__internal_renderer_cairo_CairoBitmap */ 
