// /Game/BP/Quests/Olympus/Omni/Recovery/BPQ_OLY_Omni_Recovery_Cargo.BPQ_OLY_Omni_Recovery_Cargo_C
// Derives from: ABPQ_Retrieve_Item_And_Spawn_Crate_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4C8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Omni_Recovery_Cargo_C : public ABPQ_Retrieve_Item_And_Spawn_Crate_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04C0, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Omni_Recovery_Cargo(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
