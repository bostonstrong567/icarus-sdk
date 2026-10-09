// /Script/ControlRig.ControlRigDrawInstruction
// size 0xA0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Drawing/ControlRigDrawInstruction.h

USTRUCT()
struct FControlRigDrawInstruction
{
public:
    UPROPERTY(EditAnywhere) FName Name;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) TEnumAsByte<EControlRigDrawSettings> PrimitiveType;  // 0x0008, size 0x1
    UPROPERTY(EditAnywhere) TArray<FVector> Positions;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere) FLinearColor Color;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere) float Thickness;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere) FTransform Transform;  // 0x0040, size 0x30
    TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32> > MeshVerts;  // 0x0070, not reflected
    TArray<unsigned int,TSizedDefaultAllocator<32> > MeshIndices;  // 0x0080, not reflected
    FMaterialRenderProxy * MaterialRenderProxy;  // 0x0090, not reflected
};
