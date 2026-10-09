// /Script/NavigationSystem.NavModifierComponent
// Derives from: UNavRelevantComponent > UActorComponent > UObject
// size 0x140, declared in Engine/Source/Runtime/NavigationSystem/Public/NavModifierComponent.h

UCLASS(Config=Engine)
class UNavModifierComponent : public UNavRelevantComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSubclassOf<UNavArea> AreaClass;  // 0x00E0, size 0x8
    UPROPERTY(EditAnywhere) FVector FailsafeExtent;  // 0x00E8, size 0xC
    UPROPERTY(EditAnywhere, Config) uint8 bIncludeAgentHeight : 1;  // 0x00F4, mask 0x01
protected:
    TArray<UNavModifierComponent::FRotatedBox,TSizedDefaultAllocator<32> > ComponentBounds;  // 0x00F8, not reflected
    FDelegateHandle TransformUpdateHandle;  // 0x0108, not reflected
    FTransform CachedTransform;  // 0x0110, not reflected
public:
    UFUNCTION(BlueprintCallable) void SetAreaClass(TSubclassOf<UNavArea> NewAreaClass);  // parameters 0x8
};
