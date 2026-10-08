// /Script/Icarus.IcarusNavLinkCustomComponent
// Derives from: UNavLinkCustomComponent > UNavRelevantComponent > UActorComponent > UObject
// size 0x1B8, declared in Icarus/Source/Icarus/Navigation/IcarusNavLinkCustomComponent.h

UCLASS(Config=Engine)
class UIcarusNavLinkCustomComponent : public UNavLinkCustomComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector RelativeStart;  // 0x0190, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector RelativeEnd;  // 0x019C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ENavLinkDirection> NavLinkDirection;  // 0x01A8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UNavArea> AreaClass;  // 0x01B0, size 0x8

    UFUNCTION(BlueprintNativeEvent) bool CanAgentTraverseLink(AActor* Agent) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetSmartLinkEnabled(bool bEnabled);  // parameters 0x1
    UFUNCTION(BlueprintNativeEvent) void TraversalFinished(AActor* Agent) const;  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void TraversalStarted(AActor* Agent) const;  // parameters 0x8

    // Virtual functions that start here:
    //   CanAgentTraverseLink_Implementation, TraversalFinished_Implementation
    //   TraversalStarted_Implementation
};
