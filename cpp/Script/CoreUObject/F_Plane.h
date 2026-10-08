// /Script/CoreUObject.Plane
// size 0x10, declared in Engine/Source/Runtime/Core/Public/Math/Plane.h

USTRUCT()
struct FPlane : public FVector
{
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) float W;  // 0x000C, size 0x4
};
