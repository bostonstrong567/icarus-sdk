// /Script/NavigationSystem.NavCollisionBox
// size 0x18, declared in Engine/Source/Runtime/NavigationSystem/Public/NavCollision.h

USTRUCT()
struct FNavCollisionBox
{
public:
    UPROPERTY(EditAnywhere) FVector Offset;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere) FVector Extent;  // 0x000C, size 0xC
};
