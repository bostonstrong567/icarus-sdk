// /Script/Foliage.FoliageType_Actor
// Derives from: UFoliageType > UObject
// size 0x3C0, declared in Engine/Source/Runtime/Foliage/Public/FoliageType_Actor.h

UCLASS(EditInlineNew, MinimalAPI)
class UFoliageType_Actor : public UFoliageType
{
public:
    UPROPERTY(EditAnywhere) TSubclassOf<AActor> ActorClass;  // 0x03B0, size 0x8
    UPROPERTY(EditAnywhere) bool bShouldAttachToBaseComponent;  // 0x03B8, size 0x1
};
