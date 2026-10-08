// /Script/InteractiveToolsFramework.MeshSurfacePointToolBuilder
// Derives from: UInteractiveToolBuilder > UObject
// size 0x30, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseTools/MeshSurfacePointTool.h

UCLASS(Transient)
class UMeshSurfacePointToolBuilder : public UInteractiveToolBuilder
{
public:

    // Not reflected: the engine's scripting cannot see these.
    IToolStylusStateProviderAPI * StylusAPI;  // 0x0028

    // Virtual functions that start here:
    //   CreateNewTool, InitializeNewTool
};
