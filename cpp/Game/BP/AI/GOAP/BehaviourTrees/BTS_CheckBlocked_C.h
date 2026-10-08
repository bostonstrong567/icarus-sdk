// /Game/BP/AI/GOAP/BehaviourTrees/BTS_CheckBlocked.BTS_CheckBlocked_C
// Derives from: UBTService_BlueprintBase > UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0xD9, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTS_CheckBlocked_C : public UBTService_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector IsBlockedKey;  // 0x00A0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsBlocked;  // 0x00C8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsPlayingMontage;  // 0x00C9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LastUpdateLocation;  // 0x00CC, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsStationary;  // 0x00D8, size 0x1

    UFUNCTION() void ExecuteUbergraph_BTS_CheckBlocked(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);  // parameters 0x14
};
