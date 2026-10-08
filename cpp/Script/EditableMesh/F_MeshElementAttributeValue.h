// /Script/EditableMesh.MeshElementAttributeValue
// size 0x50, declared in Engine/Plugins/Runtime/EditableMesh/Source/EditableMesh/Public/EditableMeshTypes.h

USTRUCT()
struct FMeshElementAttributeValue
{

    // Not reflected:
    EMeshElementAttributeType Type;  // 0x0000
    FVector4 Value_FVector4;  // 0x0010
    FVector Value_FVector;  // 0x0020
    FVector2D Value_FVector2D;  // 0x002C
    float Value_Float;  // 0x0034
    int32 Value_Int;  // 0x0038
    bool Value_Bool;  // 0x003C
    FName Value_FName;  // 0x0040
};
