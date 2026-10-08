// /Script/InteractiveToolsFramework.MeshSelectionSet
// Derives from: USelectionSet > UObject
// size 0x80, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/SelectionSet.h

UCLASS(Transient)
class UMeshSelectionSet : public USelectionSet
{
public:
    UPROPERTY() TArray<int32> Vertices;  // 0x0040, size 0x10
    UPROPERTY() TArray<int32> Edges;  // 0x0050, size 0x10
    UPROPERTY() TArray<int32> Faces;  // 0x0060, size 0x10
    UPROPERTY() TArray<int32> Groups;  // 0x0070, size 0x10
};
