// /Script/Slate.ECustomizedToolMenuVisibility
UENUM()
enum class ECustomizedToolMenuVisibility : int32
{
    None = 0,
    Visible = 1,
    Hidden = 2,
};

// /Script/Slate.EDescendantScrollDestination
UENUM()
enum class EDescendantScrollDestination : uint8
{
    IntoView = 0,
    TopOrLeft = 1,
    Center = 2,
    BottomOrRight = 3,
};

// /Script/Slate.EListItemAlignment
UENUM()
enum class EListItemAlignment : uint8
{
    EvenlyDistributed = 0,
    EvenlySize = 1,
    EvenlyWide = 2,
    LeftAligned = 3,
    RightAligned = 4,
    CenterAligned = 5,
    Fill = 6,
};

// /Script/Slate.EMultiBlockType
UENUM()
enum class EMultiBlockType : uint8
{
    None = 0,
    ButtonRow = 1,
    EditableText = 2,
    Heading = 3,
    MenuEntry = 4,
    Separator = 5,
    ToolBarButton = 6,
    ToolBarComboButton = 7,
    Widget = 8,
};

// /Script/Slate.EMultiBoxType
UENUM()
enum class EMultiBoxType : uint8
{
    MenuBar = 0,
    ToolBar = 1,
    VerticalToolBar = 2,
    UniformToolBar = 3,
    Menu = 4,
    ButtonRow = 5,
};

// /Script/Slate.EMultipleKeyBindingIndex
UENUM()
enum class EMultipleKeyBindingIndex : uint8
{
    Primary = 0,
    Secondary = 1,
    NumChords = 2,
};

// /Script/Slate.EProgressBarFillType
UENUM()
enum class EProgressBarFillType : int32
{
    LeftToRight = 0,
    RightToLeft = 1,
    FillFromCenter = 2,
    TopToBottom = 3,
    BottomToTop = 4,
};

// /Script/Slate.EScrollWhenFocusChanges
UENUM()
enum class EScrollWhenFocusChanges : uint8
{
    NoScroll = 0,
    InstantScroll = 1,
    AnimatedScroll = 2,
};

// /Script/Slate.ESelectionMode
UENUM()
enum class ESelectionMode : int32
{
    None = 0,
    Single = 1,
    SingleToggle = 2,
    Multi = 3,
};

// /Script/Slate.EStretch
UENUM()
enum class EStretch : int32
{
    None = 0,
    Fill = 1,
    ScaleToFit = 2,
    ScaleToFitX = 3,
    ScaleToFitY = 4,
    ScaleToFill = 5,
    ScaleBySafeZone = 6,
    UserSpecified = 7,
};

// /Script/Slate.EStretchDirection
UENUM()
enum class EStretchDirection : int32
{
    Both = 0,
    DownOnly = 1,
    UpOnly = 2,
};

// /Script/Slate.ETableViewMode
UENUM()
enum class ETableViewMode : int32
{
    List = 0,
    Tile = 1,
    Tree = 2,
};

// /Script/Slate.ETextFlowDirection
UENUM()
enum class ETextFlowDirection : uint8
{
    Auto = 0,
    LeftToRight = 1,
    RightToLeft = 2,
};

// /Script/Slate.ETextJustify
UENUM()
enum class ETextJustify : int32
{
    Left = 0,
    Center = 1,
    Right = 2,
};

// /Script/Slate.ETextTransformPolicy
UENUM()
enum class ETextTransformPolicy : uint8
{
    None = 0,
    ToLower = 1,
    ToUpper = 2,
};

// /Script/Slate.ETextWrappingPolicy
UENUM()
enum class ETextWrappingPolicy : uint8
{
    DefaultWrapping = 0,
    AllowPerCharacterWrapping = 1,
};

// /Script/Slate.EUserInterfaceActionType
UENUM()
enum class EUserInterfaceActionType : uint8
{
    None = 0,
    Button = 1,
    ToggleButton = 2,
    RadioButton = 3,
    Check = 4,
    CollapsedButton = 5,
};

// /Script/Slate.EVirtualKeyboardDismissAction
UENUM()
enum class EVirtualKeyboardDismissAction : uint8
{
    TextChangeOnDismiss = 0,
    TextCommitOnAccept = 1,
    TextCommitOnDismiss = 2,
};

// /Script/Slate.EVirtualKeyboardTrigger
UENUM()
enum class EVirtualKeyboardTrigger : uint8
{
    OnFocusByPointer = 0,
    OnAllFocusEvents = 1,
};
