// /Script/EditableMesh.PolygonGroupForPolygon
// size 0x8, declared in Engine/Plugins/Runtime/EditableMesh/Source/EditableMesh/Public/EditableMeshTypes.h

USTRUCT()
struct FPolygonGroupForPolygon
{
    UPROPERTY(BlueprintReadWrite) FPolygonID PolygonID;  // 0x0000, size 0x4
    UPROPERTY(BlueprintReadWrite) FPolygonGroupID PolygonGroupID;  // 0x0004, size 0x4
};
