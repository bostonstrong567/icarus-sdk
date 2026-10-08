// /Game/BP/AI/Basic/Kea/BTS_UpdatePathBrakingDistance.BTS_UpdatePathBrakingDistance_C
// Derives from: UBTService_BlueprintBase > UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0xA8, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTS_UpdatePathBrakingDistance_C : public UBTService_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InitialBrakingDistance;  // 0x00A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DesiredBrakingDistance;  // 0x00A4, size 0x4

    UFUNCTION() void ExecuteUbergraph_BTS_UpdatePathBrakingDistance(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveActivationAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveDeactivationAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
