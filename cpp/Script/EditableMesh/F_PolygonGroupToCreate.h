// /Script/EditableMesh.PolygonGroupToCreate
// size 0x18, declared in Engine/Plugins/Runtime/EditableMesh/Source/EditableMesh/Public/EditableMeshTypes.h

USTRUCT()
struct FPolygonGroupToCreate
{
public:
    UPROPERTY(BlueprintReadWrite) FMeshElementAttributeList PolygonGroupAttributes;  // 0x0000, size 0x10
    UPROPERTY(BlueprintReadWrite) FPolygonGroupID OriginalPolygonGroupID;  // 0x0010, size 0x4
};
