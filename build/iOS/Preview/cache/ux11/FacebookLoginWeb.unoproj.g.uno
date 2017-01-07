sealed class FacebookLoginWeb_FuseTriggersWhileBool_Value_Property: Uno.UX.Property<bool>
{
    [Uno.WeakReference] readonly Fuse.Triggers.WhileBool _obj;
    public FacebookLoginWeb_FuseTriggersWhileBool_Value_Property(Fuse.Triggers.WhileBool obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override bool Get() { return _obj.Value; }
    public override void Set(bool v, global::Uno.UX.IPropertyListener origin) { _obj.Value = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
sealed class FacebookLoginWeb_FuseControlsWebView_Url_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly Fuse.Controls.WebView _obj;
    public FacebookLoginWeb_FuseControlsWebView_Url_Property(Fuse.Controls.WebView obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get() { return _obj.Url; }
    public override void Set(string v, global::Uno.UX.IPropertyListener origin) { _obj.SetUrl(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class FacebookLoginWeb_FuseDrawingImageFill_Url_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly Fuse.Drawing.ImageFill _obj;
    public FacebookLoginWeb_FuseDrawingImageFill_Url_Property(Fuse.Drawing.ImageFill obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get() { return _obj.Url; }
    public override void Set(string v, global::Uno.UX.IPropertyListener origin) { _obj.Url = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
sealed class FacebookLoginWeb_FuseTriggersActionsDebugAction_Message_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly Fuse.Triggers.Actions.DebugAction _obj;
    public FacebookLoginWeb_FuseTriggersActionsDebugAction_Message_Property(Fuse.Triggers.Actions.DebugAction obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get() { return _obj.Message; }
    public override void Set(string v, global::Uno.UX.IPropertyListener origin) { _obj.Message = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
sealed class FacebookLoginWeb_FuseControlsTextControl_Value_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly Fuse.Controls.TextControl _obj;
    public FacebookLoginWeb_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get() { return _obj.Value; }
    public override void Set(string v, global::Uno.UX.IPropertyListener origin) { _obj.SetValue(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class FacebookLoginWeb_FuseElementsElement_Opacity_Property: Uno.UX.Property<float>
{
    [Uno.WeakReference] readonly Fuse.Elements.Element _obj;
    public FacebookLoginWeb_FuseElementsElement_Opacity_Property(Fuse.Elements.Element obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float Get() { return _obj.Opacity; }
    public override void Set(float v, global::Uno.UX.IPropertyListener origin) { _obj.SetOpacity(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
