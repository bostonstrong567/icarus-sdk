// /Script/Icarus.TargetRangeTarget
// Derives from: AIcarusActor > AActor > UObject
// size 0x2E0, declared in Icarus/Source/Icarus/Systems/TargetRange/TargetRangeTarget.h

UCLASS(Config=Engine)
class ATargetRangeTarget : public AIcarusActor
{
public:
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool bAllowMultipleHits;  // 0x02C0, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool bHasBeenHit;  // 0x02C1, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool bRoundActive;  // 0x02C2, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MovementDistance;  // 0x02C4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MovementDelay;  // 0x02C8, size 0x4
    UPROPERTY(BlueprintAssignable) FOnTargetHit OnTargetHit;  // 0x02D0, size 0x10

    UFUNCTION(BlueprintImplementableEvent) void BP_EndRound();
    UFUNCTION(BlueprintImplementableEvent) int32 BP_GenerateScore(FIcarusDamagePacket DamagePacket);  // parameters 0xDC
    UFUNCTION(BlueprintImplementableEvent) void BP_OnHit(FIcarusDamagePacket DamagePacket);  // parameters 0xD8
    UFUNCTION(BlueprintImplementableEvent) void BP_ResetTarget();
    UFUNCTION(BlueprintImplementableEvent) void BP_StartRound();
    UFUNCTION() void OnActorDamagedHandler(FIcarusDamagePacket DamagePacket);  // parameters 0xD8
};
