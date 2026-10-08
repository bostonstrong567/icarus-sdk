// /Script/SlateCore.EButtonClickMethod
UENUM()
enum class EButtonClickMethod : int32
{
    DownAndUp = 0,
    MouseDown = 1,
    MouseUp = 2,
    PreciseClick = 3,
};

// /Script/SlateCore.EButtonPressMethod
UENUM()
enum class EButtonPressMethod : int32
{
    DownAndUp = 0,
    ButtonPress = 1,
    ButtonRelease = 2,
};

// /Script/SlateCore.EButtonTouchMethod
UENUM()
enum class EButtonTouchMethod : int32
{
    DownAndUp = 0,
    Down = 1,
    PreciseTap = 2,
};

// /Script/SlateCore.ECheckBoxState
UENUM()
enum class ECheckBoxState : uint8
{
    Unchecked = 0,
    Checked = 1,
    Undetermined = 2,
};

// /Script/SlateCore.EColorVisionDeficiency
UENUM()
enum class EColorVisionDeficiency : uint8
{
    NormalVision = 0,
    Deuteranope = 1,
    Protanope = 2,
    Tritanope = 3,
};

// /Script/SlateCore.EConsumeMouseWheel
UENUM()
enum class EConsumeMouseWheel : uint8
{
    WhenScrollingPossible = 0,
    Always = 1,
    Never = 2,
};

// /Script/SlateCore.EFlowDirectionPreference
UENUM()
enum class EFlowDirectionPreference : uint8
{
    Inherit = 0,
    Culture = 1,
    LeftToRight = 2,
    RightToLeft = 3,
};

// /Script/SlateCore.EFocusCause
UENUM()
enum class EFocusCause : uint8
{
    Mouse = 0,
    Navigation = 1,
    SetDirectly = 2,
    Cleared = 3,
    OtherWidgetLostFocus = 4,
    WindowActivate = 5,
};

// /Script/SlateCore.EFontHinting
UENUM()
enum class EFontHinting : uint8
{
    Default = 0,
    Auto = 1,
    AutoLight = 2,
    Monochrome = 3,
    None = 4,
};

// /Script/SlateCore.EFontLayoutMethod
UENUM()
enum class EFontLayoutMethod : uint8
{
    Metrics = 0,
    BoundingBox = 1,
};

// /Script/SlateCore.EFontLoadingPolicy
UENUM()
enum class EFontLoadingPolicy : uint8
{
    LazyLoad = 0,
    Stream = 1,
    Inline = 2,
};

// /Script/SlateCore.EHorizontalAlignment
UENUM()
enum class EHorizontalAlignment : int32
{
    HAlign_Fill = 0,
    HAlign_Left = 1,
    HAlign_Center = 2,
    HAlign_Right = 3,
};

// /Script/SlateCore.EMenuPlacement
UENUM()
enum class EMenuPlacement : int32
{
    MenuPlacement_BelowAnchor = 0,
    MenuPlacement_CenteredBelowAnchor = 1,
    MenuPlacement_BelowRightAnchor = 2,
    MenuPlacement_ComboBox = 3,
    MenuPlacement_ComboBoxRight = 4,
    MenuPlacement_MenuRight = 5,
    MenuPlacement_AboveAnchor = 6,
    MenuPlacement_CenteredAboveAnchor = 7,
    MenuPlacement_AboveRightAnchor = 8,
    MenuPlacement_MenuLeft = 9,
    MenuPlacement_Center = 10,
    MenuPlacement_RightLeftCenter = 11,
    MenuPlacement_MatchBottomLeft = 12,
};

// /Script/SlateCore.ENavigationGenesis
UENUM()
enum class ENavigationGenesis : uint8
{
    Keyboard = 0,
    Controller = 1,
    User = 2,
};

// /Script/SlateCore.ENavigationSource
UENUM()
enum class ENavigationSource : uint8
{
    FocusedWidget = 0,
    WidgetUnderCursor = 1,
};

// /Script/SlateCore.EOrientation
UENUM()
enum class EOrientation : int32
{
    Orient_Horizontal = 0,
    Orient_Vertical = 1,
};

// /Script/SlateCore.EScrollDirection
UENUM()
enum class EScrollDirection : int32
{
    Scroll_Down = 0,
    Scroll_Up = 1,
};

// /Script/SlateCore.ESelectInfo
UENUM()
enum class ESelectInfo : int32
{
    OnKeyPress = 0,
    OnNavigation = 1,
    OnMouseClick = 2,
    Direct = 3,
};

// /Script/SlateCore.ESlateBrushDrawType
UENUM()
enum class ESlateBrushDrawType : int32
{
    NoDrawType = 0,
    Box = 1,
    Border = 2,
    Image = 3,
};

// /Script/SlateCore.ESlateBrushImageType
UENUM()
enum class ESlateBrushImageType : int32
{
    NoImage = 0,
    FullColor = 1,
    Linear = 2,
};

// /Script/SlateCore.ESlateBrushMirrorType
UENUM()
enum class ESlateBrushMirrorType : int32
{
    NoMirror = 0,
    Horizontal = 1,
    Vertical = 2,
    Both = 3,
};

// /Script/SlateCore.ESlateBrushTileType
UENUM()
enum class ESlateBrushTileType : int32
{
    NoTile = 0,
    Horizontal = 1,
    Vertical = 2,
    Both = 3,
};

// /Script/SlateCore.ESlateCheckBoxType
UENUM()
enum class ESlateCheckBoxType : int32
{
    CheckBox = 0,
    ToggleButton = 1,
};

// /Script/SlateCore.ESlateColorStylingMode
UENUM()
enum class ESlateColorStylingMode : int32
{
    UseColor_Specified = 0,
    UseColor_Specified_Link = 1,
    UseColor_Foreground = 2,
    UseColor_Foreground_Subdued = 3,
};

// /Script/SlateCore.ESlateDebuggingFocusEvent
UENUM()
enum class ESlateDebuggingFocusEvent : uint8
{
    FocusChanging = 0,
    FocusLost = 1,
    FocusReceived = 2,
    MAX = 3,
};

// /Script/SlateCore.ESlateDebuggingInputEvent
UENUM()
enum class ESlateDebuggingInputEvent : uint8
{
    MouseMove = 0,
    MouseEnter = 1,
    MouseLeave = 2,
    PreviewMouseButtonDown = 3,
    MouseButtonDown = 4,
    MouseButtonUp = 5,
    MouseButtonDoubleClick = 6,
    MouseWheel = 7,
    TouchStart = 8,
    TouchEnd = 9,
    TouchForceChanged = 10,
    TouchFirstMove = 11,
    TouchMoved = 12,
    DragDetected = 13,
    DragEnter = 14,
    DragLeave = 15,
    DragOver = 16,
    DragDrop = 17,
    DropMessage = 18,
    PreviewKeyDown = 19,
    KeyDown = 20,
    KeyUp = 21,
    KeyChar = 22,
    AnalogInput = 23,
    TouchGesture = 24,
    MotionDetected = 25,
    MAX = 26,
};

// /Script/SlateCore.ESlateDebuggingNavigationMethod
UENUM()
enum class ESlateDebuggingNavigationMethod : uint8
{
    Unknown = 0,
    Explicit = 1,
    CustomDelegateBound = 2,
    CustomDelegateUnbound = 3,
    NextOrPrevious = 4,
    HitTestGrid = 5,
};

// /Script/SlateCore.ESlateDebuggingStateChangeEvent
UENUM()
enum class ESlateDebuggingStateChangeEvent : uint8
{
    MouseCaptureGained = 0,
    MouseCaptureLost = 1,
};

// /Script/SlateCore.ESlateParentWindowSearchMethod
UENUM()
enum class ESlateParentWindowSearchMethod : uint8
{
    ActiveWindow = 0,
    MainWindow = 1,
};

// /Script/SlateCore.ETextCommit
UENUM()
enum class ETextCommit : int32
{
    Default = 0,
    OnEnter = 1,
    OnUserMovedFocus = 2,
    OnCleared = 3,
};

// /Script/SlateCore.ETextShapingMethod
UENUM()
enum class ETextShapingMethod : uint8
{
    Auto = 0,
    KerningOnly = 1,
    FullShaping = 2,
};

// /Script/SlateCore.EUINavigation
UENUM()
enum class EUINavigation : uint8
{
    Left = 0,
    Right = 1,
    Up = 2,
    Down = 3,
    Next = 4,
    Previous = 5,
    Num = 6,
    Invalid = 7,
};

// /Script/SlateCore.EUINavigationAction
UENUM()
enum class EUINavigationAction : uint8
{
    Accept = 0,
    Back = 1,
    Num = 2,
    Invalid = 3,
};

// /Script/SlateCore.EUINavigationRule
UENUM()
enum class EUINavigationRule : uint8
{
    Escape = 0,
    Explicit = 1,
    Wrap = 2,
    Stop = 3,
    Custom = 4,
    CustomBoundary = 5,
    Invalid = 6,
};

// /Script/SlateCore.EVerticalAlignment
UENUM()
enum class EVerticalAlignment : int32
{
    VAlign_Fill = 0,
    VAlign_Top = 1,
    VAlign_Center = 2,
    VAlign_Bottom = 3,
};

// /Script/SlateCore.EWidgetClipping
UENUM()
enum class EWidgetClipping : uint8
{
    Inherit = 0,
    ClipToBounds = 1,
    ClipToBoundsWithoutIntersecting = 2,
    ClipToBoundsAlways = 3,
    OnDemand = 4,
};
