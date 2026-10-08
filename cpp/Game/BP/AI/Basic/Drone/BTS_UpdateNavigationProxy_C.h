// /Game/BP/AI/Basic/Drone/BTS_UpdateNavigationProxy.BTS_UpdateNavigationProxy_C
// Derives from: UBTService_BlueprintBase > UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0x138, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTS_UpdateNavigationProxy_C : public UBTService_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector InitialAgentLocation;  // 0x00A0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetLocationKey;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector ProjectedLocationKey;  // 0x00D8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UNavigationPath* FoundNavigationPath;  // 0x0100, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentPathPoint;  // 0x0108, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FVector> CurrentPath;  // 0x0110, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NextPointThreshold;  // 0x0120, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PostProjectionHeightOffset;  // 0x0124, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector InitialAgentProjectionExtent;  // 0x0128, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastPointThreshold;  // 0x0134, size 0x4

    UFUNCTION() void ExecuteUbergraph_BTS_UpdateNavigationProxy(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveActivationAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveDeactivationAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);  // parameters 0xC
};
