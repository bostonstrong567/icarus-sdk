// /Script/NavigationSystem.NavCollisionCylinder
// size 0x14, declared in Engine/Source/Runtime/NavigationSystem/Public/NavCollision.h

USTRUCT()
struct FNavCollisionCylinder
{
    UPROPERTY(EditAnywhere) FVector Offset;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere) float Radius;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere) float Height;  // 0x0010, size 0x4
};
