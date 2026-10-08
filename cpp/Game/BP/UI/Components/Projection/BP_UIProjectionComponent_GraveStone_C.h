// /Game/BP/UI/Components/Projection/BP_UIProjectionComponent_GraveStone.BP_UIProjectionComponent_GraveStone_C
// Derives from: UBP_UIProjectionComponent_C > UActorComponent > UObject
// size 0x130, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_UIProjectionComponent_GraveStone_C : public UBP_UIProjectionComponent_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0120, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_Gravestone_C* Gravestone;  // 0x0128, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_UIProjectionComponent_GraveStone(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void PlayerStateUpdated();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
