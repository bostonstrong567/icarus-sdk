// /Game/BP/AI/GOAP/BehaviourTrees/BTT_IcarusGOAP_Check_For_Enemy.BTT_IcarusGOAP_Check_For_Enemy_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xD8, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_IcarusGOAP_Check_For_Enemy_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector Complete;  // 0x00B0, size 0x28

    UFUNCTION() void ExecuteUbergraph_BTT_IcarusGOAP_Check_For_Enemy(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecute(AActor* OwnerActor);  // parameters 0x8
};
