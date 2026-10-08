// /Game/BP/AI/Basic/Mounts/BTTask_ProjectLocationToGeometry.BTTask_ProjectLocationToGeometry_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x148, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_ProjectLocationToGeometry_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector InLocationKey;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector OutProjectedLocationKey;  // 0x00D8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TargetLocation;  // 0x0100, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;  // 0x0110, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector PreTraceOffset;  // 0x0120, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector DownwardTraceDistance;  // 0x012C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> IgnoreActors;  // 0x0138, size 0x10

    UFUNCTION() void ExecuteUbergraph_BTTask_ProjectLocationToGeometry(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
