// /Script/InteractiveToolsFramework.MeshSurfacePointTool
// Derives from: USingleSelectionTool > UInteractiveTool > UObject
// size 0xC0, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseTools/MeshSurfacePointTool.h

UCLASS(Transient)
class UMeshSurfacePointTool : public USingleSelectionTool
{
protected:
    bool bShiftToggle;  // 0x0098, not reflected
    bool bCtrlToggle;  // 0x0099, not reflected
    FRay LastWorldRay;  // 0x009C, not reflected
    IToolStylusStateProviderAPI * StylusAPI;  // 0x00B8, not reflected

    // Virtual functions that start here:
    //   GetCtrlToggle, GetCurrentDevicePressure, GetShiftToggle, HitTest, OnBeginDrag, OnEndDrag
    //   OnUpdateDrag, SetCtrlToggle, SetShiftToggle, SetStylusAPI
};
