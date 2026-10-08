// /Game/BP/Navigation/BP_IcarusJumpLink.BP_IcarusJumpLink_C
// Derives from: AIcarusNavLink > ANavLinkProxy > AActor > UObject
// size 0x2A8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_IcarusJumpLink_C : public AIcarusNavLink
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02A0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_IcarusJumpLink(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void JumpFinished();
    UFUNCTION(BlueprintCallable) void LaunchAgent(ACharacter* Agent, FVector Destination);  // parameters 0x14
    UFUNCTION(BlueprintImplementableEvent) void ReceiveSmartLinkReached(AActor* Agent, const FVector& Destination);  // parameters 0x14
};
