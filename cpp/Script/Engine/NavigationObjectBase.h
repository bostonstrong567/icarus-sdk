// /Script/Engine.NavigationObjectBase
// Derives from: AActor > UObject
// size 0x248, declared in Engine/Source/Runtime/Engine/Classes/Engine/NavigationObjectBase.h

UCLASS(Abstract, Config=Engine)
class ANavigationObjectBase : public AActor, public INavAgentInterface
{
public:
    UPROPERTY(Instanced) UCapsuleComponent* CapsuleComponent;  // 0x0228, size 0x8
    UPROPERTY(Instanced) UBillboardComponent* GoodSprite;  // 0x0230, size 0x8
    UPROPERTY(Instanced) UBillboardComponent* BadSprite;  // 0x0238, size 0x8
    UPROPERTY() uint8 bIsPIEPlayerStart : 1;  // 0x0240, mask 0x01

    // Virtual functions that start here:
    //   FindBase, ShouldBeBased, Validate
};
