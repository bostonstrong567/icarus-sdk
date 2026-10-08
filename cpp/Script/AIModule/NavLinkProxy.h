// /Script/AIModule.NavLinkProxy
// Derives from: AActor > UObject
// size 0x270, declared in Engine/Source/Runtime/AIModule/Classes/Navigation/NavLinkProxy.h

UCLASS(Config=Engine)
class ANavLinkProxy : public AActor, public INavLinkHostInterface, public INavRelevantInterface
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FNavigationLink> PointLinks;  // 0x0230, size 0x10
    UPROPERTY() TArray<FNavigationSegmentLink> SegmentLinks;  // 0x0240, size 0x10
    UPROPERTY(EditAnywhere, Instanced) UNavLinkCustomComponent* SmartLinkComp;  // 0x0250, size 0x8
    UPROPERTY(EditAnywhere) bool bSmartLinkIsRelevant;  // 0x0258, size 0x1
    UPROPERTY(BlueprintAssignable) FSmartLinkReachedSignature OnSmartLinkReached;  // 0x0260, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasMovingAgents() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsSmartLinkEnabled() const;  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveSmartLinkReached(AActor* Agent, const FVector& Destination);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void ResumePathFollowing(AActor* Agent);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetSmartLinkEnabled(bool bEnabled);  // parameters 0x1
};
