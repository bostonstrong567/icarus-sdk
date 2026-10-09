// /Script/GFur.FurLod
// size 0x10, declared in Engine/Plugins/Marketplace/GFurPRO/Source/GFur/Public/FurComponent.h

USTRUCT()
struct FFurLod
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ScreenSize;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LayerCount;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Lod;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool PhysicsEnabled;  // 0x000C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DisableMorphTargets;  // 0x000D, size 0x1
};
