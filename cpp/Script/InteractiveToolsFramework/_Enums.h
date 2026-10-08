// /Script/InteractiveToolsFramework.EInputCaptureRequestType
UENUM()
enum class EInputCaptureRequestType : int32
{
    Begin = 1,
    Ignore = 2,
};

// /Script/InteractiveToolsFramework.EInputCaptureSide
UENUM()
enum class EInputCaptureSide : int32
{
    None = 0,
    Left = 1,
    Right = 2,
    Both = 3,
    Any = 99,
};

// /Script/InteractiveToolsFramework.EInputCaptureState
UENUM()
enum class EInputCaptureState : int32
{
    Begin = 1,
    Continue = 2,
    End = 3,
    Ignore = 4,
};

// /Script/InteractiveToolsFramework.EInputDevices
UENUM()
enum class EInputDevices : int32
{
    None = 0,
    Keyboard = 1,
    Mouse = 2,
    Gamepad = 4,
    OculusTouch = 8,
    HTCViveWands = 16,
    AnySpatialDevice = 24,
    TabletFingers = 1024,
};

// /Script/InteractiveToolsFramework.ESceneSnapQueryTargetType
UENUM()
enum class ESceneSnapQueryTargetType : int32
{
    None = 0,
    MeshVertex = 1,
    MeshEdge = 2,
    Grid = 4,
    All = 7,
};

// /Script/InteractiveToolsFramework.ESceneSnapQueryType
UENUM()
enum class ESceneSnapQueryType : int32
{
    Position = 1,
    Rotation = 2,
};

// /Script/InteractiveToolsFramework.ESelectedObjectsModificationType
UENUM()
enum class ESelectedObjectsModificationType : int32
{
    Replace = 0,
    Add = 1,
    Remove = 2,
    Clear = 3,
};

// /Script/InteractiveToolsFramework.EStandardToolContextMaterials
UENUM()
enum class EStandardToolContextMaterials : int32
{
    VertexColorMaterial = 1,
};

// /Script/InteractiveToolsFramework.EToolChangeTrackingMode
UENUM()
enum class EToolChangeTrackingMode : int32
{
    NoChangeTracking = 1,
    UndoToExit = 2,
    FullUndoRedo = 3,
};

// /Script/InteractiveToolsFramework.EToolContextCoordinateSystem
UENUM()
enum class EToolContextCoordinateSystem : int32
{
    World = 0,
    Local = 1,
};

// /Script/InteractiveToolsFramework.EToolMessageLevel
UENUM()
enum class EToolMessageLevel : int32
{
    Internal = 0,
    UserMessage = 1,
    UserNotification = 2,
    UserWarning = 3,
    UserError = 4,
};

// /Script/InteractiveToolsFramework.EToolSide
UENUM()
enum class EToolSide : int32
{
    Left = 1,
    Mouse = 1,
    Right = 2,
};

// /Script/InteractiveToolsFramework.ETransformGizmoSubElements
UENUM()
enum class ETransformGizmoSubElements : int32
{
    None = 0,
    TranslateAxisX = 2,
    TranslateAxisY = 4,
    TranslateAxisZ = 8,
    TranslateAllAxes = 14,
    TranslatePlaneXY = 16,
    TranslatePlaneXZ = 32,
    TranslatePlaneYZ = 64,
    TranslateAllPlanes = 112,
    RotateAxisX = 128,
    RotateAxisY = 256,
    RotateAxisZ = 512,
    RotateAllAxes = 896,
    ScaleAxisX = 1024,
    ScaleAxisY = 2048,
    ScaleAxisZ = 4096,
    ScaleAllAxes = 7168,
    ScalePlaneYZ = 8192,
    ScalePlaneXZ = 16384,
    ScalePlaneXY = 32768,
    ScaleAllPlanes = 57344,
    ScaleUniform = 65536,
    StandardTranslateRotate = 1022,
    TranslateRotateUniformScale = 66558,
    FullTranslateRotateScale = 131070,
};

// /Script/InteractiveToolsFramework.EViewInteractionState
UENUM()
enum class EViewInteractionState : int32
{
    None = 0,
    Hovered = 1,
    Focused = 2,
};
