// /Script/Engine.PhysicalMaterialMask
// Derives from: UObject
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h

UCLASS()
class UPhysicalMaterialMask : public UObject
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 UVChannelIndex;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<TextureAddress> AddressX;  // 0x002C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<TextureAddress> AddressY;  // 0x002D, size 0x1
};
