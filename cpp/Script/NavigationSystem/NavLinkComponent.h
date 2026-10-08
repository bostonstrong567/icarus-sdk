// /Script/NavigationSystem.NavLinkComponent
// Derives from: UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x470, declared in Engine/Source/Runtime/NavigationSystem/Public/NavLinkComponent.h

UCLASS(Config=Engine)
class UNavLinkComponent : public UPrimitiveComponent, public INavLinkHostInterface
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FNavigationLink> Links;  // 0x0458, size 0x10
};
