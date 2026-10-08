// /Script/InteractiveToolsFramework.MeshSurfacePointTool
// Derives from: USingleSelectionTool > UInteractiveTool > UObject
// size 0xC0, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseTools/MeshSurfacePointTool.h

UCLASS(Transient)
class UMeshSurfacePointTool : public USingleSelectionTool
{
public:

    // Not reflected: the engine's scripting cannot see these.
    bool bShiftToggle;  // 0x0098, protected
    bool bCtrlToggle;  // 0x0099, protected
    FRay LastWorldRay;  // 0x009C, protected
    IToolStylusStateProviderAPI * StylusAPI;  // 0x00B8, protected

    // Virtual functions that start here:
    //   GetCtrlToggle, GetCurrentDevicePressure, GetShiftToggle, HitTest, OnBeginDrag, OnEndDrag
    //   OnUpdateDrag, SetCtrlToggle, SetShiftToggle, SetStylusAPI
};
