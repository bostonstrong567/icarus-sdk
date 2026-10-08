// /Script/UMG.EBindingKind
UENUM()
enum class EBindingKind : uint8
{
    Function = 0,
    Property = 1,
};

// /Script/UMG.EDragPivot
UENUM()
enum class EDragPivot : uint8
{
    MouseDown = 0,
    TopLeft = 1,
    TopCenter = 2,
    TopRight = 3,
    CenterLeft = 4,
    CenterCenter = 5,
    CenterRight = 6,
    BottomLeft = 7,
    BottomCenter = 8,
    BottomRight = 9,
};

// /Script/UMG.EDynamicBoxType
UENUM()
enum class EDynamicBoxType : uint8
{
    Horizontal = 0,
    Vertical = 1,
    Wrap = 2,
    VerticalWrap = 3,
    Radial = 4,
    Overlay = 5,
};

// /Script/UMG.ESlateAccessibleBehavior
UENUM()
enum class ESlateAccessibleBehavior : uint8
{
    NotAccessible = 0,
    Auto = 1,
    Summary = 2,
    Custom = 3,
    ToolTip = 4,
};

// /Script/UMG.ESlateSizeRule
UENUM()
enum class ESlateSizeRule : int32
{
    Automatic = 0,
    Fill = 1,
};

// /Script/UMG.ESlateVisibility
UENUM()
enum class ESlateVisibility : uint8
{
    Visible = 0,
    Collapsed = 1,
    Hidden = 2,
    HitTestInvisible = 3,
    SelfHitTestInvisible = 4,
};

// /Script/UMG.ETickMode
UENUM()
enum class ETickMode : uint8
{
    Disabled = 0,
    Enabled = 1,
    Automatic = 2,
};

// /Script/UMG.EUMGSequencePlayMode
UENUM()
enum class EUMGSequencePlayMode : int32
{
    Forward = 0,
    Reverse = 1,
    PingPong = 2,
};

// /Script/UMG.EVirtualKeyboardType
UENUM()
enum class EVirtualKeyboardType : int32
{
    Default = 0,
    Number = 1,
    Web = 2,
    Email = 3,
    Password = 4,
    AlphaNumeric = 5,
};

// /Script/UMG.EWidgetAnimationEvent
UENUM()
enum class EWidgetAnimationEvent : uint8
{
    Started = 0,
    Finished = 1,
};

// /Script/UMG.EWidgetBlendMode
UENUM()
enum class EWidgetBlendMode : uint8
{
    Opaque = 0,
    Masked = 1,
    Transparent = 2,
};

// /Script/UMG.EWidgetDesignFlags
UENUM()
enum class EWidgetDesignFlags : uint8
{
    None = 0,
    Designing = 1,
    ShowOutline = 2,
    ExecutePreConstruct = 4,
};

// /Script/UMG.EWidgetGeometryMode
UENUM()
enum class EWidgetGeometryMode : uint8
{
    Plane = 0,
    Cylinder = 1,
};

// /Script/UMG.EWidgetInteractionSource
UENUM()
enum class EWidgetInteractionSource : uint8
{
    World = 0,
    Mouse = 1,
    CenterScreen = 2,
    Custom = 3,
};

// /Script/UMG.EWidgetSpace
UENUM()
enum class EWidgetSpace : uint8
{
    World = 0,
    Screen = 1,
};

// /Script/UMG.EWidgetTickFrequency
UENUM()
enum class EWidgetTickFrequency : uint8
{
    Never = 0,
    Auto = 1,
};

// /Script/UMG.EWidgetTimingPolicy
UENUM()
enum class EWidgetTimingPolicy : uint8
{
    RealTime = 0,
    GameTime = 1,
};

// /Script/UMG.EWindowVisibility
UENUM()
enum class EWindowVisibility : uint8
{
    Visible = 0,
    SelfHitTestInvisible = 1,
};
