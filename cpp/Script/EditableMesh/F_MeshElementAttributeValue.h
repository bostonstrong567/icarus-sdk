// /Script/EditableMesh.MeshElementAttributeValue
// size 0x50, declared in Engine/Plugins/Runtime/EditableMesh/Source/EditableMesh/Public/EditableMeshTypes.h

USTRUCT()
struct FMeshElementAttributeValue
{
private:
    EMeshElementAttributeType Type;  // 0x0000, not reflected
    FVector4 Value_FVector4;  // 0x0010, not reflected
    FVector Value_FVector;  // 0x0020, not reflected
    FVector2D Value_FVector2D;  // 0x002C, not reflected
    float Value_Float;  // 0x0034, not reflected
    int32 Value_Int;  // 0x0038, not reflected
    bool Value_Bool;  // 0x003C, not reflected
    FName Value_FName;  // 0x0040, not reflected
};
