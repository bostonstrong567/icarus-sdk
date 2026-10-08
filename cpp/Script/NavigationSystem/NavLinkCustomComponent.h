// /Script/NavigationSystem.NavLinkCustomComponent
// Derives from: UNavRelevantComponent > UActorComponent > UObject
// size 0x190, declared in Engine/Source/Runtime/NavigationSystem/Public/NavLinkCustomComponent.h

UCLASS(Config=Engine)
class UNavLinkCustomComponent : public UNavRelevantComponent, public INavLinkCustomInterface
{
public:
    UPROPERTY() uint32 NavLinkUserId;  // 0x00E8, size 0x4
    UPROPERTY(EditAnywhere) TSubclassOf<UNavArea> EnabledAreaClass;  // 0x00F0, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<UNavArea> DisabledAreaClass;  // 0x00F8, size 0x8
    UPROPERTY(EditAnywhere) FNavAgentSelector SupportedAgents;  // 0x0100, size 0x4
    UPROPERTY(EditAnywhere) FVector LinkRelativeStart;  // 0x0104, size 0xC
    UPROPERTY(EditAnywhere) FVector LinkRelativeEnd;  // 0x0110, size 0xC
    UPROPERTY(EditAnywhere) TEnumAsByte<ENavLinkDirection> LinkDirection;  // 0x011C, size 0x1
    UPROPERTY(EditAnywhere) uint8 bLinkEnabled : 1;  // 0x0120, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bNotifyWhenEnabled : 1;  // 0x0120, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bNotifyWhenDisabled : 1;  // 0x0120, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bCreateBoxObstacle : 1;  // 0x0120, mask 0x08
    UPROPERTY(EditAnywhere) FVector ObstacleOffset;  // 0x0124, size 0xC
    UPROPERTY(EditAnywhere) FVector ObstacleExtent;  // 0x0130, size 0xC
    UPROPERTY(EditAnywhere) TSubclassOf<UNavArea> ObstacleAreaClass;  // 0x0140, size 0x8
    UPROPERTY(EditAnywhere) float BroadcastRadius;  // 0x0148, size 0x4
    UPROPERTY(EditAnywhere) float BroadcastInterval;  // 0x014C, size 0x4
    UPROPERTY(EditAnywhere) TEnumAsByte<ECollisionChannel> BroadcastChannel;  // 0x0150, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    TDelegate<void __cdecl(UNavLinkCustomComponent *,TArray<UObject *,TSizedDefaultAllocator<32> > &),FDefaultDelegateUserPolicy> OnBroadcastFilter;  // 0x0158, protected
    TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32> > MovingAgents;  // 0x0168, protected
    TDelegate<void __cdecl(UNavLinkCustomComponent *,UObject *,FVector const &),FDefaultDelegateUserPolicy> OnMoveReachedLink;  // 0x0178, protected
    FTimerHandle TimerHandle_BroadcastStateChange;  // 0x0188, protected

    // Virtual functions that start here:
    //   GetLinkModifier
};
